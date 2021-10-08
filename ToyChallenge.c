
#include <stdio.h>
int main()
{
    int boxes,space,toys,capacity,sum=0;
    printf(" Enter the number of boxes: ");
    scanf("%d",&boxes);
    for (int i = 1; i <= boxes; i++)
    {
        scanf( "%d%d",&toys,&space);
        capacity= space-toys;
        if(capacity>=2)
        {
            sum+=1;
        }
        
    }
    printf("No. of boxes having space is %d",sum);
    return 0;
    
}