#include<iostream>
using namespace std;
int solve(double meal_cost,int tip_percent,int tax_percent)
{
    float tip,tax;
    int total_cost;
    tip=(meal_cost/100)*tip_percent;
    tax=(tax_percent/100)*tip_percent;
    total_cost=meal_cost+tip+tax;
    return total_cost;
    
}
int main()
{
	double a;
    int b,c,d;
    cin>>a>>b>>c;
    d=solve(a, b, c);
    cout<<d;
    
}
