fizz_buzz
=========

A general fizz_buzz program, taking four parameters.

Usage: fizz_buzz f g min max

f, g: Parameters to test. e.g f = 3, g = 5. min, max: Range of numbers to test. e.g. min = 1, max = 100

This project started as a straightforward fizz buzz program with fixed parameters f = 3, f = 5, min = 1, max = 100 as
in the canonical fizz buzz test program.

I decided I wanted to generalize this program to take any combination of these parameters with the constrants that f < g,
min < max.  I also check for overflow, the user could enter numbers much larger than LONG_MAX, or smaller than LONG_MIN.

This required some range checking code to verify that the inputs matched these constraints.

This project also utilizes unit testing to test the input verification code.

This may be simple code, but I wanted to show how I do unit testing in C++, as well as how I validate my input.
