#include <stdio.h>

int main(void){

    float x;
    int i;

    i = 40;
    x = 839.21f;

    printf("|%d| %5d| %-5d| %5.3d|\n", i, i, i, i);
    printf("|%10.3f| %10.3e| %-10g|\n", x, x, x);

    return 0;
}

/**
 * Let's lake a closer look at the conversion specifications used in this program:
%d — Displays i in decimal form, using a minimum amount ofspace.
%5d — Displays i in decimal form, using a minimum of five characters.
Since i requires only two characters, three spaces were added.
%-5d — Displays i in decimal form, using a minimum of five characters;
since the value of i doesn't require five characters, the spaces are added after¬
ward (that is, i is left-justified in a field of length five).
%5.3d — Displays i in decimal form, using a minimum of five characters
overall and a minimum of three digits. Since i is only two digits long, an extra
zero was added to guarantee three digits. The resulting number is only three
characters long, so two spaces were added, for a total of five characters (i is
right-justified).
%10.3f — Displays x in fixed decimal form, using 10 characters overall.
escape sequences 7.3
Q&A
with three digits after the decimal point. Since x requires only seven charac¬
ters (three before the decimal point, three after the decimal point, and one for
the decimal point itself), three spaces precede x.
%10.3e — Displays x in exponential form, using 10 characters overall, with
three digits after the decimal point, x requires nine characters altogether
(including the exponent), so one space precedes x.
%- 10g — Displays x in either fixed decimal form or exponential form, using
10 characters overall. In this case, printf chose to display x in fixed deci¬
mal form. The presence of the minus sign forces left justification, so x is fol¬
lowed by four spaces.
*/