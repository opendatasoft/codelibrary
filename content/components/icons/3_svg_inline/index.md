---
title: "Inline SVG directly in your HTML"
height: 200
---

A non-exhaustive list of SVG icon libraries free to use :

- [Remix Icon](https://remixicon.com/)
- [Bootstrap Icons](https://icons.getbootstrap.com/)
- [Google Fonts Icons](https://fonts.google.com/icons?selected=Material+Icons)
- [Feather icons](https://feathericons.com/)

**Usage for Remix Icon and Boostrap icons**:

As Bootstrap and Remix propose to copy to clipboard the SVG code directly from the interface,
you just need to choose your icon, click on the "Copy to clipboard" button for Boostrap, or "Copy SVG" for Remix.
You are then ready to go.


**Usage for Google icons, Feather icons and others:**

- Get the desired SVG icon, download it on your computer 
- Open it with a text editor
- Copy the code
- Paste it wherever you want in your HTML


> Pros: Inlining SVG is optimal is you use few icons in your pages, 
> and therefore you will only load what is really necessary
> (you won't load an heavy icon font to only use 0.1% of it)

> Pros: You take benefit of SVG format in general: better scaling, better accessibility possibilities, can handle complex and even multicolor icons. 

> Cons: Sizing and positioning can require more advanced CSS skills than simple icon fonts that behave like text characters.

> Cons: Reusing several times the same icon will be tedious as you'll need to duplicate the SVG code several times. In that case, see the next example for SVG Sprites

