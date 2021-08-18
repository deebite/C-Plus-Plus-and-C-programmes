#include<stdio.h>
int main()
{
	int num, originalNum, remainder, result=0;
	printf("Enter the three digit number: ");
	scanf("%d",&num);
	originalNum = num;
	while(originalNum!=0)
	{
		remainder = originalNum%10;
		result+=remainder*remainder*remainder;
		originalNum/=10;
	}
	if(result==num)
		printf("Its a Armstrong No.");
	
	else
		printf("Its not an armstrong no.");
	return 0;
}
