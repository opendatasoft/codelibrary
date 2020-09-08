(() => {
  var __defineProperty = Object.defineProperty;
  var __hasOwnProperty = Object.prototype.hasOwnProperty;
  var __commonJS = (callback, module) => () => {
    if (!module) {
      module = {exports: {}};
      callback(module.exports, module);
    }
    return module.exports;
  };
  var __markAsModule = (target) => {
    return __defineProperty(target, "__esModule", {value: true});
  };
  var __exportStar = (target, module) => {
    __markAsModule(target);
    if (typeof module === "object" || typeof module === "function") {
      for (let key in module)
        if (__hasOwnProperty.call(module, key) && !__hasOwnProperty.call(target, key) && key !== "default")
          __defineProperty(target, key, {get: () => module[key], enumerable: true});
    }
    return target;
  };
  var __toModule = (module) => {
    if (module && module.__esModule)
      return module;
    return __exportStar(__defineProperty({}, "default", {value: module, enumerable: true}), module);
  };

  // node_modules/mark.js/dist/mark.js
  var require_mark = __commonJS((exports, module) => {
    /*!***************************************************
    * mark.js v8.11.1
    * https://markjs.io/
    * Copyright (c) 2014–2018, Julian Kühnel
    * Released under the MIT license https://git.io/vwTVl
    *****************************************************/
    (function(global, factory) {
      typeof exports === "object" && typeof module !== "undefined" ? module.exports = factory() : typeof define === "function" && define.amd ? define(factory) : global.Mark = factory();
    })(exports, function() {
      "use strict";
      var _typeof = typeof Symbol === "function" && typeof Symbol.iterator === "symbol" ? function(obj) {
        return typeof obj;
      } : function(obj) {
        return obj && typeof Symbol === "function" && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj;
      };
      var classCallCheck = function(instance, Constructor) {
        if (!(instance instanceof Constructor)) {
          throw new TypeError("Cannot call a class as a function");
        }
      };
      var createClass = function() {
        function defineProperties(target, props) {
          for (var i = 0; i < props.length; i++) {
            var descriptor = props[i];
            descriptor.enumerable = descriptor.enumerable || false;
            descriptor.configurable = true;
            if ("value" in descriptor)
              descriptor.writable = true;
            Object.defineProperty(target, descriptor.key, descriptor);
          }
        }
        return function(Constructor, protoProps, staticProps) {
          if (protoProps)
            defineProperties(Constructor.prototype, protoProps);
          if (staticProps)
            defineProperties(Constructor, staticProps);
          return Constructor;
        };
      }();
      var _extends = Object.assign || function(target) {
        for (var i = 1; i < arguments.length; i++) {
          var source = arguments[i];
          for (var key in source) {
            if (Object.prototype.hasOwnProperty.call(source, key)) {
              target[key] = source[key];
            }
          }
        }
        return target;
      };
      var DOMIterator = function() {
        function DOMIterator2(ctx) {
          var iframes = arguments.length > 1 && arguments[1] !== void 0 ? arguments[1] : true;
          var exclude = arguments.length > 2 && arguments[2] !== void 0 ? arguments[2] : [];
          var iframesTimeout = arguments.length > 3 && arguments[3] !== void 0 ? arguments[3] : 5e3;
          classCallCheck(this, DOMIterator2);
          this.ctx = ctx;
          this.iframes = iframes;
          this.exclude = exclude;
          this.iframesTimeout = iframesTimeout;
        }
        createClass(DOMIterator2, [{
          key: "getContexts",
          value: function getContexts() {
            var ctx = void 0, filteredCtx = [];
            if (typeof this.ctx === "undefined" || !this.ctx) {
              ctx = [];
            } else if (NodeList.prototype.isPrototypeOf(this.ctx)) {
              ctx = Array.prototype.slice.call(this.ctx);
            } else if (Array.isArray(this.ctx)) {
              ctx = this.ctx;
            } else if (typeof this.ctx === "string") {
              ctx = Array.prototype.slice.call(document.querySelectorAll(this.ctx));
            } else {
              ctx = [this.ctx];
            }
            ctx.forEach(function(ctx2) {
              var isDescendant = filteredCtx.filter(function(contexts) {
                return contexts.contains(ctx2);
              }).length > 0;
              if (filteredCtx.indexOf(ctx2) === -1 && !isDescendant) {
                filteredCtx.push(ctx2);
              }
            });
            return filteredCtx;
          }
        }, {
          key: "getIframeContents",
          value: function getIframeContents(ifr, successFn) {
            var errorFn = arguments.length > 2 && arguments[2] !== void 0 ? arguments[2] : function() {
            };
            var doc = void 0;
            try {
              var ifrWin = ifr.contentWindow;
              doc = ifrWin.document;
              if (!ifrWin || !doc) {
                throw new Error("iframe inaccessible");
              }
            } catch (e) {
              errorFn();
            }
            if (doc) {
              successFn(doc);
            }
          }
        }, {
          key: "isIframeBlank",
          value: function isIframeBlank(ifr) {
            var bl = "about:blank", src = ifr.getAttribute("src").trim(), href = ifr.contentWindow.location.href;
            return href === bl && src !== bl && src;
          }
        }, {
          key: "observeIframeLoad",
          value: function observeIframeLoad(ifr, successFn, errorFn) {
            var _this = this;
            var called = false, tout = null;
            var listener = function listener2() {
              if (called) {
                return;
              }
              called = true;
              clearTimeout(tout);
              try {
                if (!_this.isIframeBlank(ifr)) {
                  ifr.removeEventListener("load", listener2);
                  _this.getIframeContents(ifr, successFn, errorFn);
                }
              } catch (e) {
                errorFn();
              }
            };
            ifr.addEventListener("load", listener);
            tout = setTimeout(listener, this.iframesTimeout);
          }
        }, {
          key: "onIframeReady",
          value: function onIframeReady(ifr, successFn, errorFn) {
            try {
              if (ifr.contentWindow.document.readyState === "complete") {
                if (this.isIframeBlank(ifr)) {
                  this.observeIframeLoad(ifr, successFn, errorFn);
                } else {
                  this.getIframeContents(ifr, successFn, errorFn);
                }
              } else {
                this.observeIframeLoad(ifr, successFn, errorFn);
              }
            } catch (e) {
              errorFn();
            }
          }
        }, {
          key: "waitForIframes",
          value: function waitForIframes(ctx, done) {
            var _this2 = this;
            var eachCalled = 0;
            this.forEachIframe(ctx, function() {
              return true;
            }, function(ifr) {
              eachCalled++;
              _this2.waitForIframes(ifr.querySelector("html"), function() {
                if (!--eachCalled) {
                  done();
                }
              });
            }, function(handled) {
              if (!handled) {
                done();
              }
            });
          }
        }, {
          key: "forEachIframe",
          value: function forEachIframe(ctx, filter, each) {
            var _this3 = this;
            var end2 = arguments.length > 3 && arguments[3] !== void 0 ? arguments[3] : function() {
            };
            var ifr = ctx.querySelectorAll("iframe"), open = ifr.length, handled = 0;
            ifr = Array.prototype.slice.call(ifr);
            var checkEnd = function checkEnd2() {
              if (--open <= 0) {
                end2(handled);
              }
            };
            if (!open) {
              checkEnd();
            }
            ifr.forEach(function(ifr2) {
              if (DOMIterator2.matches(ifr2, _this3.exclude)) {
                checkEnd();
              } else {
                _this3.onIframeReady(ifr2, function(con) {
                  if (filter(ifr2)) {
                    handled++;
                    each(con);
                  }
                  checkEnd();
                }, checkEnd);
              }
            });
          }
        }, {
          key: "createIterator",
          value: function createIterator(ctx, whatToShow, filter) {
            return document.createNodeIterator(ctx, whatToShow, filter, false);
          }
        }, {
          key: "createInstanceOnIframe",
          value: function createInstanceOnIframe(contents) {
            return new DOMIterator2(contents.querySelector("html"), this.iframes);
          }
        }, {
          key: "compareNodeIframe",
          value: function compareNodeIframe(node, prevNode, ifr) {
            var compCurr = node.compareDocumentPosition(ifr), prev = Node.DOCUMENT_POSITION_PRECEDING;
            if (compCurr & prev) {
              if (prevNode !== null) {
                var compPrev = prevNode.compareDocumentPosition(ifr), after = Node.DOCUMENT_POSITION_FOLLOWING;
                if (compPrev & after) {
                  return true;
                }
              } else {
                return true;
              }
            }
            return false;
          }
        }, {
          key: "getIteratorNode",
          value: function getIteratorNode(itr) {
            var prevNode = itr.previousNode();
            var node = void 0;
            if (prevNode === null) {
              node = itr.nextNode();
            } else {
              node = itr.nextNode() && itr.nextNode();
            }
            return {
              prevNode,
              node
            };
          }
        }, {
          key: "checkIframeFilter",
          value: function checkIframeFilter(node, prevNode, currIfr, ifr) {
            var key = false, handled = false;
            ifr.forEach(function(ifrDict, i) {
              if (ifrDict.val === currIfr) {
                key = i;
                handled = ifrDict.handled;
              }
            });
            if (this.compareNodeIframe(node, prevNode, currIfr)) {
              if (key === false && !handled) {
                ifr.push({
                  val: currIfr,
                  handled: true
                });
              } else if (key !== false && !handled) {
                ifr[key].handled = true;
              }
              return true;
            }
            if (key === false) {
              ifr.push({
                val: currIfr,
                handled: false
              });
            }
            return false;
          }
        }, {
          key: "handleOpenIframes",
          value: function handleOpenIframes(ifr, whatToShow, eCb, fCb) {
            var _this4 = this;
            ifr.forEach(function(ifrDict) {
              if (!ifrDict.handled) {
                _this4.getIframeContents(ifrDict.val, function(con) {
                  _this4.createInstanceOnIframe(con).forEachNode(whatToShow, eCb, fCb);
                });
              }
            });
          }
        }, {
          key: "iterateThroughNodes",
          value: function iterateThroughNodes(whatToShow, ctx, eachCb, filterCb, doneCb) {
            var _this5 = this;
            var itr = this.createIterator(ctx, whatToShow, filterCb);
            var ifr = [], elements = [], node = void 0, prevNode = void 0, retrieveNodes = function retrieveNodes2() {
              var _getIteratorNode = _this5.getIteratorNode(itr);
              prevNode = _getIteratorNode.prevNode;
              node = _getIteratorNode.node;
              return node;
            };
            while (retrieveNodes()) {
              if (this.iframes) {
                this.forEachIframe(ctx, function(currIfr) {
                  return _this5.checkIframeFilter(node, prevNode, currIfr, ifr);
                }, function(con) {
                  _this5.createInstanceOnIframe(con).forEachNode(whatToShow, function(ifrNode) {
                    return elements.push(ifrNode);
                  }, filterCb);
                });
              }
              elements.push(node);
            }
            elements.forEach(function(node2) {
              eachCb(node2);
            });
            if (this.iframes) {
              this.handleOpenIframes(ifr, whatToShow, eachCb, filterCb);
            }
            doneCb();
          }
        }, {
          key: "forEachNode",
          value: function forEachNode(whatToShow, each, filter) {
            var _this6 = this;
            var done = arguments.length > 3 && arguments[3] !== void 0 ? arguments[3] : function() {
            };
            var contexts = this.getContexts();
            var open = contexts.length;
            if (!open) {
              done();
            }
            contexts.forEach(function(ctx) {
              var ready = function ready2() {
                _this6.iterateThroughNodes(whatToShow, ctx, each, filter, function() {
                  if (--open <= 0) {
                    done();
                  }
                });
              };
              if (_this6.iframes) {
                _this6.waitForIframes(ctx, ready);
              } else {
                ready();
              }
            });
          }
        }], [{
          key: "matches",
          value: function matches(element, selector) {
            var selectors = typeof selector === "string" ? [selector] : selector, fn = element.matches || element.matchesSelector || element.msMatchesSelector || element.mozMatchesSelector || element.oMatchesSelector || element.webkitMatchesSelector;
            if (fn) {
              var match = false;
              selectors.every(function(sel) {
                if (fn.call(element, sel)) {
                  match = true;
                  return false;
                }
                return true;
              });
              return match;
            } else {
              return false;
            }
          }
        }]);
        return DOMIterator2;
      }();
      var Mark$1 = function() {
        function Mark3(ctx) {
          classCallCheck(this, Mark3);
          this.ctx = ctx;
          this.ie = false;
          var ua = window.navigator.userAgent;
          if (ua.indexOf("MSIE") > -1 || ua.indexOf("Trident") > -1) {
            this.ie = true;
          }
        }
        createClass(Mark3, [{
          key: "log",
          value: function log(msg) {
            var level = arguments.length > 1 && arguments[1] !== void 0 ? arguments[1] : "debug";
            var log2 = this.opt.log;
            if (!this.opt.debug) {
              return;
            }
            if ((typeof log2 === "undefined" ? "undefined" : _typeof(log2)) === "object" && typeof log2[level] === "function") {
              log2[level]("mark.js: " + msg);
            }
          }
        }, {
          key: "escapeStr",
          value: function escapeStr(str) {
            return str.replace(/[\-\[\]\/\{\}\(\)\*\+\?\.\\\^\$\|]/g, "\\$&");
          }
        }, {
          key: "createRegExp",
          value: function createRegExp(str) {
            if (this.opt.wildcards !== "disabled") {
              str = this.setupWildcardsRegExp(str);
            }
            str = this.escapeStr(str);
            if (Object.keys(this.opt.synonyms).length) {
              str = this.createSynonymsRegExp(str);
            }
            if (this.opt.ignoreJoiners || this.opt.ignorePunctuation.length) {
              str = this.setupIgnoreJoinersRegExp(str);
            }
            if (this.opt.diacritics) {
              str = this.createDiacriticsRegExp(str);
            }
            str = this.createMergedBlanksRegExp(str);
            if (this.opt.ignoreJoiners || this.opt.ignorePunctuation.length) {
              str = this.createJoinersRegExp(str);
            }
            if (this.opt.wildcards !== "disabled") {
              str = this.createWildcardsRegExp(str);
            }
            str = this.createAccuracyRegExp(str);
            return str;
          }
        }, {
          key: "createSynonymsRegExp",
          value: function createSynonymsRegExp(str) {
            var syn = this.opt.synonyms, sens = this.opt.caseSensitive ? "" : "i", joinerPlaceholder = this.opt.ignoreJoiners || this.opt.ignorePunctuation.length ? "\0" : "";
            for (var index in syn) {
              if (syn.hasOwnProperty(index)) {
                var value = syn[index], k1 = this.opt.wildcards !== "disabled" ? this.setupWildcardsRegExp(index) : this.escapeStr(index), k2 = this.opt.wildcards !== "disabled" ? this.setupWildcardsRegExp(value) : this.escapeStr(value);
                if (k1 !== "" && k2 !== "") {
                  str = str.replace(new RegExp("(" + this.escapeStr(k1) + "|" + this.escapeStr(k2) + ")", "gm" + sens), joinerPlaceholder + ("(" + this.processSynomyms(k1) + "|") + (this.processSynomyms(k2) + ")") + joinerPlaceholder);
                }
              }
            }
            return str;
          }
        }, {
          key: "processSynomyms",
          value: function processSynomyms(str) {
            if (this.opt.ignoreJoiners || this.opt.ignorePunctuation.length) {
              str = this.setupIgnoreJoinersRegExp(str);
            }
            return str;
          }
        }, {
          key: "setupWildcardsRegExp",
          value: function setupWildcardsRegExp(str) {
            str = str.replace(/(?:\\)*\?/g, function(val) {
              return val.charAt(0) === "\\" ? "?" : "";
            });
            return str.replace(/(?:\\)*\*/g, function(val) {
              return val.charAt(0) === "\\" ? "*" : "";
            });
          }
        }, {
          key: "createWildcardsRegExp",
          value: function createWildcardsRegExp(str) {
            var spaces = this.opt.wildcards === "withSpaces";
            return str.replace(/\u0001/g, spaces ? "[\\S\\s]?" : "\\S?").replace(/\u0002/g, spaces ? "[\\S\\s]*?" : "\\S*");
          }
        }, {
          key: "setupIgnoreJoinersRegExp",
          value: function setupIgnoreJoinersRegExp(str) {
            return str.replace(/[^(|)\\]/g, function(val, indx, original) {
              var nextChar = original.charAt(indx + 1);
              if (/[(|)\\]/.test(nextChar) || nextChar === "") {
                return val;
              } else {
                return val + "\0";
              }
            });
          }
        }, {
          key: "createJoinersRegExp",
          value: function createJoinersRegExp(str) {
            var joiner = [];
            var ignorePunctuation = this.opt.ignorePunctuation;
            if (Array.isArray(ignorePunctuation) && ignorePunctuation.length) {
              joiner.push(this.escapeStr(ignorePunctuation.join("")));
            }
            if (this.opt.ignoreJoiners) {
              joiner.push("\\u00ad\\u200b\\u200c\\u200d");
            }
            return joiner.length ? str.split(/\u0000+/).join("[" + joiner.join("") + "]*") : str;
          }
        }, {
          key: "createDiacriticsRegExp",
          value: function createDiacriticsRegExp(str) {
            var sens = this.opt.caseSensitive ? "" : "i", dct = this.opt.caseSensitive ? ["aàáảãạăằắẳẵặâầấẩẫậäåāą", "AÀÁẢÃẠĂẰẮẲẴẶÂẦẤẨẪẬÄÅĀĄ", "cçćč", "CÇĆČ", "dđď", "DĐĎ", "eèéẻẽẹêềếểễệëěēę", "EÈÉẺẼẸÊỀẾỂỄỆËĚĒĘ", "iìíỉĩịîïī", "IÌÍỈĨỊÎÏĪ", "lł", "LŁ", "nñňń", "NÑŇŃ", "oòóỏõọôồốổỗộơởỡớờợöøō", "OÒÓỎÕỌÔỒỐỔỖỘƠỞỠỚỜỢÖØŌ", "rř", "RŘ", "sšśșş", "SŠŚȘŞ", "tťțţ", "TŤȚŢ", "uùúủũụưừứửữựûüůū", "UÙÚỦŨỤƯỪỨỬỮỰÛÜŮŪ", "yýỳỷỹỵÿ", "YÝỲỶỸỴŸ", "zžżź", "ZŽŻŹ"] : ["aàáảãạăằắẳẵặâầấẩẫậäåāąAÀÁẢÃẠĂẰẮẲẴẶÂẦẤẨẪẬÄÅĀĄ", "cçćčCÇĆČ", "dđďDĐĎ", "eèéẻẽẹêềếểễệëěēęEÈÉẺẼẸÊỀẾỂỄỆËĚĒĘ", "iìíỉĩịîïīIÌÍỈĨỊÎÏĪ", "lłLŁ", "nñňńNÑŇŃ", "oòóỏõọôồốổỗộơởỡớờợöøōOÒÓỎÕỌÔỒỐỔỖỘƠỞỠỚỜỢÖØŌ", "rřRŘ", "sšśșşSŠŚȘŞ", "tťțţTŤȚŢ", "uùúủũụưừứửữựûüůūUÙÚỦŨỤƯỪỨỬỮỰÛÜŮŪ", "yýỳỷỹỵÿYÝỲỶỸỴŸ", "zžżźZŽŻŹ"];
            var handled = [];
            str.split("").forEach(function(ch) {
              dct.every(function(dct2) {
                if (dct2.indexOf(ch) !== -1) {
                  if (handled.indexOf(dct2) > -1) {
                    return false;
                  }
                  str = str.replace(new RegExp("[" + dct2 + "]", "gm" + sens), "[" + dct2 + "]");
                  handled.push(dct2);
                }
                return true;
              });
            });
            return str;
          }
        }, {
          key: "createMergedBlanksRegExp",
          value: function createMergedBlanksRegExp(str) {
            return str.replace(/[\s]+/gmi, "[\\s]+");
          }
        }, {
          key: "createAccuracyRegExp",
          value: function createAccuracyRegExp(str) {
            var _this = this;
            var chars = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~¡¿";
            var acc = this.opt.accuracy, val = typeof acc === "string" ? acc : acc.value, ls = typeof acc === "string" ? [] : acc.limiters, lsJoin = "";
            ls.forEach(function(limiter) {
              lsJoin += "|" + _this.escapeStr(limiter);
            });
            switch (val) {
              case "partially":
              default:
                return "()(" + str + ")";
              case "complementary":
                lsJoin = "\\s" + (lsJoin ? lsJoin : this.escapeStr(chars));
                return "()([^" + lsJoin + "]*" + str + "[^" + lsJoin + "]*)";
              case "exactly":
                return "(^|\\s" + lsJoin + ")(" + str + ")(?=$|\\s" + lsJoin + ")";
            }
          }
        }, {
          key: "getSeparatedKeywords",
          value: function getSeparatedKeywords(sv) {
            var _this2 = this;
            var stack = [];
            sv.forEach(function(kw) {
              if (!_this2.opt.separateWordSearch) {
                if (kw.trim() && stack.indexOf(kw) === -1) {
                  stack.push(kw);
                }
              } else {
                kw.split(" ").forEach(function(kwSplitted) {
                  if (kwSplitted.trim() && stack.indexOf(kwSplitted) === -1) {
                    stack.push(kwSplitted);
                  }
                });
              }
            });
            return {
              keywords: stack.sort(function(a, b) {
                return b.length - a.length;
              }),
              length: stack.length
            };
          }
        }, {
          key: "isNumeric",
          value: function isNumeric(value) {
            return Number(parseFloat(value)) == value;
          }
        }, {
          key: "checkRanges",
          value: function checkRanges(array) {
            var _this3 = this;
            if (!Array.isArray(array) || Object.prototype.toString.call(array[0]) !== "[object Object]") {
              this.log("markRanges() will only accept an array of objects");
              this.opt.noMatch(array);
              return [];
            }
            var stack = [];
            var last = 0;
            array.sort(function(a, b) {
              return a.start - b.start;
            }).forEach(function(item) {
              var _callNoMatchOnInvalid = _this3.callNoMatchOnInvalidRanges(item, last), start2 = _callNoMatchOnInvalid.start, end2 = _callNoMatchOnInvalid.end, valid = _callNoMatchOnInvalid.valid;
              if (valid) {
                item.start = start2;
                item.length = end2 - start2;
                stack.push(item);
                last = end2;
              }
            });
            return stack;
          }
        }, {
          key: "callNoMatchOnInvalidRanges",
          value: function callNoMatchOnInvalidRanges(range, last) {
            var start2 = void 0, end2 = void 0, valid = false;
            if (range && typeof range.start !== "undefined") {
              start2 = parseInt(range.start, 10);
              end2 = start2 + parseInt(range.length, 10);
              if (this.isNumeric(range.start) && this.isNumeric(range.length) && end2 - last > 0 && end2 - start2 > 0) {
                valid = true;
              } else {
                this.log("Ignoring invalid or overlapping range: " + ("" + JSON.stringify(range)));
                this.opt.noMatch(range);
              }
            } else {
              this.log("Ignoring invalid range: " + JSON.stringify(range));
              this.opt.noMatch(range);
            }
            return {
              start: start2,
              end: end2,
              valid
            };
          }
        }, {
          key: "checkWhitespaceRanges",
          value: function checkWhitespaceRanges(range, originalLength, string) {
            var end2 = void 0, valid = true, max = string.length, offset = originalLength - max, start2 = parseInt(range.start, 10) - offset;
            start2 = start2 > max ? max : start2;
            end2 = start2 + parseInt(range.length, 10);
            if (end2 > max) {
              end2 = max;
              this.log("End range automatically set to the max value of " + max);
            }
            if (start2 < 0 || end2 - start2 < 0 || start2 > max || end2 > max) {
              valid = false;
              this.log("Invalid range: " + JSON.stringify(range));
              this.opt.noMatch(range);
            } else if (string.substring(start2, end2).replace(/\s+/g, "") === "") {
              valid = false;
              this.log("Skipping whitespace only range: " + JSON.stringify(range));
              this.opt.noMatch(range);
            }
            return {
              start: start2,
              end: end2,
              valid
            };
          }
        }, {
          key: "getTextNodes",
          value: function getTextNodes(cb) {
            var _this4 = this;
            var val = "", nodes = [];
            this.iterator.forEachNode(NodeFilter.SHOW_TEXT, function(node) {
              nodes.push({
                start: val.length,
                end: (val += node.textContent).length,
                node
              });
            }, function(node) {
              if (_this4.matchesExclude(node.parentNode)) {
                return NodeFilter.FILTER_REJECT;
              } else {
                return NodeFilter.FILTER_ACCEPT;
              }
            }, function() {
              cb({
                value: val,
                nodes
              });
            });
          }
        }, {
          key: "matchesExclude",
          value: function matchesExclude(el) {
            return DOMIterator.matches(el, this.opt.exclude.concat(["script", "style", "title", "head", "html"]));
          }
        }, {
          key: "wrapRangeInTextNode",
          value: function wrapRangeInTextNode(node, start2, end2) {
            var hEl = !this.opt.element ? "mark" : this.opt.element, startNode = node.splitText(start2), ret = startNode.splitText(end2 - start2);
            var repl = document.createElement(hEl);
            repl.setAttribute("data-markjs", "true");
            if (this.opt.className) {
              repl.setAttribute("class", this.opt.className);
            }
            repl.textContent = startNode.textContent;
            startNode.parentNode.replaceChild(repl, startNode);
            return ret;
          }
        }, {
          key: "wrapRangeInMappedTextNode",
          value: function wrapRangeInMappedTextNode(dict, start2, end2, filterCb, eachCb) {
            var _this5 = this;
            dict.nodes.every(function(n, i) {
              var sibl = dict.nodes[i + 1];
              if (typeof sibl === "undefined" || sibl.start > start2) {
                if (!filterCb(n.node)) {
                  return false;
                }
                var s = start2 - n.start, e = (end2 > n.end ? n.end : end2) - n.start, startStr = dict.value.substr(0, n.start), endStr = dict.value.substr(e + n.start);
                n.node = _this5.wrapRangeInTextNode(n.node, s, e);
                dict.value = startStr + endStr;
                dict.nodes.forEach(function(k, j) {
                  if (j >= i) {
                    if (dict.nodes[j].start > 0 && j !== i) {
                      dict.nodes[j].start -= e;
                    }
                    dict.nodes[j].end -= e;
                  }
                });
                end2 -= e;
                eachCb(n.node.previousSibling, n.start);
                if (end2 > n.end) {
                  start2 = n.end;
                } else {
                  return false;
                }
              }
              return true;
            });
          }
        }, {
          key: "wrapMatches",
          value: function wrapMatches(regex, ignoreGroups, filterCb, eachCb, endCb) {
            var _this6 = this;
            var matchIdx = ignoreGroups === 0 ? 0 : ignoreGroups + 1;
            this.getTextNodes(function(dict) {
              dict.nodes.forEach(function(node) {
                node = node.node;
                var match = void 0;
                while ((match = regex.exec(node.textContent)) !== null && match[matchIdx] !== "") {
                  if (!filterCb(match[matchIdx], node)) {
                    continue;
                  }
                  var pos = match.index;
                  if (matchIdx !== 0) {
                    for (var i = 1; i < matchIdx; i++) {
                      pos += match[i].length;
                    }
                  }
                  node = _this6.wrapRangeInTextNode(node, pos, pos + match[matchIdx].length);
                  eachCb(node.previousSibling);
                  regex.lastIndex = 0;
                }
              });
              endCb();
            });
          }
        }, {
          key: "wrapMatchesAcrossElements",
          value: function wrapMatchesAcrossElements(regex, ignoreGroups, filterCb, eachCb, endCb) {
            var _this7 = this;
            var matchIdx = ignoreGroups === 0 ? 0 : ignoreGroups + 1;
            this.getTextNodes(function(dict) {
              var match = void 0;
              while ((match = regex.exec(dict.value)) !== null && match[matchIdx] !== "") {
                var start2 = match.index;
                if (matchIdx !== 0) {
                  for (var i = 1; i < matchIdx; i++) {
                    start2 += match[i].length;
                  }
                }
                var end2 = start2 + match[matchIdx].length;
                _this7.wrapRangeInMappedTextNode(dict, start2, end2, function(node) {
                  return filterCb(match[matchIdx], node);
                }, function(node, lastIndex) {
                  regex.lastIndex = lastIndex;
                  eachCb(node);
                });
              }
              endCb();
            });
          }
        }, {
          key: "wrapRangeFromIndex",
          value: function wrapRangeFromIndex(ranges, filterCb, eachCb, endCb) {
            var _this8 = this;
            this.getTextNodes(function(dict) {
              var originalLength = dict.value.length;
              ranges.forEach(function(range, counter) {
                var _checkWhitespaceRange = _this8.checkWhitespaceRanges(range, originalLength, dict.value), start2 = _checkWhitespaceRange.start, end2 = _checkWhitespaceRange.end, valid = _checkWhitespaceRange.valid;
                if (valid) {
                  _this8.wrapRangeInMappedTextNode(dict, start2, end2, function(node) {
                    return filterCb(node, range, dict.value.substring(start2, end2), counter);
                  }, function(node) {
                    eachCb(node, range);
                  });
                }
              });
              endCb();
            });
          }
        }, {
          key: "unwrapMatches",
          value: function unwrapMatches(node) {
            var parent = node.parentNode;
            var docFrag = document.createDocumentFragment();
            while (node.firstChild) {
              docFrag.appendChild(node.removeChild(node.firstChild));
            }
            parent.replaceChild(docFrag, node);
            if (!this.ie) {
              parent.normalize();
            } else {
              this.normalizeTextNode(parent);
            }
          }
        }, {
          key: "normalizeTextNode",
          value: function normalizeTextNode(node) {
            if (!node) {
              return;
            }
            if (node.nodeType === 3) {
              while (node.nextSibling && node.nextSibling.nodeType === 3) {
                node.nodeValue += node.nextSibling.nodeValue;
                node.parentNode.removeChild(node.nextSibling);
              }
            } else {
              this.normalizeTextNode(node.firstChild);
            }
            this.normalizeTextNode(node.nextSibling);
          }
        }, {
          key: "markRegExp",
          value: function markRegExp(regexp, opt) {
            var _this9 = this;
            this.opt = opt;
            this.log('Searching with expression "' + regexp + '"');
            var totalMatches = 0, fn = "wrapMatches";
            var eachCb = function eachCb2(element) {
              totalMatches++;
              _this9.opt.each(element);
            };
            if (this.opt.acrossElements) {
              fn = "wrapMatchesAcrossElements";
            }
            this[fn](regexp, this.opt.ignoreGroups, function(match, node) {
              return _this9.opt.filter(node, match, totalMatches);
            }, eachCb, function() {
              if (totalMatches === 0) {
                _this9.opt.noMatch(regexp);
              }
              _this9.opt.done(totalMatches);
            });
          }
        }, {
          key: "mark",
          value: function mark2(sv, opt) {
            var _this10 = this;
            this.opt = opt;
            var totalMatches = 0, fn = "wrapMatches";
            var _getSeparatedKeywords = this.getSeparatedKeywords(typeof sv === "string" ? [sv] : sv), kwArr = _getSeparatedKeywords.keywords, kwArrLen = _getSeparatedKeywords.length, sens = this.opt.caseSensitive ? "" : "i", handler = function handler2(kw) {
              var regex = new RegExp(_this10.createRegExp(kw), "gm" + sens), matches = 0;
              _this10.log('Searching with expression "' + regex + '"');
              _this10[fn](regex, 1, function(term, node) {
                return _this10.opt.filter(node, kw, totalMatches, matches);
              }, function(element) {
                matches++;
                totalMatches++;
                _this10.opt.each(element);
              }, function() {
                if (matches === 0) {
                  _this10.opt.noMatch(kw);
                }
                if (kwArr[kwArrLen - 1] === kw) {
                  _this10.opt.done(totalMatches);
                } else {
                  handler2(kwArr[kwArr.indexOf(kw) + 1]);
                }
              });
            };
            if (this.opt.acrossElements) {
              fn = "wrapMatchesAcrossElements";
            }
            if (kwArrLen === 0) {
              this.opt.done(totalMatches);
            } else {
              handler(kwArr[0]);
            }
          }
        }, {
          key: "markRanges",
          value: function markRanges(rawRanges, opt) {
            var _this11 = this;
            this.opt = opt;
            var totalMatches = 0, ranges = this.checkRanges(rawRanges);
            if (ranges && ranges.length) {
              this.log("Starting to mark with the following ranges: " + JSON.stringify(ranges));
              this.wrapRangeFromIndex(ranges, function(node, range, match, counter) {
                return _this11.opt.filter(node, range, match, counter);
              }, function(element, range) {
                totalMatches++;
                _this11.opt.each(element, range);
              }, function() {
                _this11.opt.done(totalMatches);
              });
            } else {
              this.opt.done(totalMatches);
            }
          }
        }, {
          key: "unmark",
          value: function unmark(opt) {
            var _this12 = this;
            this.opt = opt;
            var sel = this.opt.element ? this.opt.element : "*";
            sel += "[data-markjs]";
            if (this.opt.className) {
              sel += "." + this.opt.className;
            }
            this.log('Removal selector "' + sel + '"');
            this.iterator.forEachNode(NodeFilter.SHOW_ELEMENT, function(node) {
              _this12.unwrapMatches(node);
            }, function(node) {
              var matchesSel = DOMIterator.matches(node, sel), matchesExclude = _this12.matchesExclude(node);
              if (!matchesSel || matchesExclude) {
                return NodeFilter.FILTER_REJECT;
              } else {
                return NodeFilter.FILTER_ACCEPT;
              }
            }, this.opt.done);
          }
        }, {
          key: "opt",
          set: function set$$1(val) {
            this._opt = _extends({}, {
              element: "",
              className: "",
              exclude: [],
              iframes: false,
              iframesTimeout: 5e3,
              separateWordSearch: true,
              diacritics: true,
              synonyms: {},
              accuracy: "partially",
              acrossElements: false,
              caseSensitive: false,
              ignoreJoiners: false,
              ignoreGroups: 0,
              ignorePunctuation: [],
              wildcards: "disabled",
              each: function each() {
              },
              noMatch: function noMatch() {
              },
              filter: function filter() {
                return true;
              },
              done: function done() {
              },
              debug: false,
              log: window.console
            }, val);
          },
          get: function get$$1() {
            return this._opt;
          }
        }, {
          key: "iterator",
          get: function get$$1() {
            return new DOMIterator(this.ctx, this.opt.iframes, this.opt.exclude, this.opt.iframesTimeout);
          }
        }]);
        return Mark3;
      }();
      function Mark2(ctx) {
        var _this = this;
        var instance = new Mark$1(ctx);
        this.mark = function(sv, opt) {
          instance.mark(sv, opt);
          return _this;
        };
        this.markRegExp = function(sv, opt) {
          instance.markRegExp(sv, opt);
          return _this;
        };
        this.markRanges = function(sv, opt) {
          instance.markRanges(sv, opt);
          return _this;
        };
        this.unmark = function(opt) {
          instance.unmark(opt);
          return _this;
        };
        return this;
      }
      return Mark2;
    });
  });

  // node_modules/fuse.js/dist/fuse.esm.js
  function isArray(value) {
    return !Array.isArray ? getTag(value) === "[object Array]" : Array.isArray(value);
  }
  const INFINITY = 1 / 0;
  function baseToString(value) {
    if (typeof value == "string") {
      return value;
    }
    let result = value + "";
    return result == "0" && 1 / value == -INFINITY ? "-0" : result;
  }
  function toString(value) {
    return value == null ? "" : baseToString(value);
  }
  function isString(value) {
    return typeof value === "string";
  }
  function isNumber(value) {
    return typeof value === "number";
  }
  function isBoolean(value) {
    return value === true || value === false || isObjectLike(value) && getTag(value) == "[object Boolean]";
  }
  function isObject(value) {
    return typeof value === "object";
  }
  function isObjectLike(value) {
    return isObject(value) && value !== null;
  }
  function isDefined(value) {
    return value !== void 0 && value !== null;
  }
  function isBlank(value) {
    return !value.trim().length;
  }
  function getTag(value) {
    return value == null ? value === void 0 ? "[object Undefined]" : "[object Null]" : Object.prototype.toString.call(value);
  }
  const EXTENDED_SEARCH_UNAVAILABLE = "Extended search is not available";
  const INCORRECT_INDEX_TYPE = "Incorrect 'index' type";
  const LOGICAL_SEARCH_INVALID_QUERY_FOR_KEY = (key) => `Invalid value for key ${key}`;
  const PATTERN_LENGTH_TOO_LARGE = (max) => `Pattern length exceeds max of ${max}.`;
  const MISSING_KEY_PROPERTY = (name) => `Missing ${name} property in key`;
  const INVALID_KEY_WEIGHT_VALUE = (key) => `Property 'weight' in key '${key}' must be a positive integer`;
  const hasOwn = Object.prototype.hasOwnProperty;
  class KeyStore {
    constructor(keys) {
      this._keys = [];
      this._keyMap = {};
      let totalWeight = 0;
      keys.forEach((key) => {
        let obj = createKey(key);
        totalWeight += obj.weight;
        this._keys.push(obj);
        this._keyMap[obj.id] = obj;
        totalWeight += obj.weight;
      });
      this._keys.forEach((key) => {
        key.weight /= totalWeight;
      });
    }
    get(keyId) {
      return this._keyMap[keyId];
    }
    keys() {
      return this._keys;
    }
    toJSON() {
      return JSON.stringify(this._keys);
    }
  }
  function createKey(key) {
    let path = null;
    let id = null;
    let src = null;
    let weight = 1;
    if (isString(key) || isArray(key)) {
      src = key;
      path = createKeyPath(key);
      id = createKeyId(key);
    } else {
      if (!hasOwn.call(key, "name")) {
        throw new Error(MISSING_KEY_PROPERTY("name"));
      }
      const name = key.name;
      src = name;
      if (hasOwn.call(key, "weight")) {
        weight = key.weight;
        if (weight <= 0) {
          throw new Error(INVALID_KEY_WEIGHT_VALUE(name));
        }
      }
      path = createKeyPath(name);
      id = createKeyId(name);
    }
    return {path, id, weight, src};
  }
  function createKeyPath(key) {
    return isArray(key) ? key : key.split(".");
  }
  function createKeyId(key) {
    return isArray(key) ? key.join(".") : key;
  }
  function get(obj, path) {
    let list = [];
    let arr = false;
    const deepGet = (obj2, path2, index) => {
      if (!path2[index]) {
        list.push(obj2);
      } else {
        let key = path2[index];
        const value = obj2[key];
        if (!isDefined(value)) {
          return;
        }
        if (index === path2.length - 1 && (isString(value) || isNumber(value) || isBoolean(value))) {
          list.push(toString(value));
        } else if (isArray(value)) {
          arr = true;
          for (let i = 0, len = value.length; i < len; i += 1) {
            deepGet(value[i], path2, index + 1);
          }
        } else if (path2.length) {
          deepGet(value, path2, index + 1);
        }
      }
    };
    deepGet(obj, isString(path) ? path.split(".") : path, 0);
    return arr ? list : list[0];
  }
  const MatchOptions = {
    includeMatches: false,
    findAllMatches: false,
    minMatchCharLength: 1
  };
  const BasicOptions = {
    isCaseSensitive: false,
    includeScore: false,
    keys: [],
    shouldSort: true,
    sortFn: (a, b) => a.score === b.score ? a.idx < b.idx ? -1 : 1 : a.score < b.score ? -1 : 1
  };
  const FuzzyOptions = {
    location: 0,
    threshold: 0.6,
    distance: 100
  };
  const AdvancedOptions = {
    useExtendedSearch: false,
    getFn: get,
    ignoreLocation: false,
    ignoreFieldNorm: false
  };
  var Config = {
    ...BasicOptions,
    ...MatchOptions,
    ...FuzzyOptions,
    ...AdvancedOptions
  };
  const SPACE = /[^ ]+/g;
  function norm(mantissa = 3) {
    const cache = new Map();
    return {
      get(value) {
        const numTokens = value.match(SPACE).length;
        if (cache.has(numTokens)) {
          return cache.get(numTokens);
        }
        const n = parseFloat((1 / Math.sqrt(numTokens)).toFixed(mantissa));
        cache.set(numTokens, n);
        return n;
      },
      clear() {
        cache.clear();
      }
    };
  }
  class FuseIndex {
    constructor({getFn = Config.getFn} = {}) {
      this.norm = norm(3);
      this.getFn = getFn;
      this.isCreated = false;
      this.setIndexRecords();
    }
    setSources(docs = []) {
      this.docs = docs;
    }
    setIndexRecords(records = []) {
      this.records = records;
    }
    setKeys(keys = []) {
      this.keys = keys;
      this._keysMap = {};
      keys.forEach((key, idx) => {
        this._keysMap[key.id] = idx;
      });
    }
    create() {
      if (this.isCreated || !this.docs.length) {
        return;
      }
      this.isCreated = true;
      if (isString(this.docs[0])) {
        this.docs.forEach((doc, docIndex) => {
          this._addString(doc, docIndex);
        });
      } else {
        this.docs.forEach((doc, docIndex) => {
          this._addObject(doc, docIndex);
        });
      }
      this.norm.clear();
    }
    add(doc) {
      const idx = this.size();
      if (isString(doc)) {
        this._addString(doc, idx);
      } else {
        this._addObject(doc, idx);
      }
    }
    removeAt(idx) {
      this.records.splice(idx, 1);
      for (let i = idx, len = this.size(); i < len; i += 1) {
        this.records[i].i -= 1;
      }
    }
    getValueForItemAtKeyId(item, keyId) {
      return item[this._keysMap[keyId]];
    }
    size() {
      return this.records.length;
    }
    _addString(doc, docIndex) {
      if (!isDefined(doc) || isBlank(doc)) {
        return;
      }
      let record = {
        v: doc,
        i: docIndex,
        n: this.norm.get(doc)
      };
      this.records.push(record);
    }
    _addObject(doc, docIndex) {
      let record = {i: docIndex, $: {}};
      this.keys.forEach((key, keyIndex) => {
        let value = this.getFn(doc, key.path);
        if (!isDefined(value)) {
          return;
        }
        if (isArray(value)) {
          let subRecords = [];
          const stack = [{nestedArrIndex: -1, value}];
          while (stack.length) {
            const {nestedArrIndex, value: value2} = stack.pop();
            if (!isDefined(value2)) {
              continue;
            }
            if (isString(value2) && !isBlank(value2)) {
              let subRecord = {
                v: value2,
                i: nestedArrIndex,
                n: this.norm.get(value2)
              };
              subRecords.push(subRecord);
            } else if (isArray(value2)) {
              value2.forEach((item, k) => {
                stack.push({
                  nestedArrIndex: k,
                  value: item
                });
              });
            }
          }
          record.$[keyIndex] = subRecords;
        } else if (!isBlank(value)) {
          let subRecord = {
            v: value,
            n: this.norm.get(value)
          };
          record.$[keyIndex] = subRecord;
        }
      });
      this.records.push(record);
    }
    toJSON() {
      return {
        keys: this.keys,
        records: this.records
      };
    }
  }
  function createIndex(keys, docs, {getFn = Config.getFn} = {}) {
    const myIndex = new FuseIndex({getFn});
    myIndex.setKeys(keys.map(createKey));
    myIndex.setSources(docs);
    myIndex.create();
    return myIndex;
  }
  function parseIndex(data, {getFn = Config.getFn} = {}) {
    const {keys, records} = data;
    const myIndex = new FuseIndex({getFn});
    myIndex.setKeys(keys);
    myIndex.setIndexRecords(records);
    return myIndex;
  }
  function transformMatches(result, data) {
    const matches = result.matches;
    data.matches = [];
    if (!isDefined(matches)) {
      return;
    }
    matches.forEach((match) => {
      if (!isDefined(match.indices) || !match.indices.length) {
        return;
      }
      const {indices, value} = match;
      let obj = {
        indices,
        value
      };
      if (match.key) {
        obj.key = match.key.src;
      }
      if (match.idx > -1) {
        obj.refIndex = match.idx;
      }
      data.matches.push(obj);
    });
  }
  function transformScore(result, data) {
    data.score = result.score;
  }
  function computeScore(pattern, {
    errors = 0,
    currentLocation = 0,
    expectedLocation = 0,
    distance = Config.distance,
    ignoreLocation = Config.ignoreLocation
  } = {}) {
    const accuracy = errors / pattern.length;
    if (ignoreLocation) {
      return accuracy;
    }
    const proximity = Math.abs(expectedLocation - currentLocation);
    if (!distance) {
      return proximity ? 1 : accuracy;
    }
    return accuracy + proximity / distance;
  }
  function convertMaskToIndices(matchmask = [], minMatchCharLength = Config.minMatchCharLength) {
    let indices = [];
    let start2 = -1;
    let end2 = -1;
    let i = 0;
    for (let len = matchmask.length; i < len; i += 1) {
      let match = matchmask[i];
      if (match && start2 === -1) {
        start2 = i;
      } else if (!match && start2 !== -1) {
        end2 = i - 1;
        if (end2 - start2 + 1 >= minMatchCharLength) {
          indices.push([start2, end2]);
        }
        start2 = -1;
      }
    }
    if (matchmask[i - 1] && i - start2 >= minMatchCharLength) {
      indices.push([start2, i - 1]);
    }
    return indices;
  }
  const MAX_BITS = 32;
  function search2(text, pattern, patternAlphabet, {
    location = Config.location,
    distance = Config.distance,
    threshold = Config.threshold,
    findAllMatches = Config.findAllMatches,
    minMatchCharLength = Config.minMatchCharLength,
    includeMatches = Config.includeMatches,
    ignoreLocation = Config.ignoreLocation
  } = {}) {
    if (pattern.length > MAX_BITS) {
      throw new Error(PATTERN_LENGTH_TOO_LARGE(MAX_BITS));
    }
    const patternLen = pattern.length;
    const textLen = text.length;
    const expectedLocation = Math.max(0, Math.min(location, textLen));
    let currentThreshold = threshold;
    let bestLocation = expectedLocation;
    const computeMatches = minMatchCharLength > 1 || includeMatches;
    const matchMask = computeMatches ? Array(textLen) : [];
    let index;
    while ((index = text.indexOf(pattern, bestLocation)) > -1) {
      let score = computeScore(pattern, {
        currentLocation: index,
        expectedLocation,
        distance,
        ignoreLocation
      });
      currentThreshold = Math.min(score, currentThreshold);
      bestLocation = index + patternLen;
      if (computeMatches) {
        let i = 0;
        while (i < patternLen) {
          matchMask[index + i] = 1;
          i += 1;
        }
      }
    }
    bestLocation = -1;
    let lastBitArr = [];
    let finalScore = 1;
    let binMax = patternLen + textLen;
    const mask = 1 << patternLen - 1;
    for (let i = 0; i < patternLen; i += 1) {
      let binMin = 0;
      let binMid = binMax;
      while (binMin < binMid) {
        const score2 = computeScore(pattern, {
          errors: i,
          currentLocation: expectedLocation + binMid,
          expectedLocation,
          distance,
          ignoreLocation
        });
        if (score2 <= currentThreshold) {
          binMin = binMid;
        } else {
          binMax = binMid;
        }
        binMid = Math.floor((binMax - binMin) / 2 + binMin);
      }
      binMax = binMid;
      let start2 = Math.max(1, expectedLocation - binMid + 1);
      let finish = findAllMatches ? textLen : Math.min(expectedLocation + binMid, textLen) + patternLen;
      let bitArr = Array(finish + 2);
      bitArr[finish + 1] = (1 << i) - 1;
      for (let j = finish; j >= start2; j -= 1) {
        let currentLocation = j - 1;
        let charMatch = patternAlphabet[text.charAt(currentLocation)];
        if (computeMatches) {
          matchMask[currentLocation] = +!!charMatch;
        }
        bitArr[j] = (bitArr[j + 1] << 1 | 1) & charMatch;
        if (i) {
          bitArr[j] |= (lastBitArr[j + 1] | lastBitArr[j]) << 1 | 1 | lastBitArr[j + 1];
        }
        if (bitArr[j] & mask) {
          finalScore = computeScore(pattern, {
            errors: i,
            currentLocation,
            expectedLocation,
            distance,
            ignoreLocation
          });
          if (finalScore <= currentThreshold) {
            currentThreshold = finalScore;
            bestLocation = currentLocation;
            if (bestLocation <= expectedLocation) {
              break;
            }
            start2 = Math.max(1, 2 * expectedLocation - bestLocation);
          }
        }
      }
      const score = computeScore(pattern, {
        errors: i + 1,
        currentLocation: expectedLocation,
        expectedLocation,
        distance,
        ignoreLocation
      });
      if (score > currentThreshold) {
        break;
      }
      lastBitArr = bitArr;
    }
    const result = {
      isMatch: bestLocation >= 0,
      score: Math.max(1e-3, finalScore)
    };
    if (computeMatches) {
      const indices = convertMaskToIndices(matchMask, minMatchCharLength);
      if (!indices.length) {
        result.isMatch = false;
      } else if (includeMatches) {
        result.indices = indices;
      }
    }
    return result;
  }
  function createPatternAlphabet(pattern) {
    let mask = {};
    for (let i = 0, len = pattern.length; i < len; i += 1) {
      const char = pattern.charAt(i);
      mask[char] = (mask[char] || 0) | 1 << len - i - 1;
    }
    return mask;
  }
  class BitapSearch {
    constructor(pattern, {
      location = Config.location,
      threshold = Config.threshold,
      distance = Config.distance,
      includeMatches = Config.includeMatches,
      findAllMatches = Config.findAllMatches,
      minMatchCharLength = Config.minMatchCharLength,
      isCaseSensitive = Config.isCaseSensitive,
      ignoreLocation = Config.ignoreLocation
    } = {}) {
      this.options = {
        location,
        threshold,
        distance,
        includeMatches,
        findAllMatches,
        minMatchCharLength,
        isCaseSensitive,
        ignoreLocation
      };
      this.pattern = isCaseSensitive ? pattern : pattern.toLowerCase();
      this.chunks = [];
      if (!this.pattern.length) {
        return;
      }
      const addChunk = (pattern2, startIndex) => {
        this.chunks.push({
          pattern: pattern2,
          alphabet: createPatternAlphabet(pattern2),
          startIndex
        });
      };
      const len = this.pattern.length;
      if (len > MAX_BITS) {
        let i = 0;
        const remainder = len % MAX_BITS;
        const end2 = len - remainder;
        while (i < end2) {
          addChunk(this.pattern.substr(i, MAX_BITS), i);
          i += MAX_BITS;
        }
        if (remainder) {
          const startIndex = len - MAX_BITS;
          addChunk(this.pattern.substr(startIndex), startIndex);
        }
      } else {
        addChunk(this.pattern, 0);
      }
    }
    searchIn(text) {
      const {isCaseSensitive, includeMatches} = this.options;
      if (!isCaseSensitive) {
        text = text.toLowerCase();
      }
      if (this.pattern === text) {
        let result2 = {
          isMatch: true,
          score: 0
        };
        if (includeMatches) {
          result2.indices = [[0, text.length - 1]];
        }
        return result2;
      }
      const {
        location,
        distance,
        threshold,
        findAllMatches,
        minMatchCharLength,
        ignoreLocation
      } = this.options;
      let allIndices = [];
      let totalScore = 0;
      let hasMatches = false;
      this.chunks.forEach(({pattern, alphabet, startIndex}) => {
        const {isMatch, score, indices} = search2(text, pattern, alphabet, {
          location: location + startIndex,
          distance,
          threshold,
          findAllMatches,
          minMatchCharLength,
          includeMatches,
          ignoreLocation
        });
        if (isMatch) {
          hasMatches = true;
        }
        totalScore += score;
        if (isMatch && indices) {
          allIndices = [...allIndices, ...indices];
        }
      });
      let result = {
        isMatch: hasMatches,
        score: hasMatches ? totalScore / this.chunks.length : 1
      };
      if (hasMatches && includeMatches) {
        result.indices = allIndices;
      }
      return result;
    }
  }
  class BaseMatch {
    constructor(pattern) {
      this.pattern = pattern;
    }
    static isMultiMatch(pattern) {
      return getMatch(pattern, this.multiRegex);
    }
    static isSingleMatch(pattern) {
      return getMatch(pattern, this.singleRegex);
    }
    search() {
    }
  }
  function getMatch(pattern, exp) {
    const matches = pattern.match(exp);
    return matches ? matches[1] : null;
  }
  class ExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "exact";
    }
    static get multiRegex() {
      return /^="(.*)"$/;
    }
    static get singleRegex() {
      return /^=(.*)$/;
    }
    search(text) {
      const isMatch = text === this.pattern;
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [0, this.pattern.length - 1]
      };
    }
  }
  class InverseExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "inverse-exact";
    }
    static get multiRegex() {
      return /^!"(.*)"$/;
    }
    static get singleRegex() {
      return /^!(.*)$/;
    }
    search(text) {
      const index = text.indexOf(this.pattern);
      const isMatch = index === -1;
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [0, text.length - 1]
      };
    }
  }
  class PrefixExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "prefix-exact";
    }
    static get multiRegex() {
      return /^\^"(.*)"$/;
    }
    static get singleRegex() {
      return /^\^(.*)$/;
    }
    search(text) {
      const isMatch = text.startsWith(this.pattern);
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [0, this.pattern.length - 1]
      };
    }
  }
  class InversePrefixExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "inverse-prefix-exact";
    }
    static get multiRegex() {
      return /^!\^"(.*)"$/;
    }
    static get singleRegex() {
      return /^!\^(.*)$/;
    }
    search(text) {
      const isMatch = !text.startsWith(this.pattern);
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [0, text.length - 1]
      };
    }
  }
  class SuffixExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "suffix-exact";
    }
    static get multiRegex() {
      return /^"(.*)"\$$/;
    }
    static get singleRegex() {
      return /^(.*)\$$/;
    }
    search(text) {
      const isMatch = text.endsWith(this.pattern);
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [text.length - this.pattern.length, text.length - 1]
      };
    }
  }
  class InverseSuffixExactMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "inverse-suffix-exact";
    }
    static get multiRegex() {
      return /^!"(.*)"\$$/;
    }
    static get singleRegex() {
      return /^!(.*)\$$/;
    }
    search(text) {
      const isMatch = !text.endsWith(this.pattern);
      return {
        isMatch,
        score: isMatch ? 0 : 1,
        indices: [0, text.length - 1]
      };
    }
  }
  class FuzzyMatch extends BaseMatch {
    constructor(pattern, {
      location = Config.location,
      threshold = Config.threshold,
      distance = Config.distance,
      includeMatches = Config.includeMatches,
      findAllMatches = Config.findAllMatches,
      minMatchCharLength = Config.minMatchCharLength,
      isCaseSensitive = Config.isCaseSensitive
    } = {}) {
      super(pattern);
      this._bitapSearch = new BitapSearch(pattern, {
        location,
        threshold,
        distance,
        includeMatches,
        findAllMatches,
        minMatchCharLength,
        isCaseSensitive
      });
    }
    static get type() {
      return "fuzzy";
    }
    static get multiRegex() {
      return /^"(.*)"$/;
    }
    static get singleRegex() {
      return /^(.*)$/;
    }
    search(text) {
      return this._bitapSearch.searchIn(text);
    }
  }
  class IncludeMatch extends BaseMatch {
    constructor(pattern) {
      super(pattern);
    }
    static get type() {
      return "include";
    }
    static get multiRegex() {
      return /^'"(.*)"$/;
    }
    static get singleRegex() {
      return /^'(.*)$/;
    }
    search(text) {
      let location = 0;
      let index;
      const indices = [];
      const patternLen = this.pattern.length;
      while ((index = text.indexOf(this.pattern, location)) > -1) {
        location = index + patternLen;
        indices.push([index, location - 1]);
      }
      const isMatch = !!indices.length;
      return {
        isMatch,
        score: isMatch ? 1 : 0,
        indices
      };
    }
  }
  const searchers = [
    ExactMatch,
    IncludeMatch,
    PrefixExactMatch,
    InversePrefixExactMatch,
    InverseSuffixExactMatch,
    SuffixExactMatch,
    InverseExactMatch,
    FuzzyMatch
  ];
  const searchersLen = searchers.length;
  const SPACE_RE = / +(?=([^\"]*\"[^\"]*\")*[^\"]*$)/;
  const OR_TOKEN = "|";
  function parseQuery(pattern, options2 = {}) {
    return pattern.split(OR_TOKEN).map((item) => {
      let query = item.trim().split(SPACE_RE).filter((item2) => item2 && !!item2.trim());
      let results = [];
      for (let i = 0, len = query.length; i < len; i += 1) {
        const queryItem = query[i];
        let found = false;
        let idx = -1;
        while (!found && ++idx < searchersLen) {
          const searcher = searchers[idx];
          let token = searcher.isMultiMatch(queryItem);
          if (token) {
            results.push(new searcher(token, options2));
            found = true;
          }
        }
        if (found) {
          continue;
        }
        idx = -1;
        while (++idx < searchersLen) {
          const searcher = searchers[idx];
          let token = searcher.isSingleMatch(queryItem);
          if (token) {
            results.push(new searcher(token, options2));
            break;
          }
        }
      }
      return results;
    });
  }
  const MultiMatchSet = new Set([FuzzyMatch.type, IncludeMatch.type]);
  class ExtendedSearch {
    constructor(pattern, {
      isCaseSensitive = Config.isCaseSensitive,
      includeMatches = Config.includeMatches,
      minMatchCharLength = Config.minMatchCharLength,
      findAllMatches = Config.findAllMatches,
      location = Config.location,
      threshold = Config.threshold,
      distance = Config.distance
    } = {}) {
      this.query = null;
      this.options = {
        isCaseSensitive,
        includeMatches,
        minMatchCharLength,
        findAllMatches,
        location,
        threshold,
        distance
      };
      this.pattern = isCaseSensitive ? pattern : pattern.toLowerCase();
      this.query = parseQuery(this.pattern, this.options);
    }
    static condition(_, options2) {
      return options2.useExtendedSearch;
    }
    searchIn(text) {
      const query = this.query;
      if (!query) {
        return {
          isMatch: false,
          score: 1
        };
      }
      const {includeMatches, isCaseSensitive} = this.options;
      text = isCaseSensitive ? text : text.toLowerCase();
      let numMatches = 0;
      let allIndices = [];
      let totalScore = 0;
      for (let i = 0, qLen = query.length; i < qLen; i += 1) {
        const searchers2 = query[i];
        allIndices.length = 0;
        numMatches = 0;
        for (let j = 0, pLen = searchers2.length; j < pLen; j += 1) {
          const searcher = searchers2[j];
          const {isMatch, indices, score} = searcher.search(text);
          if (isMatch) {
            numMatches += 1;
            totalScore += score;
            if (includeMatches) {
              const type = searcher.constructor.type;
              if (MultiMatchSet.has(type)) {
                allIndices = [...allIndices, ...indices];
              } else {
                allIndices.push(indices);
              }
            }
          } else {
            totalScore = 0;
            numMatches = 0;
            allIndices.length = 0;
            break;
          }
        }
        if (numMatches) {
          let result = {
            isMatch: true,
            score: totalScore / numMatches
          };
          if (includeMatches) {
            result.indices = allIndices;
          }
          return result;
        }
      }
      return {
        isMatch: false,
        score: 1
      };
    }
  }
  const registeredSearchers = [];
  function register(...args) {
    registeredSearchers.push(...args);
  }
  function createSearcher(pattern, options2) {
    for (let i = 0, len = registeredSearchers.length; i < len; i += 1) {
      let searcherClass = registeredSearchers[i];
      if (searcherClass.condition(pattern, options2)) {
        return new searcherClass(pattern, options2);
      }
    }
    return new BitapSearch(pattern, options2);
  }
  const LogicalOperator = {
    AND: "$and",
    OR: "$or"
  };
  const KeyType = {
    PATH: "$path",
    PATTERN: "$val"
  };
  const isExpression = (query) => !!(query[LogicalOperator.AND] || query[LogicalOperator.OR]);
  const isPath = (query) => !!query[KeyType.PATH];
  const isLeaf = (query) => !isArray(query) && isObject(query) && !isExpression(query);
  const convertToExplicit = (query) => ({
    [LogicalOperator.AND]: Object.keys(query).map((key) => ({
      [key]: query[key]
    }))
  });
  function parse(query, options2, {auto = true} = {}) {
    const next = (query2) => {
      let keys = Object.keys(query2);
      const isQueryPath = isPath(query2);
      if (!isQueryPath && keys.length > 1 && !isExpression(query2)) {
        return next(convertToExplicit(query2));
      }
      if (isLeaf(query2)) {
        const key = isQueryPath ? query2[KeyType.PATH] : keys[0];
        const pattern = isQueryPath ? query2[KeyType.PATTERN] : query2[key];
        if (!isString(pattern)) {
          throw new Error(LOGICAL_SEARCH_INVALID_QUERY_FOR_KEY(key));
        }
        const obj = {
          keyId: createKeyId(key),
          pattern
        };
        if (auto) {
          obj.searcher = createSearcher(pattern, options2);
        }
        return obj;
      }
      let node = {
        children: [],
        operator: keys[0]
      };
      keys.forEach((key) => {
        const value = query2[key];
        if (isArray(value)) {
          value.forEach((item) => {
            node.children.push(next(item));
          });
        }
      });
      return node;
    };
    if (!isExpression(query)) {
      query = convertToExplicit(query);
    }
    return next(query);
  }
  class Fuse {
    constructor(docs, options2 = {}, index) {
      this.options = {...Config, ...options2};
      if (this.options.useExtendedSearch && false) {
        throw new Error(EXTENDED_SEARCH_UNAVAILABLE);
      }
      this._keyStore = new KeyStore(this.options.keys);
      this.setCollection(docs, index);
    }
    setCollection(docs, index) {
      this._docs = docs;
      if (index && !(index instanceof FuseIndex)) {
        throw new Error(INCORRECT_INDEX_TYPE);
      }
      this._myIndex = index || createIndex(this.options.keys, this._docs, {
        getFn: this.options.getFn
      });
    }
    add(doc) {
      if (!isDefined(doc)) {
        return;
      }
      this._docs.push(doc);
      this._myIndex.add(doc);
    }
    remove(predicate = () => false) {
      const results = [];
      for (let i = 0, len = this._docs.length; i < len; i += 1) {
        const doc = this._docs[i];
        if (predicate(doc, i)) {
          this.removeAt(i);
          i -= 1;
          results.push(doc);
        }
      }
      return results;
    }
    removeAt(idx) {
      this._docs.splice(idx, 1);
      this._myIndex.removeAt(idx);
    }
    getIndex() {
      return this._myIndex;
    }
    search(query, {limit = -1} = {}) {
      const {
        includeMatches,
        includeScore,
        shouldSort,
        sortFn,
        ignoreFieldNorm
      } = this.options;
      let results = isString(query) ? isString(this._docs[0]) ? this._searchStringList(query) : this._searchObjectList(query) : this._searchLogical(query);
      computeScore$1(results, {ignoreFieldNorm});
      if (shouldSort) {
        results.sort(sortFn);
      }
      if (isNumber(limit) && limit > -1) {
        results = results.slice(0, limit);
      }
      return format(results, this._docs, {
        includeMatches,
        includeScore
      });
    }
    _searchStringList(query) {
      const searcher = createSearcher(query, this.options);
      const {records} = this._myIndex;
      const results = [];
      records.forEach(({v: text, i: idx, n: norm2}) => {
        if (!isDefined(text)) {
          return;
        }
        const {isMatch, score, indices} = searcher.searchIn(text);
        if (isMatch) {
          results.push({
            item: text,
            idx,
            matches: [{score, value: text, norm: norm2, indices}]
          });
        }
      });
      return results;
    }
    _searchLogical(query) {
      const expression = parse(query, this.options);
      const evaluate = (node, item, idx) => {
        if (!node.children) {
          const {keyId, searcher} = node;
          const matches = this._findMatches({
            key: this._keyStore.get(keyId),
            value: this._myIndex.getValueForItemAtKeyId(item, keyId),
            searcher
          });
          if (matches && matches.length) {
            return [
              {
                idx,
                item,
                matches
              }
            ];
          }
          return [];
        }
        switch (node.operator) {
          case LogicalOperator.AND: {
            const res = [];
            for (let i = 0, len = node.children.length; i < len; i += 1) {
              const child = node.children[i];
              const result = evaluate(child, item, idx);
              if (result.length) {
                res.push(...result);
              } else {
                return [];
              }
            }
            return res;
          }
          case LogicalOperator.OR: {
            const res = [];
            for (let i = 0, len = node.children.length; i < len; i += 1) {
              const child = node.children[i];
              const result = evaluate(child, item, idx);
              if (result.length) {
                res.push(...result);
                break;
              }
            }
            return res;
          }
        }
      };
      const records = this._myIndex.records;
      const resultMap = {};
      const results = [];
      records.forEach(({$: item, i: idx}) => {
        if (isDefined(item)) {
          let expResults = evaluate(expression, item, idx);
          if (expResults.length) {
            if (!resultMap[idx]) {
              resultMap[idx] = {idx, item, matches: []};
              results.push(resultMap[idx]);
            }
            expResults.forEach(({matches}) => {
              resultMap[idx].matches.push(...matches);
            });
          }
        }
      });
      return results;
    }
    _searchObjectList(query) {
      const searcher = createSearcher(query, this.options);
      const {keys, records} = this._myIndex;
      const results = [];
      records.forEach(({$: item, i: idx}) => {
        if (!isDefined(item)) {
          return;
        }
        let matches = [];
        keys.forEach((key, keyIndex) => {
          matches.push(...this._findMatches({
            key,
            value: item[keyIndex],
            searcher
          }));
        });
        if (matches.length) {
          results.push({
            idx,
            item,
            matches
          });
        }
      });
      return results;
    }
    _findMatches({key, value, searcher}) {
      if (!isDefined(value)) {
        return [];
      }
      let matches = [];
      if (isArray(value)) {
        value.forEach(({v: text, i: idx, n: norm2}) => {
          if (!isDefined(text)) {
            return;
          }
          const {isMatch, score, indices} = searcher.searchIn(text);
          if (isMatch) {
            matches.push({
              score,
              key,
              value: text,
              idx,
              norm: norm2,
              indices
            });
          }
        });
      } else {
        const {v: text, n: norm2} = value;
        const {isMatch, score, indices} = searcher.searchIn(text);
        if (isMatch) {
          matches.push({score, key, value: text, norm: norm2, indices});
        }
      }
      return matches;
    }
  }
  function computeScore$1(results, {ignoreFieldNorm = Config.ignoreFieldNorm}) {
    results.forEach((result) => {
      let totalScore = 1;
      result.matches.forEach(({key, norm: norm2, score}) => {
        const weight = key ? key.weight : null;
        totalScore *= Math.pow(score === 0 && weight ? Number.EPSILON : score, (weight || 1) * (ignoreFieldNorm ? 1 : norm2));
      });
      result.score = totalScore;
    });
  }
  function format(results, docs, {
    includeMatches = Config.includeMatches,
    includeScore = Config.includeScore
  } = {}) {
    const transformers = [];
    if (includeMatches)
      transformers.push(transformMatches);
    if (includeScore)
      transformers.push(transformScore);
    return results.map((result) => {
      const {idx} = result;
      const data = {
        item: docs[idx],
        refIndex: idx
      };
      if (transformers.length) {
        transformers.forEach((transformer) => {
          transformer(result, data);
        });
      }
      return data;
    });
  }
  Fuse.version = "6.4.1";
  Fuse.createIndex = createIndex;
  Fuse.parseIndex = parseIndex;
  Fuse.config = Config;
  {
    Fuse.parseQuery = parse;
  }
  {
    register(ExtendedSearch);
  }
  var fuse_esm_default = Fuse;

  // assets/js/utils.js

  // assets/js/search.js
  const mark = __toModule(require_mark());
  const options = {
    includeScore: true,
    shouldSort: true,
    includeMatches: true,
    findAllMatches: false,
    threshold: 0.3,
    tokenize: false,
    ignoreLocation: true,
    minMatchCharLength: 3,
    keys: [
      {name: "title", weight: 0.8},
      {name: "contents", weight: 0.5},
      {name: "tags", weight: 0.3},
      {name: "categories", weight: 0.1}
    ]
  };
  const searchBox = document.getElementById("search-box");
  const searchResultsBox = document.getElementById("search-results-box");
  const initFuse = async () => {
    const res = await fetch("/codelibrary/index.json");
    const list = await res.json();
    const fuseInstance = new fuse_esm_default(list, options);
    return fuseInstance;
  };
  const updateSearch = (fuseInstance) => (event) => {
    const pattern = event.target.value;
    const result = fuseInstance.search(pattern);
    var searchResultsEl = document.getElementById("search-results-box");
    searchResultsEl.innerHTML = "";
    if (result.length > 0) {
      populateResults(result, pattern, searchResultsEl);
    } else {
      var para = document.createElement("li");
      para.innerText = "No matches found";
      searchResultsEl.appendChild(para);
    }
  };
  var summaryInclude = 60;
  function populateResults(result, pattern, searchResultsEl) {
    result.forEach(function(value, key) {
      console.log(value);
      var content = value.item.contents;
      var snippet = "";
      var snippetHighlights = [];
      var tags = [];
      if (options.tokenize) {
        snippetHighlights.push(pattern);
      } else {
        value.matches.forEach(function(mvalue, matchKey) {
          if (mvalue.key == "tags" || mvalue.key == "categories") {
            snippetHighlights.push(mvalue.value);
          } else if (mvalue.key == "contents") {
            start = mvalue.indices[0][0] - summaryInclude > 0 ? mvalue.indices[0][0] - summaryInclude : 0;
            end = mvalue.indices[0][1] + summaryInclude < content.length ? mvalue.indices[0][1] + summaryInclude : content.length;
            snippet += content.substring(start, end);
            snippetHighlights.push(mvalue.value.substring(mvalue.indices[0][0], mvalue.indices[0][1] - mvalue.indices[0][0] + 1));
          }
        });
      }
      if (snippet.length < 1) {
        snippet += content.substring(0, summaryInclude * 2);
      }
      var templateDefinition = document.getElementById("search-result-template").innerHTML;
      var output = render(templateDefinition, {
        key,
        title: value.item.title,
        link: value.item.permalink,
        tags: value.item.tags,
        categories: value.item.categories,
        score: value.score,
        snippet
      });
      searchResultsEl.appendChild(htmlToElement(output));
      snippetHighlights.forEach(function(snipvalue, snipkey) {
        new mark.default(document.getElementById("summary-" + key)).mark(snipvalue);
      });
    });
  }
  function render(templateString, data) {
    var conditionalMatches, conditionalPattern, copy2;
    conditionalPattern = /\$\{\s*isset ([a-zA-Z]*) \s*\}(.*)\$\{\s*end\s*}/g;
    copy2 = templateString;
    while ((conditionalMatches = conditionalPattern.exec(templateString)) !== null) {
      if (data[conditionalMatches[1]]) {
        copy2 = copy2.replace(conditionalMatches[0], conditionalMatches[2]);
      } else {
        copy2 = copy2.replace(conditionalMatches[0], "");
      }
    }
    templateString = copy2;
    var key, find, re;
    for (key in data) {
      find = "\\$\\{\\s*" + key + "\\s*\\}";
      re = new RegExp(find, "g");
      templateString = templateString.replace(re, data[key]);
    }
    return templateString;
  }
  function htmlToElement(html) {
    var template = document.createElement("template");
    html = html.trim();
    template.innerHTML = html;
    return template.content.firstChild;
  }
  var search_default = async () => {
    const fuse2 = await initFuse();
    searchBox && searchBox.addEventListener("input", updateSearch(fuse2));
  };

  // assets/js/copy.js
  window.addEventListener("DOMContentLoaded", (event) => {
    const copyText = "copy";
    const copiedText = "copied";
    document.querySelectorAll(".post-body > pre").forEach((e) => {
      let div = document.createElement("div");
      e.parentNode.replaceChild(div, e);
      div.appendChild(e);
    });
    function addCopyButtons(clipboard2) {
      const divs = document.querySelectorAll("table.lntable, .highlight > pre, .post-body > div > pre");
      divs.forEach((containerEl) => {
        containerEl.parentNode.style.position = "relative";
        const button = document.createElement("button");
        button.className = "copy-button";
        button.type = "button";
        button.innerText = copyText;
        if (containerEl.classList.contains("lntable")) {
          var codeBlock = containerEl.querySelectorAll(".lntd")[1];
        } else {
          var codeBlock = containerEl.querySelector("code");
        }
        button.addEventListener("click", () => {
          clipboard2.writeText(codeBlock.innerText).then(() => {
            button.blur();
            button.innerText = copiedText;
            setTimeout(() => {
              button.innerText = copyText;
            }, 1e3);
          }).catch((error) => {
            button.innerText = "Error";
            console.error(error);
          });
        });
        containerEl.appendChild(button);
      });
    }
    if (navigator && navigator.clipboard) {
      addCopyButtons(navigator.clipboard);
    } else {
      const script = document.createElement("script");
      script.src = "https://cdn.jsdelivr.net/npm/clipboard-polyfill@2.8.6/dist/clipboard-polyfill.min.js";
      script.defer = true;
      script.onload = function() {
        addCopyButtons(clipboard);
      };
      document.head.appendChild(script);
    }
  }, {once: true});

  // assets/js/algolia.js
  const search = instantsearch({
    appId: "XGE67QYGAR",
    apiKey: "4de1a710351e1933128b8010dbc2a327",
    indexName: "Codelibrary",
    hitsPerPage: 5,
    routing: true,
    searchFunction(helper) {
      const container = document.querySelector("#algolia-results");
      container.style.display = helper.state.query === "" ? "none" : "";
      helper.search();
    }
  });
  search.addWidget(instantsearch.widgets.searchBox({
    container: "#algolia-box",
    reset: true,
    placeholder: "Search for content"
  }));
  search.addWidget(instantsearch.widgets.infiniteHits({
    container: "#algolia-results",
    templates: {
      empty: "No results",
      item: "<hr/> {{{_highlightResult.title.value}}}<br/> {{{_highlightResult.summary.value}}} <br/>{{{_highlightResult.tags[0].value}}}"
    }
  }));
  search.addWidget(instantsearch.widgets.refinementList({
    container: "#algolia-refine",
    attributeName: "tags"
  }));
  search.start();

  // main.js
  search_default();
})();
