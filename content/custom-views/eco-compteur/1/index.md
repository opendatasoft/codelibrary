---
title: "Eco-Counter / Eco-Compteur data custom view"
date: "2021-12-09"
domainid: "eco-compteur-odsapps"
datasetid: "eco-counter-data"
external_url: "https://eco-compteur-odsapps.opendatasoft.com/explore/dataset/eco-counter-data/dashboard/"
---

### Install procedure

Two datasets are required :
- **eco-counter-data** : from `Eco Counter Data` connector
- **eco-counter-sites** : from `Eco Counter Sites` connector

##### eco-counter-sites processing :

Get the first photo URL, copy the field, get the photo from the URL

- Split text:
  - field: `photos`
  - separator: `/https://`
  - index: `1`
  - output: `photourl`
- Copy a field: 
  - field: `photourl`
  - new field: `photo`
- File:
  - field: `photo`

##### eco-counter-data processing :

Get additional metadata from counters

- Join datasets:
  - dataset: `eco-counter-sites`
  - local key: `id`
  - remote key: `id`
  - output fields: `name, coordinates, user_type, sens, interval`
  