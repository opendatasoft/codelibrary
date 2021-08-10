---
title: "Optimal solution with SVG Sprites"
height: 200
---

**Disclaimer:**

Technically speaking, it's the optimal solution, but beware (as the must is the enemy of the good), **it's also the most complex and technical**.
We recommend this solution for external usage, when the project must handle an important traffic, and therefore when performance is a key criteria. 

**Principle:**

You will constitute an SVG Sprite, that contains all the required SVGs of your page. It's a kind of collection of `symbol`s. Each symbol as an ID, and can be used by referencing this ID.

In this example:
- a sprite (collection) of 2 icons is declared in the HTML
- each icon has a viewport, but don't necessarily have a size
- then, in my page, I can "load" the desired icon by using the symbol ID with a `<use>` tag and a `hrel` attribute.
- on each `svg/use` tag I can set a specific style, to change de size, the stroke color etc...
- I can also apply (with CSS) a transform property, to rotate or even animate my icons.