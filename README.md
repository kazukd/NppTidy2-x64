# HTML Tidy 2 Plugin for Notepad++ 64bit version 
This plugin provides a feature that is tidying HTML code quickly.

Original source is 'HTML Tidy 2 Plugin for Notepad++' from https://github.com/bruderstein/NppTidy2.
That is for the 32bit version, so we can not use it on the Notepad++ latest version.

Also, this plugin uses tidy-html5 from http://github.com/w3c/tidy-html5.
Thank you for sharing excelent code.

I have just converted from a 32bit version to a 64bit version.
The features of the plugin are same as the 32bit version.

## Why converted this plugin
I am a student of Bachelor of Information Technology. I have learned the fundamental of Web Development. I used Notepad++ for coding HTML. Sometimes I needed to tidy my HTML document.
I was looking for plugins or other editors.  I found the 'Tidy2' plugin, but that is for the 32bit version. I could not use it for Notepad++ latest version. I was searching the 64bit of 'Tidy2'. However, I couldn't, and I noticed other people are looking for the same things.
I tried to convert the plugin due to my curiosity, even if I don't know C++. I have just little C# knowledge, I have learned the fundamental of C# in my course. The knowledge helped me for this project. I hope that my work will help you.

## Donation Please support for me
I am a student, almost finish the first year,  but I have to earn for tution fee or cost of living because I don't have enough finance for studying next year. I always work weekends up to 20 hours (my visa status allows only 20 hours /week). Also, my laptop computre is old which I bought it in 2012, nine years ago, so sometimes freezing. I want to more focus to study. If you like my project, please suppourts for me.

https://paypal.me/kazukd


## Installation
1. Make the new folder which name is 'Tidy2', under your Notepad++\plugins folder. 
2. Just copy the Tidy2.dll to the new folder and doc folder.

For example, my environment is below the file tree.
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

default config is for the XML document.
If you do not like the result, read the 'How to customize' or [GitHub Pages](https://pages.github.com/)
my recommendation configuration.

## How to customize
1. Select 'Plugins'-'Tidy2-x64'-'Edit (config ?)' (? is 1 or 2 or 3)
2. Then new tab is opened in Notepad++. Tab name is 'Tidy?.cfg' ( ? is 1 or 2 or 3)
3. Add or replace config command
4. It can be seen config option menu when select 'Plugins'-'Tidy2-x64'-'Show Config Help'

## My recommendation configuration

