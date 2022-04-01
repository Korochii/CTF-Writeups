# Another Login Page

## Category
Web

## Description
I have another login page for you to get past! I'm so confident it's secure that I'll even give you the source code!

## Attachments
https://login-page.max49.repl.co/

## Writeup
Upon entering the website, we are provided with the source code for the login page (which uses flask). <br></br>
Particularly, there is a line that is interesting:
<code> if(username == "theadminaccount" and password == "sfN7?v,2T3ZVSk+2RX~"): </code><br></br>

In addition, there is an app.route that redirects to the /login page. <br></br>
After entering the /login page, we are presented with a simple login page. <br></br>
However, the input field for both username and password have a max length of 10 characters, which is more than the username/password given. <br></br>
To bypass this, we can simply use the Inspect Element function and remove the maxLength modifier in the input field of the form <br></br>
After that, we can login by inputting the given username and password, and the flag can be found.


## Flag
ictf{cr34t3_sup3r_l0ng_chann3l_nam3s_by_ed1t1ng_maxlength!_roocash_}
