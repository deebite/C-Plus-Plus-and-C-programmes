#include<stdio.h>
int main()
{
	int num, fact=1,i=1;
	printf(" enter The number: ");
	scanf("%d",&num);
	while(i<=num)
	{
		fact = fact*i;
		i++;
	}
	printf("The factorial of number is: %d",fact);
	return 0;
}
