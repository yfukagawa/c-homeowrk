/*
## Basic Data Types ##
int --	2 or 4 bytes	Stores whole numbers, without decimals
float --	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double --	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
char --	1 byte	Stores a single character/letter/number, or ASCII values

## Basic Format Specifiers ##
%d or %i --	int	
%f	-- float	
%lf	-- double	
%c	-- char	
%s	-- strings (text)

If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:
    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits
*/

#include <stdio.h>

int main() {
    float a = 3.52;
    float b = 5.73;
    float c = 9.99;
    float d = 20.99;
    float wTax = 1.06;

    printf("\n The unit price of this pen is $%.2f",a);
    printf(". \n and with tax, it is $%.2f", a * wTax);
    printf(". \n");
    printf("\n");

    // type conversion

    int x = 2;
    int y = 3;
    int z = 5;
    float i = (float) y/x;
    float j = (float) y/z;
    double k = (double) z/x;
    printf("\n");
    printf("\nConvert int to float or double");
    printf("\n x=2, y=3, z=5");
    printf("\n y/x= %f", i);
    printf("\n y/z= %f", j);
    printf("\n z/x= %lf", k);
    printf("\n");
}