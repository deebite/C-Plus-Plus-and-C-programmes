#include<stdio.h>
int main()
{
	int user, sum=0;
	while(sum!=20)
	{
		printf("Enter the matchstick you want to select(which should be greater then 1 and less than 4): ");
		scanf("%d",&user);
		if(user<1 || user>4)
			{
				printf(" Invalid Choice \n");
		    }
		    
			
	
		if(user>=1 || user<=4)
		 	{	
				printf(" number of matchstick computer selected is %d\n",(5-user));
			
		 	}
		sum=sum+5;
		printf(" The number matchsticks we left with is %d\n", 21-sum);
		
	}
	printf(" The last one matchstick is left which you have select so you lose the Game\n");
	return 0;
}
