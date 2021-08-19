# Tidy 2 Plugin for Notepad++ 64bit version 
This plugin provides a feature that is tidying HTML or XML code quickly.

Original source is 'HTML Tidy 2 Plugin for Notepad++' from https://github.com/bruderstein/NppTidy2.
That is for the 32bit version, so we can not use it on the Notepad++ latest version.

Also, this plugin uses tidy-html5 from http://github.com/w3c/tidy-html5 (Copyright (c) 1998-2003 World Wide Web Consortium).

They are excellent code. Thank you for sharing.

I have just converted from a 32bit version to a 64bit version.
The features of the plugin are the same as the original version.

## Why converted this plugin
I am a student of Bachelor of Information Technology. I have learned the fundamental of Web Development. I used Notepad++ for coding HTML. Sometimes I needed to tidy my HTML document.
I was looking for plugins or other editors.  I found the 'Tidy2' plugin, but that is for the 32bit version. I could not use it for Notepad++ latest version. I was searching the 64bit of 'Tidy2'. However, I couldn't, and I noticed other people are looking for the same things.
I tried to convert the plugin due to my needs and my curiosity, even if I don't know C++. I enjoyed this project though result was not perfect. I hope that my work will help you.

## Donation (Please support me)
I am a student, almost finishing the first year in 2021,  but I have to earn a tuition fee or cost of living until end of September in 2021 because I don't have enough finance for studying next year in 2022. The tuition fee is $24,000 per year, and I need a bank statement which is $20,000 for next year evidence to the government. I always work weekends up to 20 hours (my visa status allows only 20 hours /week). Also, my laptop computer is old which I bought it in 2012, nine years ago, so sometimes freezing. I want to more focus on study and my projects. If you like my projects, please support me.


[Donate](https://paypal.me/kazukd)

## Download
Tidy2.dll file Version 0.1.0.0  Using tidy-html version 5.8.0 on 17th July 2021
http://github.com/w3c/tidy-html5

   
## Installation
### Copy dll file
1. Make the new folder which name is 'Tidy2', under your Notepad++\plugins folder. 
2. Just copy the Tidy2.dll to the new folder.

### Copy tidy-html5 documents
1. Download  http://github.com/w3c/tidy-html5 and extract the file.
2. Make the new folder which name is 'doc', under 'Tidy2' which is created above work 'Copy dll file No.1 '
3. Copy quickref.html and tidy.css into 'doc' folder.

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
2. Select 'Plugins'-'Tidy2-x64'-'Tidy (config ?)' (? is 1 or 2 or 3)
3. Then hole document is tidied.

Default config is for the XML document.
If you do not like the result, you can customize tidy way. Please read [How to customize](https://github.com/kazukd/NppTidy2-x64/blob/main/README.md#how-to-customize) or 
[My recommendation configuration](https://github.com/kazukd/NppTidy2-x64/blob/main/README.md#my-recommendation-configuration) .

## How to customize
1. Select 'Plugins'-'Tidy2-x64'-'Edit (config ?)' (? is 1 or 2 or 3)
2. Then new tab is opened in Notepad++. Tab name is 'Tidy?.cfg' ( ? is 1 or 2 or 3)
3. Add or replace config command
4. Save config file

It can be seen config option menu when select 'Plugins'-'Tidy2-x64'-'Show Config Help'

## My recommendation configuration

### output-xml or output-html
Default config is for the XML document.
1. Open 'Edit (config ?)' file
2. Delete output-xml: yes
3. Add    output-html: yes

output-xml and output-html have pros and cons. You can decide which is better for you.
I sometimes like output-xml but sometimes like output-html. ( I want to mix both features in the future.) 

### drop-empty-elements
If you use tag it is like ``` <i class="fa fa-bars"></i> ```, you should add below setting.
```
drop-empty-elements: no
```
That prevents empty tag is deleted. The empty tag means like this ```<div></div>``` or ```<b></b>```. If ```<div>test</div>``` or ```<b>Code</b>```, these are not empty.

``` <i class="fa fa-bars"></i> ``` is tag for hamburger menu. I think many people use that.

### tidy-mark
This plugin adds head tag with some information.
add
```
tidy-mark: no
```
That prevents to add some information. However, If ```<html>``` or ```<head>``` are missing in original document, it will be added ```<html> ,<head> or <body>```.

### Others
I add below setting. If you like my setting, please add them into your config file.
```
preserve-entities: 1
output-encoding: no
input-encoding: no
```

## Issuu
You may not compile my source due to my lack of skills in C++. I have just learned C++ for one week by myself for this project.  Luckily, the first version was good with no warning, but the next version has many warnings. I had backup, but I can't fix it.
One error has occurred always when compiled because the author of the 32bit version used the copy command in Visual studio. The command is copying dll file another folder. I could not figure out where to write the command in the Visual studio.

I would like to change tidy way because sometimes the result is not suitable for me. This plugin change hole document, I am thinking that the function is replacing selected parts.

## Future
I have some ideas for improving this plugin. If I have time, I try to update.

[Donate](https://paypal.me/kazukd)
Thank you.

