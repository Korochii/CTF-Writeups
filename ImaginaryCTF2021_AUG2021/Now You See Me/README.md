# Now You See Me

## Category
Reversing

## Description
Look closely, because the closer you think you are, the less you will actually see...

## Attachments
F224-NowYouSeeMe.c

## Writeup

Upon downloading and compiling/running the C program, we can see that the program outputs the following message:

>\*\*poof\*\* Now you don't!

Coupled with the problem description, I decided to move the `puts(temp)` line to after `merge_bytes(temp, magic)`, and the flag can be found.

**\*Note: I am not sure if this is the right way to solve this problem. Feel free to submit a pull request if there are any other alternative solutions.**

## Flag
ictf{u_C_r1gh7-thru-1t}
