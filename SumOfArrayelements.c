#include<stdio.h>
int main()
{
	long long int n,arr[n],sum=0;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		sum+=arr[i];
		
	}
	printf("%lld",sum);
	return 0;
}
