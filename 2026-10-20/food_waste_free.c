#include <stdio.h>
int main ()
{
    int age, waste, cost ;
    scanf("%d %d",&age,&waste);
    if(age<=6)
    {
        cost = 10;
    }
    else if(age>6 &&age<=12)
    {
        cost = 39;
    }
    else if (age>12)
    {
        cost = 78;
    }
    cost += (waste/250)*10;
    printf("%d",cost);
}