# ODS Codelibrary

This the Hugo site powering our [code library](https://codelibrary.opendatasoft.com/). The repo is mainly here for you to peak at the code. It's not intended to serve as a base for other projects. Should you have a question nevertheless, feel free to raise an issue.

### Cmds
If you want to test—and break !—the site locally:

Install
```shell script
brew install hugo
```

Run 
```shell script
hugo server -D
```

Deploy on GH Pages (if you pushed to a remote)
```shell script
hugo
git subtree push --prefix public origin gh-pages
```

Update Algolia index (see .env)
```shell script
npm run algolia
```
