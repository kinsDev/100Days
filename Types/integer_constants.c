/**
C allows integer constants to be written in decimal (base 10), octal (base 8). or hexadecimal (base 16).

An octal number is written using only the digits 0 through 7. Each position in an
octal number represents a power of 8 (just as each position in a decimal number
represents a power of 10). Thus, the octal number 237 represents the decimal number 2 x 82 + 3 x 81 + 7 x 8° = 128 + 24 + 7 = 15

A hexadecimal (or hex) number is written using the digits 0 through 9 plus the
letters A through F, which stand for 10 through 15, respectively. Each position in a
hex number represents a power of 16; the hex number 1AF has the decimal value
1 x 162+ 10 x 16' + 15 x 16° = 256 + 160 + 15 = 431.

Decimal constants contain digits between 0 and 9, but must not begin with a
zero:
15 255 32767

Octal constants contain only digits between 0 and 7. and must begin with a
zero:
017 0377 077777

Hexadecimal constants contain digits between 0 and 9 and letters between a
and f. and always begin with Ox:
Oxf Oxff 0x7fff
The letters in a hexadecimal constant may be either upper or lower case:
Oxff OxfF OxFf OxFF OXff OXfF OXFf OXFF

*/