# The Muppets

## Category
Stegnography

## Description
Wait... Kermit wasn't a bat? Give me a break. This ain't easy.

## Attachments
AAA7-kermit.png

## Writeup

After downloading the file, we can confirm that the file is a PNG image by using the command `file AAA7-kermit.png`.

Immediately, I tried to find any hidden strings in the file by using `strings AAA7-kermit.png`, but the result was not useful at all.

After which, I tried a series of tools such as exiftool, binwalk and zsteg, but these tools did not work as well.

After googling, I found an online tool called fotoforensics (http://fotoforensics.com). I uploaded the picture and selected the hidden pixels option,
which revealed a line of symbols as shown below. 

![alt text](https://i.imgur.com/7lYRzaR.png)

I recognized these symbols as the Wingdings font, which can be converted to plaintext by using an online converter.

![alt text](https://i.imgur.com/0ojzlO4.png)

## Flag

ictf{Wingdings:The_Latin_of_emojis}
