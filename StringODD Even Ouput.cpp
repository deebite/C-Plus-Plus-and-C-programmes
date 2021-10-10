#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str,s1,s2;
	getline(cin,str);
	cout<<str<<"\n";
	
	cout<<str.size()<<"\n";
	for(int i =0;i<str.size();i++)
	{
		if(i%2==0)
		{
			s1+=str[i];
		}
		else
		{
			s2+=str[i];
		}
	}
	cout<<s1<<"\n"<<s2;
	return 0;
}
