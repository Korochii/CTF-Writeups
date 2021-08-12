# Trace the Line

## Category
Web

## Description
I have a request - can you take your pencil and trace a perfect line???

Note: There is a rate limit of 5 requests/second.

## Attachments
http://puzzler7.imaginaryctf.org:7000/

## Writeup
Upon entering the website, we can tell that it consists of a button and a counter that increases everytime the button is being clicked.

A random string is also being displayed, which might seem to be useless at first.
However, after a few tries, there were some hints in the random string being displayed, such as "jctf{this_is_just_practice_for_a_cookie_clicker_speedrun}" and "jctf{500_is_one_of_my_favorite_numbers}".

Afterwards, I decided to use an autoclicker until the button is clicked 500 times, and the flag can be obtained.

## Flag
ictf{7h3r3-r3@lly-1s-@-l1n3!!!}
