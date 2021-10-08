#include <iostream>
using namespace std;
int main()
{
    int n,candle[n],sum=0;
    cout<<"Enter the candle ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cout<<"units of candle "<<i<<" :";
        cin>>candle[i];
    }
    int max=candle[0];
    for(int i=0;i<n;i++)
    {
        
        if(candle[i]>=max) 
        {
            sum++;
            max=candle[i];
            
        }
    }
    cout<<sum;
    return 0;
}
