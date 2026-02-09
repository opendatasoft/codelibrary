# ODS Codelibrary

This the Hugo site powering our [code library](https://codelibrary.opendatasoft.com/). The repo is mainly here for you to peak at the code. It's not intended to serve as a base for other projects. Should you have a question nevertheless, feel free to raise an issue.

### Cmds
If you want to run the site locally:

Install
```shell script
brew install hugo
```

Run
```shell script
hugo server -D
```

Update Algolia index (.env with private keys required, cf. 1password)
```shell script
npm run algolia
```

### To deploy

- Build (`hugo` cmd)
- git add/commit/push all the directory, but especially `/public` that contains the Code Library to deploy

### Add new Content
Using content archetype to create pages will automatically add date and title.

Add a new page
```shell script
// The resource will be named after the folder title
hugo new --kind component components/my-component-title // for most resources
hugo new --kind pages portal-themes/my-portal-theme-title // for port themes
```

Add new content to an existing page:
```shell script
hugo new --kind content section/page/5 // Contents are ordered by the number of their folder
```

### Schema.md helper

To create a schema.md file automatically for a resource. 
Use the helper :

```shell script
node genschema.js <domainid> <datasetid> <fields sep by ,>
```

ex:
```shell script
node genschema.js issy-les-moulineaux chrono_issy0 evenement,imagecsv,jour,mois,annee,coordonnees_geo,web
```

The expected output is a `schema.md` file in the root directory, that can be then moved to the resource.