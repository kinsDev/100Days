#UPC DIGIT CHECKER QUESTION 1:
#############
For a number of years, manufacturers of goods sold in U.S. and Canadian stores
have put a bar code on each product. This code, known as a Universal Product
Code (UPC), identifies both the manufacturer and the product. Each bar code rep¬
resents a twelve-digit number, which is usually printed underneath the bars. For
example, the following bar code comes from a package of Stouffer's French Bread
Pepperoni Pizza:
The digits
0 13800 15173 5
appear underneath the bar code. The first digit identifies the type of item (0 or 7
for most items. 2 for items that must be weighed. 3 for drugs and health-related
merchandise, and 5 for coupons). The first group of five digits identifies the manu¬
facturer (13800 is the code for Nestle USA’s Frozen Food Division). The second
group of five digits identifies the product (including package size). The final digit
is a “check digit." whose only purpose is to help identify an error in the preceding
digits. II the UPC is scanned incorrectly, the first 11 digits probably won’t be con¬
sistent with the last digit, and the store’s scanner will reject the entire code.
Here’s one method of computing the check digit:
Add the first, third, fifth, seventh, ninth, and eleventh digits.
Add The second, fourth, sixth, eighth, and tenth digits.
4.1 Arithmetic Operators 57
Multiply the first sum by 3 and add it to the second sum.
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
Using the Stouffer’s example, we get 0 + 3 + 0 + 1 + 1 + 3 = 8 for the first sum and
1 +8 + 0 + 5 + 7 = 21 for the second sum. Multiplying the first sum by 3 and add¬
ing the second yields 45. Subtracting 1 gives 44. The remainder upon dividing by
10 is 4. When the remainder is subtracted from 9, the result is 5.
#############

#UPC DIGIT COMPUTING QUESTION 2:
Let's write a program that calculates the check digit for an arbitrary UPC.
We’ll ask the user to enter the first 11 digits of the UPC, then we'll display the cor¬
responding check digit. To avoid confusion, we'll ask the user to enter the number
in three parts: the single digit at the left, the first group of five digits, and the sec¬
ond group of five digits. Here’s what a session with the program will look like:
Enter the first (single) digit: 0
Enter first group of five digits: 13800
Enter second group of five digits: 15173
Check digit: 5
Instead of reading each digit group as a^tve-digit number, we'll read it as five
o/tc-digit numbers. Reading the numbers as single digits is more convenient; also,
we won’t have to worry that one of the five-digit numbers is too large to store in an
int variable. (Some older compilers limit the maximum value of an int variable
to 32,767.) To read single digits, we’ll use scanf with the %ld conversion speci¬
fication, which matches a one-digit integer.