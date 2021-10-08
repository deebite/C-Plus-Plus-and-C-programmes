#include<iostream>
using namespace std;
int main()
{
    int num,arr[9],i;
    cout<<"numbers you wants to print: ";
    cin >>num;
    for(i=1;i<=num;i++)
    {
        cout<<"Enter the numbers: ";
        cin>>arr[i];
    }
    for(int j =0;j<=num;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;

}