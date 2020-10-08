---
title: "Sticky header"
description: ""
tags: ["navigation"]
resources:
- src: '*/'
  title: 'Section #:counter'
---

{{< intro-content >}}
# Sticky header

Sticky content is one that will stay positioned once the user scrolls past it (i.e: stuck in position). Unlike `position: fixed;`, sticky content is limited by its container and will stop scrolling once the end of the parent element is reached.

To make an element sticky, you need to add the following CSS:

`position: sticky;`
`top: 0;`
{{< /intro-content >}}
