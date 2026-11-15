#include <stdio.h>
double fib(int n);
int main ()
{
int n;
scanf("%d",&n);
printf("%.0f",fib(n));
return 0;
}
double fib (int n)
{
double a = 1,b = 1;
for (int i = 3;i<= n;i++)
{
double c = a + b;
a = b;
b = c;
}
return b;
}
