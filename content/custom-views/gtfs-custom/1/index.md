---
title: "GTFS Routes and stops"
date: "2021-02-19"
external_url: "https://userclub.opendatasoft.com/explore/dataset/gtfs-nyc/custom/"
---

3 steps install procedure:
- **Please ask for the activation of the GTFS extractors to the ODS support team**
- **Upload the data (i, ii and iii correspond to three distinct datasets in your catalog)**: 
    1) The GTFS raw datasets are uploaded on the platform using the classic extractor 'CSV with attached media'
    2) The GTFS stations are uploaded by configuring each GTFS zip file as a source and by selecting 'GTFS Stops' for the extractor, 
    3) The GTFS routes are uploaded by configuring each GTFS zip file as a source and by selecting 'GTFS Routes' for the extractor. 

One needs to check the 'Extract filename' option during the steps 2 and 3. You may also configure the tooltips.
- Create the custom tab: Copy and paste the code of the mini dashboard in order to visualize the routes and stops. Please **check that you are using the correct dataset identifiers**. The CSS code below implies that the map takes exactly the remaining height of the screen in the default theme configuration.

> Note: This component cannot harness the capability of custom views to inherit the `ctx` context from catalog filters, since download links cannot be fitlered by routes or stops. It simply provides a nice way to display a gtfs and shows how to use other datasets in a custom view—not only the one you are currently exploring.
