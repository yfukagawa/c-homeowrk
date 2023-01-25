
/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
*/

#include <stdio.h>

int main() {
int myNum = 15;
int moreNum;
moreNum = 15;

/*
## Format Specifiers ##
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
A format specifier starts with a percentage sign %, followed by a character.
For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
To print other types, use %c for char and %f for float:
*/

float myFloatNum = 5.99;
char myLetter = 'D';

printf("\n");
printf("%d\n", myNum);
printf("%d\n", moreNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
printf("\n");
}