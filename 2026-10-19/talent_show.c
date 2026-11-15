#include <stdio.h>
int main()
{
    int pa, pb, x, y, z;
    scanf("%d %d",&pa,&pb);
    scanf("%d %d %d",&x,&y,&z);
    int voteB = x + y + z;
    int voteA = 3 -voteB;
    if ( (pa>pb && voteA >=1) || voteA ==3)
    {
        printf("The winner is a: %d + %d",pa,voteA);
    }
    else
    {
        printf("The winner is b: %d + %d",pb,voteB);
    }
    return 0;
}