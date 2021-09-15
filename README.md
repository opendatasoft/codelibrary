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

Update Algolia index (see .env)
```shell script
npm run algolia
```

Build everything and submit a PR on github (require [gh CLI](https://cli.github.com/) to be installed) : 
```shell script
npm run submit 'My PR title'
```
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
