# ODS Codelibrary

V0 - WIP

### Cmds

Install
```shell script
brew install hugo
```

Run 
```shell script
hugo server -D
```

Deploy on GH Pages
```shell script
hugo
git subtree push --prefix public origin gh-pages
```

Update Algolia index (see .env)
```shell script
npm run algolia
```