# HTML Tidy 2 Plugin for Notepad++ 64bit version 
This plugin provides feature which is tidying HTML code quickly.

Original source is 'HTML Tidy 2 Plugin for Notepad++' from https://github.com/bruderstein/NppTidy2.
That is for 32bit version so we can not use it on the Notepad++ latest version.

Also this plugin uses tidy-html5 from http://github.com/w3c/tidy-html5.
Thank you for sharing excelent code.

I've just convert from 32bit version to 64bit version.
The features of the plugin is same as 32bit version.

## Installation
Meke the new folder which name is 'Tidy2' under your Notepad++\plugins folder.
Just copy the Tidy2.dll to the new folder and doc folder.

For example, my environment is below file tree.
```
C:\Program Files\Notepad++\plugins\Tidy2
│   LICENSE
│   Tidy2.dll
└───doc
    │   quickref.html
    │   tidy.css
```
## Run
After copying, run Notepad++.
It can be seen 'Tidy2-x64' in Plugins menu of Notepad++.

If Notepad++ is running duaring it is copying, it requires restarting Notepad++.

## How to use
1. Open HTML document
2. Slect 'Plugins'-'Tidy2-x64'-'Tidy (config ?)' (? is 1 or 2 or 3)
3. Then hole document is tidied.

default config is for xml document.
If you don't like result, read the 'How to customize' or[GitHub Pages](https://pages.github.com/)
my recommendation configration.

## How to custmize
1. Select 'Plugins'-'Tidy2-x64'-'Edit (config ?)' (? is 1 or 2 or 3)
2. Then new tab is opened in Notepad++. Tab name is 'Tidy?.cfg' ( ? is 1 or 2 or 3)
3. Add or replace config command
4. It can be seen config option menu when select 'Plugins'-'Tidy2-x64'-'Show Config Help'

## My recommendation configration

