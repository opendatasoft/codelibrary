---
title: "Inline SVG directly in your HTML"
height: 200
---

A non-exhaustive list of SVG icon libraries free to use :

- [Bootstrap Icons](https://icons.getbootstrap.com/)
- [Google Fonts Icons](https://fonts.google.com/icons?selected=Material+Icons)
- [Feather icons](https://feathericons.com/)

**Usage for Google icons, Feather icons and others:**

- Get the desired SVG icon, download it on your computer 
- Open it with a text editor
- Copy the code
- Paste it wherever you want in your HTML

**Usage for Boostrap icons**:

As Bootstrap Icons is the only one to propose to directly copy to clipboard the SVG code directly from the interface, 
you just need to choose your icon, click on the Copy to clipboard button in the "Copy HTML" section. You are then ready to go. 

> Pros: Inlining SVG is optimal is you use few icons in your pages, 
> and therefore you will only load what is really necessary
> (you won't load an heavy icon font to only use 0.1% of it)

> Cons: You'll need to write additional CSS to size your icons and align them correctly in your layouts

> Cons: Reusing several times the same icon will be tedious as you'll need to duplicate the SVG code several times

