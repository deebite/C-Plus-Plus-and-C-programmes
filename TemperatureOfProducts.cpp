#include<iostream>
using namespace std;
int main()
{
	int numOfProducts,arr[numOfProducts],sum=0;
	cin>>numOfProducts;
	for(int i=0;i<numOfProducts;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<numOfProducts;i++)
	{
		if(arr[i]<0)
		{
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
