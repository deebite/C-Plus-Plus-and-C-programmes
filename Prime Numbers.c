#include<stdio.h>
int main()
{
	int num ,i ;
	printf("enter the no. ");
	scanf("%d",&num);
	
	i=2;
	while(i<=num-1)
	{
		if (num%i==0)
		{
			printf("Not a prime no. ");
			break;
		}
		i++;
	}
	
	if (num==i)
		printf("No. is prime");
}
