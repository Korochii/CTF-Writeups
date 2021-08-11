# Rules of Engagement

## Category
Programming

## Description
The rules are simple. If the number is divisible by two, shift it right by one. Otherwise, if it is a multiple of five, divide by five. If it is neither but it is a multiple of three, then add eight. Repeat this process until it yields the flag.

## Attachments
328125, 309375, 3712, 3264, 384375, 221875, 1536, 1536, 3200, 296875, 2752, 303125, 3648, 153125, 303125, 3136, 3456, 159375, 296875, 2496, 303125, 340625, 159375, 359375, 296875, 2624, 296875, 2688, 3328, 159375, 328125, 3648, 296875, 1536, 371875, 3520, 296875, 2624, 159375, 371875, 303125, 3648, 3200, 390625

## Writeup

On each iteration, we can use the rules provided to convert the array of decimal numbers to a new set of numbers, which can then be converted to an ASCII text.
We will repeat this until the flag is found (I realised it will take 5 iterations since the first number can become 105 eventually which is equivalent to the letter 'i'.

## Flag
ictf{G00d_Var1abl3_Nam3s_R_Th3ir_0wn_R3ward}
