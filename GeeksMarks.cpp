#include<iostream>
using namespace std;
int main()
{
	int T,N,X,arr[N];
	cout<<"Enter the test case: ";
	cin>>T;
	for(int i=0; i< T; i++)
	{
		cout<<"\n";
		int sum=0;
		cout<<" Two Space Separated interger N and X: ";
		cin>>N>>X;
		for(int k=0;k<N;k++)
		{
			cout<<"Enter the positive integer:";
			cin>>arr[k];
		}
		for(int k=0;k<N;k++)
		{
			if(arr[k]>X)
			{
				sum++;
			
			}
		}
		cout<<sum;
	}
	
	return 0;
}
