# Arabic-number-to-Roman-Numerals
This project is a  C++ program that converts an integer between 1 and 3999 into its Roman numeral equivalent. The program repeatedly prompts users for a numbers until they choose to stop.

The project uses array indexing, loops, and string manipulation in C++.

The projec has nessecary libraries like:
iostream — Handles input and output operations.

string — Allows use of strings for constructing Roman numerals.

limits — Provides constants for data type limits.

cctype — Provides character-handling functions.

The program has the constant constexpr streamsize inFlag{numeric_limits<streamsize>::max()}; which is used to ignore extra characters in input.

The function its self has a section of arrays where the place numbers are held.

The digits are then extracted using the modulo operator.

Within the program only numbers 1-3999 are valid outside of that the function returns an error message.

The roman numerals for each place value are then concatinated and then returned.

In the main program the  user  is prompted if they want to start convert a number.

If the answer is 'Y' or 'y' a loop is then entered that asks for a number.

A call is made to toRoman(x) to convert the number.

THen theRoman numeral result is disolayed.

Ignore is placed to avoid extra input so that extra characters are not eead,

The users is then asked if they want to continue.

The Loop continues until the user enters anything other than 'Y' or 'y'.


Example run:
convert number?: Y
enter number: 1987
the result is: MCMLXXXVII
would you like to continue?: Y
enter number: 3999
the result is: MMMCMXCIX
would you like to continue?: N
