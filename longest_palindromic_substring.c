#include <stdio.h>
int expand(char str[],int n ,int left,int right);
int main()
{
    char str[1002];
    fgets(str,sizeof(str),stdin);
    int n = 0;
    for(n=0;str[n] !='\n'&&str[n] !='\0';n++);
    int maxLen = 0;
    for(int i = 0;i<n;i++)
    {
        int odd = expand(str,n,i,i);
        int even = expand(str,n,i,i+1);
        maxLen = odd > maxLen? odd:maxLen;
        maxLen = even>maxLen? even:maxLen;
    }
    printf("%d\n",maxLen);
    return 0;
}
int expand(char str[],int n,int left, int right)
{
    int len = 0;
    for(;right<n&&left>=0&&str[left]==str[right];left--,right++)
    {
        len = right - left + 1;
    }
    return len;
}
// // int maxLen(char str[],int n,int i);
// int maxLen_(char str[],int n,int i);
// int main()
// {
//     char str[1002];
//     fgets(str,sizeof(str),stdin);
//     int n = 0;
//     for(n = 0 ; str[n] !='\n'&&str[n] !='\0';n++);
//     int maxLen1 = 0;
//     int maxLen2 = 0;
//     for (int i = 0;i < n ;i++)
//     {
//         if (maxLen(str,n,i)>maxLen1)
//         maxLen1 = maxLen(str,n,i);
//     }
//     for (int i = 0;i< n-1;i++)
//     {
//         if (maxLen_(str,n,i)>maxLen2)
//         maxLen2 = maxLen_(str,n,i);
//     }
//     if(maxLen1>maxLen2)
//     printf("%d",maxLen1);
//     else
//     printf("%d",maxLen2);
//     return 0;
// }
// int maxLen(char str[],int n,int i)
// {
//     int len = 0;
//     for (int left = i,right = i;left >= 0&&right<n&&str[left]==str[right];left--,right++)
//     {
//         len = right - left + 1;
//     }
//     return len;
// }
// int maxLen_(char str[],int n,int i)
// {
//     int len = 0;
//     for (int left = i,right = i +1;left>=0&&right<n&&str[left]==str[right];left--,right++)
//     {
//         len = right - left + 1;
//     }
//     return len;
// }

