#include <stdio.h>
int main()
{
    double F, C;
    scanf("%lf", &F);
    C = (F - 32) *5/9;
    printf("%0.2f", C);
    return 0;
}
/*
C Language Notes - Day 3
topic : Temperature Conversion
1. Date Types
int:stores integers.
double:stores fllaoting-point numers.

2. Inpput and Output
scanf():reade user input
printf():disply output

3. Format Specifiers
%d :read or print sn integer
%f :print a flosting-point numer
%lf :read a double value using scanf
%c :read or print a character
%s :read or print a string

%.2f :print a floating-point number with 2 decimal places
*/
