#include <stdio.h>
#include <math.h>
double average (double arr[],int count);
double standard (double arr[],int count,double average);
int main ()
{
int n;
scanf("%d",&n);
double arr[n][6];
for(int i = 0;i<n;i++)
{
for (int j = 0;j<6;j++)
{
scanf("%lf",&arr[i][j]);
}
}
int fast_id = 0;
int smallest_id = 0;
for (int i = 1;i<n;i++)
{
if(average(arr[fast_id],6)>average(arr[i],6))
fast_id = i;
if(standard(arr[smallest_id],6,average(arr[smallest_id],6))>standard(arr[i],6,average(arr[i],6)))
smallest_id = i;
}
printf("The shortest average time (%.3f) is from No.%d\n",average(arr[fast_id],6),fast_id);
printf("The smallest standard deviation (%.3f) is from No.%d\n",standard(arr[smallest_id],6,average(arr[smallest_id],6)),smallest_id);
return 0;
}
double average (double arr[],int count)
{
double sum = 0;
for (int i = 0;i<count;i++)
sum += arr[i];
return sum/count;
}
double standard(double arr[],int count,double average)
{
    double standard = 0;
    for(int i = 0;i<count;i++)
        standard += (arr[i]-average)*(arr[i]-average);
   return  standard = pow(standard/(count-1),1.0/2);
}
