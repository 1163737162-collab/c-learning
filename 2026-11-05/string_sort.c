#include <stdio.h>
#include <string.h>
int main ()
{
    char str[5][80];
    for (int i = 0;i<5;i++)
    {
        scanf("%70s",str[i]);
    }
    for (int i = 0;i < 4;i++)
        {
            for(int j = 0;j < 4-i;j++)
            {
                if (strcmp(str[j],str[j+1])>0)
                {
                    char temp[80];
                    strcpy(temp,str[j]);
                    strcpy(str[j],str[j+1]);
                    strcpy(str[j+1],temp);
                }
                
            }
        }
        printf("小鱼要开心:\n");
        for (int i = 0;i < 5;i++)
        {
            printf("%s\n",str[i]);
        }
        return 0;
}
//  int main ()
// {
//     char str[5][80];
//     for (int i = 0;i < 5;i++)
//     {
//         scanf("%79s",str[i]);
//     }
//     for (int i = 0 ; i < 4; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1;j < 5;j++)
//         {
//             if(strcmp(str[minIndex],str[j])>0)
//             minIndex = j;
//         }
//         char temp[80];
//         strcpy(temp,str[minIndex]);
//         strcpy(str[minIndex],str[i]);
//         strcpy(str[i],temp);
//     }
//     printf("After sorted:\n");
//     for (int i = 0;i < 5;i++)
//     {
//         printf("%s\n",str[i]);
//     }

//     return 0;
// }
