(function(){
    'use strict';
    var mod = angular.module('ods-widgets');

    mod.filter('get_full_name', [function() {
        return function(user) {
            if (user){
                if (user.first_name || user.last_name){
                    return user.first_name + ' ' + user.last_name + ' ('+user.username+')';
                } else {
                    return user.username;
                }
            }
        };
    }]);

//    mod.filter('detectLinks', [function() {
//        var regWeb = /\b(?:(?:https?|ftp|file):\/\/|www\.|ftp\.)(?:\([-A-Z0-9+&@#/%=~_|$?!:,.\[\]]*\)|[-A-Z0-9+&@#/%=~_|$?!:,.\[\]])*(?:\([-A-Z0-9+&@#/%=~_|$?!:,.\[\]]*\)|[A-Z0-9+&@#/%=~_|$\[\]])/gi;
//        var regEmail = /\bmailto:([A-Z0-9._%+-]+@(?:[A-Z0-9-]+\.)+[A-Z]{2,4})\b/gi;
//        return function(input) {
//            if (!input) {
//                return input;
//            }
//            input = input.replace(regWeb, '<a href="$&" target="_blank"><i class="icon-external-link-sign"></i> $&</a>');
//            input = input.replace(regEmail, '<a href="mailto:$1"><i class="icon-envelope-alt"></i> $1</a>');
//            return input;
//        };
//    }]);

    mod.filter('formatMeta', ['$filter', function($filter) {
        // Formats for display a value that can either by null/undefined, a string, or an array
        return function(input, type) {
            if (!input) {
                return '';
            }

            var separator = ', ';

            if(angular.isArray(input)) {
                // A list
                input = input.join(separator);
            }

            if (angular.isString(input)) {
                if (type === 'date') {
                    input = $filter('moment')(input, 'LL');
                } else if (type === 'datetime') {
                    input = $filter('moment')(input, 'LLL');
                }
            } else {
                input = input.toString();
            }
            return input;
        };
    }]);

    var fixDateFormat_pattern = /(\d{2})\/(\d{2})\/(\d{4}) (\d{2}):(\d{2}):(\d{2})/;
    mod.filter('fixDateFormat', [function(){
        // UGLY, we save a crappy date format, but I am not allowed to fix it, so I must patch it there :/
        return function(input){
            // 05/06/2013 09:43:45
            var match = fixDateFormat_pattern.exec(input);
            if (match){
                input = new Date(parseInt(match[3], 10), parseInt(match[1], 10)-1, parseInt(match[2], 10), parseInt(match[4], 10), parseInt(match[5], 10), parseInt(match[6], 10));
            }
            return input;
        };
    }]);

    /**
     *
     *  MD5 (Message-Digest Algorithm)
     *  http://www.webtoolkit.info/
     *
     **/
    var MD5 = function (string) {

        function RotateLeft(lValue, iShiftBits) {
            return (lValue<<iShiftBits) | (lValue>>>(32-iShiftBits));
        }

        function AddUnsigned(lX,lY) {
            var lX4,lY4,lX8,lY8,lResult;
            lX8 = (lX & 0x80000000);
            lY8 = (lY & 0x80000000);
            lX4 = (lX & 0x40000000);
            lY4 = (lY & 0x40000000);
            lResult = (lX & 0x3FFFFFFF)+(lY & 0x3FFFFFFF);
            if (lX4 & lY4) {
                return (lResult ^ 0x80000000 ^ lX8 ^ lY8);

            }
            if (lX4 | lY4) {
                if (lResult & 0x40000000) {
                    return (lResult ^ 0xC0000000 ^ lX8 ^ lY8);
                } else {
                    return (lResult ^ 0x40000000 ^ lX8 ^ lY8);
                }
            } else {
                return (lResult ^ lX8 ^ lY8);
            }
        }

        function F(x,y,z) { return (x & y) | ((~x) & z); }
        function G(x,y,z) { return (x & z) | (y & (~z)); }
        function H(x,y,z) { return (x ^ y ^ z); }
        function I(x,y,z) { return (y ^ (x | (~z))); }

        function FF(a,b,c,d,x,s,ac) {
            a = AddUnsigned(a, AddUnsigned(AddUnsigned(F(b, c, d), x), ac));
            return AddUnsigned(RotateLeft(a, s), b);
        }

        function GG(a,b,c,d,x,s,ac) {
            a = AddUnsigned(a, AddUnsigned(AddUnsigned(G(b, c, d), x), ac));
            return AddUnsigned(RotateLeft(a, s), b);
        }

        function HH(a,b,c,d,x,s,ac) {
            a = AddUnsigned(a, AddUnsigned(AddUnsigned(H(b, c, d), x), ac));
            return AddUnsigned(RotateLeft(a, s), b);
        }

        function II(a,b,c,d,x,s,ac) {
            a = AddUnsigned(a, AddUnsigned(AddUnsigned(I(b, c, d), x), ac));
            return AddUnsigned(RotateLeft(a, s), b);
        }

        function ConvertToWordArray(string) {
            var lWordCount;
            var lMessageLength = string.length;
            var lNumberOfWords_temp1=lMessageLength + 8;
            var lNumberOfWords_temp2=(lNumberOfWords_temp1-(lNumberOfWords_temp1 % 64))/64;
            var lNumberOfWords = (lNumberOfWords_temp2+1)*16;
            var lWordArray=Array(lNumberOfWords-1);
            var lBytePosition = 0;
            var lByteCount = 0;
            while ( lByteCount < lMessageLength ) {
                lWordCount = (lByteCount-(lByteCount % 4))/4;
                lBytePosition = (lByteCount % 4)*8;
                lWordArray[lWordCount] = (lWordArray[lWordCount] | (string.charCodeAt(lByteCount)<<lBytePosition));
                lByteCount++;
            }
            lWordCount = (lByteCount-(lByteCount % 4))/4;
            lBytePosition = (lByteCount % 4)*8;
            lWordArray[lWordCount] = lWordArray[lWordCount] | (0x80<<lBytePosition);
            lWordArray[lNumberOfWords-2] = lMessageLength<<3;
            lWordArray[lNumberOfWords-1] = lMessageLength>>>29;
            return lWordArray;
        }

        function WordToHex(lValue) {
            var WordToHexValue="",WordToHexValue_temp="",lByte,lCount;
            for (lCount = 0;lCount<=3;lCount++) {
                lByte = (lValue>>>(lCount*8)) & 255;
                WordToHexValue_temp = "0" + lByte.toString(16);
                WordToHexValue = WordToHexValue + WordToHexValue_temp.substr(WordToHexValue_temp.length-2,2);
            }
            return WordToHexValue;
        }

        function Utf8Encode(string) {
            string = string.replace(/\r\n/g,"\n");
            var utftext = "";

            for (var n = 0; n < string.length; n++) {

                var c = string.charCodeAt(n);

                if (c < 128) {
                    utftext += String.fromCharCode(c);
                }
                else if((c > 127) && (c < 2048)) {
                    utftext += String.fromCharCode((c >> 6) | 192);
                    utftext += String.fromCharCode((c & 63) | 128);
                }
                else {
                    utftext += String.fromCharCode((c >> 12) | 224);
                    utftext += String.fromCharCode(((c >> 6) & 63) | 128);
                    utftext += String.fromCharCode((c & 63) | 128);
                }

            }

            return utftext;
        }

        var x=Array();
        var k,AA,BB,CC,DD,a,b,c,d;
        var S11=7, S12=12, S13=17, S14=22;
        var S21=5, S22=9 , S23=14, S24=20;
        var S31=4, S32=11, S33=16, S34=23;
        var S41=6, S42=10, S43=15, S44=21;

        string = Utf8Encode(string);

        x = ConvertToWordArray(string);

        a = 0x67452301; b = 0xEFCDAB89; c = 0x98BADCFE; d = 0x10325476;

        for (k=0;k<x.length;k+=16) {
            AA=a; BB=b; CC=c; DD=d;
            a=FF(a,b,c,d,x[k+0], S11,0xD76AA478);
            d=FF(d,a,b,c,x[k+1], S12,0xE8C7B756);
            c=FF(c,d,a,b,x[k+2], S13,0x242070DB);
            b=FF(b,c,d,a,x[k+3], S14,0xC1BDCEEE);
            a=FF(a,b,c,d,x[k+4], S11,0xF57C0FAF);
            d=FF(d,a,b,c,x[k+5], S12,0x4787C62A);
            c=FF(c,d,a,b,x[k+6], S13,0xA8304613);
            b=FF(b,c,d,a,x[k+7], S14,0xFD469501);
            a=FF(a,b,c,d,x[k+8], S11,0x698098D8);
            d=FF(d,a,b,c,x[k+9], S12,0x8B44F7AF);
            c=FF(c,d,a,b,x[k+10],S13,0xFFFF5BB1);
            b=FF(b,c,d,a,x[k+11],S14,0x895CD7BE);
            a=FF(a,b,c,d,x[k+12],S11,0x6B901122);
            d=FF(d,a,b,c,x[k+13],S12,0xFD987193);
            c=FF(c,d,a,b,x[k+14],S13,0xA679438E);
            b=FF(b,c,d,a,x[k+15],S14,0x49B40821);
            a=GG(a,b,c,d,x[k+1], S21,0xF61E2562);
            d=GG(d,a,b,c,x[k+6], S22,0xC040B340);
            c=GG(c,d,a,b,x[k+11],S23,0x265E5A51);
            b=GG(b,c,d,a,x[k+0], S24,0xE9B6C7AA);
            a=GG(a,b,c,d,x[k+5], S21,0xD62F105D);
            d=GG(d,a,b,c,x[k+10],S22,0x2441453);
            c=GG(c,d,a,b,x[k+15],S23,0xD8A1E681);
            b=GG(b,c,d,a,x[k+4], S24,0xE7D3FBC8);
            a=GG(a,b,c,d,x[k+9], S21,0x21E1CDE6);
            d=GG(d,a,b,c,x[k+14],S22,0xC33707D6);
            c=GG(c,d,a,b,x[k+3], S23,0xF4D50D87);
            b=GG(b,c,d,a,x[k+8], S24,0x455A14ED);
            a=GG(a,b,c,d,x[k+13],S21,0xA9E3E905);
            d=GG(d,a,b,c,x[k+2], S22,0xFCEFA3F8);
            c=GG(c,d,a,b,x[k+7], S23,0x676F02D9);
            b=GG(b,c,d,a,x[k+12],S24,0x8D2A4C8A);
            a=HH(a,b,c,d,x[k+5], S31,0xFFFA3942);
            d=HH(d,a,b,c,x[k+8], S32,0x8771F681);
            c=HH(c,d,a,b,x[k+11],S33,0x6D9D6122);
            b=HH(b,c,d,a,x[k+14],S34,0xFDE5380C);
            a=HH(a,b,c,d,x[k+1], S31,0xA4BEEA44);
            d=HH(d,a,b,c,x[k+4], S32,0x4BDECFA9);
            c=HH(c,d,a,b,x[k+7], S33,0xF6BB4B60);
            b=HH(b,c,d,a,x[k+10],S34,0xBEBFBC70);
            a=HH(a,b,c,d,x[k+13],S31,0x289B7EC6);
            d=HH(d,a,b,c,x[k+0], S32,0xEAA127FA);
            c=HH(c,d,a,b,x[k+3], S33,0xD4EF3085);
            b=HH(b,c,d,a,x[k+6], S34,0x4881D05);
            a=HH(a,b,c,d,x[k+9], S31,0xD9D4D039);
            d=HH(d,a,b,c,x[k+12],S32,0xE6DB99E5);
            c=HH(c,d,a,b,x[k+15],S33,0x1FA27CF8);
            b=HH(b,c,d,a,x[k+2], S34,0xC4AC5665);
            a=II(a,b,c,d,x[k+0], S41,0xF4292244);
            d=II(d,a,b,c,x[k+7], S42,0x432AFF97);
            c=II(c,d,a,b,x[k+14],S43,0xAB9423A7);
            b=II(b,c,d,a,x[k+5], S44,0xFC93A039);
            a=II(a,b,c,d,x[k+12],S41,0x655B59C3);
            d=II(d,a,b,c,x[k+3], S42,0x8F0CCC92);
            c=II(c,d,a,b,x[k+10],S43,0xFFEFF47D);
            b=II(b,c,d,a,x[k+1], S44,0x85845DD1);
            a=II(a,b,c,d,x[k+8], S41,0x6FA87E4F);
            d=II(d,a,b,c,x[k+15],S42,0xFE2CE6E0);
            c=II(c,d,a,b,x[k+6], S43,0xA3014314);
            b=II(b,c,d,a,x[k+13],S44,0x4E0811A1);
            a=II(a,b,c,d,x[k+4], S41,0xF7537E82);
            d=II(d,a,b,c,x[k+11],S42,0xBD3AF235);
            c=II(c,d,a,b,x[k+2], S43,0x2AD7D2BB);
            b=II(b,c,d,a,x[k+9], S44,0xEB86D391);
            a=AddUnsigned(a,AA);
            b=AddUnsigned(b,BB);
            c=AddUnsigned(c,CC);
            d=AddUnsigned(d,DD);
        }

        var temp = WordToHex(a)+WordToHex(b)+WordToHex(c)+WordToHex(d);

        return temp.toLowerCase();
    };

    mod.filter('gravatar', [function() {
        return function(email, size) {
            if (!size) {
                size = 80;
            }
            if (email){
                return "//www.gravatar.com/avatar/" + MD5(email.toLowerCase()) + "?d=mm&s="+size;
            } else {
                return "//www.gravatar.com/avatar/00000000000000000000000000000000?d=mm&f=y&s="+size;
            }
        };
    }]);

    mod.filter('suggestTypeToIcon', function() {
        return function(type) {
            switch(type) {
                case 'dataset':
                    return 'archive';

                default:
                    return type;
            }
        };
    });

    mod.filter('eventClass', function() {
        return function(event) {
            switch(event) {
                case 'add_dataset':
                    return 'add';

                case 'edit_dataset':
                case 'publish_dataset':
                case 'unpublish_dataset':
                    return 'edit';

                case 'delete_dataset':
                    return 'delete';

                default:
                    return event;
            }
        };
    });

    mod.filter('event', ['translate', function(translate) {
        return function(event) {
            switch(event) {
                case '':
                    return translate('Any');

                case 'add_dataset':
                    return translate('Add');

                case 'edit_dataset':
                    return translate('Edit');

                case 'delete_dataset':
                    return translate('Delete');

                case 'publish_dataset':
                    return translate('Publish');

                case 'unpublish_dataset':
                    return translate('Unpublish');

                default:
                    return event;
            }
        };
    }]);

    mod.filter('toArray', function(){
        return function(dict) {
            if (dict){
                return $.map(dict, function(v, k){
                    return v;
                });
            } else {
                return [];
            }
        };
    });

    mod.filter('filterObject', function() {
        return function(dict, key) {
            var filtered = angular.copy(dict);
            if (!angular.isArray(key)) {
                key = [key];
            }
            for (var i = 0; i < key.length; i++) {
                delete(filtered[key[i]]);
            }
            return filtered;
        };
    });

    mod.filter('listFilter', [function() {
        // Filter a list with elements of given list
        return function(inputList, filterList) {
            if (!inputList) {
                return '';
            }
            if (!filterList) {
                return inputList;
            }
            Array.prototype.diff = function(a) {
                return this.filter(function(i) { return (a.indexOf(i) < 0);});
            };

            return inputList.filter(function(i) { return (filterList.indexOf(i) < 0);});
        };
    }]);

    mod.filter('vizConfig', function() {
        return function(dataset, fieldConfigName) {
            if (dataset.extra_metas && dataset.extra_metas.visualization && dataset.extra_metas.visualization[fieldConfigName]) {
                return dataset.extra_metas.visualization[fieldConfigName];
            }
            return null;
        };
    });

    mod.filter('hasFacet', function(){
        return function(dataset) {
            if (dataset) {
                dataset = new ODS.Dataset(dataset);
                return dataset.hasFacet();
            }
            return false;
        };
    });

    mod.filter('hasFieldType', function(){
        return function(dataset, fieldType) {
            if (angular.isObject(dataset)) {
                dataset = new ODS.Dataset(dataset);
                return dataset.hasFieldType(fieldType);
            }
            return false;
        };
    });

    mod.filter('countFieldType', function () {
        return function (dataset, fieldType) {
            if (dataset) {
                dataset = new ODS.Dataset(dataset);
                return dataset.countFieldType(fieldType);
            }
            return 0;
        };
    });

    mod.filter('countFieldTypes', function () {
        return function (dataset, fieldType) {
            if (dataset) {
                dataset = new ODS.Dataset(dataset);
                return dataset.countFieldTypes(fieldType);
            }
            return 0;
        };
    });

    $.objectDiff = function(a, b, c) {
        c = {};
        try {
            $.each([a, b], function(index, obj) {
                for (var prop in obj) {
                    if (obj.hasOwnProperty(prop)) {
                        if (typeof obj[prop] === "object" && obj[prop] !== null) {
                            c[prop] = $.objectDiff(a[prop], b[prop], c);
                        }
                        else {
                            if(a === undefined) a = {};
                            if(b === undefined) b = {};
                            if (a[prop] !== b[prop]) {
                                c[prop] = [a[prop], b[prop]];
                            }
                        }
                    }
                }
            });
        } catch(e){
            console.error(e);
        }
        return c;
    };
    mod.filter('diff', function(){
        return function(a, b){
            return $.objectDiff(a, b);
        };
    });

    mod.filter('range', function() {
        return function(input) {
            var lowBound, highBound;
            switch (input.length) {
                case 1:
                    lowBound = 0;
                    highBound = parseInt(input[0], 10) - 1;
                    break;
                case 2:
                    lowBound = parseInt(input[0], 10);
                    highBound = parseInt(input[1], 10);
                    break;
                default:
                    return input;
            }
            var result = [];
            for (var i = lowBound; i <= highBound; i++)
                result.push(i);
            return result;
        };
    });

    mod.filter('startsWith', function() {
        return function(input, searchedString) {
            return ODS.StringUtils.startsWith(input, searchedString);
        };
    });

    mod.filter('displayedRefines', ['translate', function(translate) {
        return function(searchOptions) {
            var displayedRefines = {};
            $.each(searchOptions, function(key, value){
                if(key == 'q'){
                    displayedRefines[translate('query')] = value;
                }
                if(key.slice(0,7) == 'refine.'){
                    if ( angular.isArray(value) ){
                        displayedRefines[key.slice(7)] = value.join(', ');
                    } else {
                        displayedRefines[key.slice(7)] = value;
                    }
                }
            });
            return displayedRefines;
        };
    }]);

    mod.filter('currentLanguage', ['config', function(config) {
        return function (language) {
            return language.toLowerCase() == config.LANGUAGE;
        };
    }]);

    mod.filter('siPrefixFormat', ['$filter', function ($filter) {
        return function (number) {
            if (number >= 1000000) {
                return $filter('number')(number/1000000, 0) + 'M';
            } else if (number >= 10000) {
                return $filter('number')(number/1000, 0) + 'k';
            } else if (number >= 1000) {
                return $filter('number')(number/1000, 1) + 'k';
            } else {
                return $filter('number')(number, 0);
            }
        };
    }]);

    mod.filter('min', function() {
        return function(n1, n2) {
            return Math.min(n1, n2);
        };
    });

    mod.filter('max', function() {
        return function(n1, n2) {
            return Math.max(n1, n2);
        };
    });

    mod.filter('isPositiveNumber', function() {
        return function (input) {
            if (angular.isNumber(input) && isFinite(input) && input >= 0 ) {
                return true;
            } else {
                return false;
            }
        };
    });

    mod.filter('incrementBound', function(){
        return function(firstBound) {
            if (angular.isDefined(firstBound) && firstBound !== "") {
                // if (Math.floor(firstBound) !== firstBound){
                //     var commaPosition = firstBound.toString().length - firstBound.toString().split('.')[1].length;
                //
                //     var secoundBound = (Number((firstBound.toString().replace('.', ''))) + 1).toString();
                //     if  (firstBound.toString()[0] === '0') {
                //         secoundBound = "0" + secoundBound;
                //     } else if (firstBound.toString()[0] === '-' && firstBound.toString()[1] === '0') {
                //         secoundBound = [secoundBound.slice(0, 1), "0" ,secoundBound.slice(1)].join('')
                //     }
                //     commaPosition = secoundBound.length - (secoundBound.length - commaPosition) - 1;
                //     secoundBound = [secoundBound.slice(0, commaPosition), ".", secoundBound.slice(commaPosition)].join('');
                // } else {
                //     var secoundBound = firstBound + 1
                // }
                // return secoundBound;
                return ODS.CalculationUtils.incrementByOneUnit(firstBound);
            } else {
                return null;
            }
        };
    });

    mod.filter('encodeURIComponent', ['$window', function($window) {
        return $window.encodeURIComponent;
    }]);
}());
