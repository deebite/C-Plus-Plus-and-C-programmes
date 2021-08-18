#include<stdio.h>
int main()
{
	int hours , i=1, salary ;
	while(i<=10)
	{
		printf(" Enter the hours employee works above 40 hours: ");
		scanf("%d",&hours);
		
		
			salary = 40000+(12*hours);
			printf("%d\n",salary);
		
		i++;
	}
	return 0;
		
	
}
