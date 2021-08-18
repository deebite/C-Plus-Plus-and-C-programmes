#include<stdio.h>
int main()
{
	int i=0,positive=0,negative=0,zeros=0,num,nos;
	printf("How many numbers you want to print: ");
	scanf("%d",&num);
	while(i++<num)
	{
		printf("Enter the numbers: ");
		scanf("%d",&nos);
		if(nos>0)
		{
			positive+=1;
			continue;
		}
		if(nos<0)
		{
			negative+=1;
			continue;
		}
		if(nos==0)
		{
			zeros+=1;
			continue;
		}
		
		
	}
	printf("No. of positives : %d\nNo. of negatives : %d\nNo. of zeros : %d\n",positive ,negative, zeros);
	return 0;
}
