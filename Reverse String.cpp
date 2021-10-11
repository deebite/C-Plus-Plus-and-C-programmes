#include<bits/stdc++.h>
using namespace std;
int main()
{
	string che;
	int len;
	getline(cin,che);
	len=che.length();
	cout<<len<<"\n";
	reverse(che.begin(), che.end());
	cout<<che;
	return 0;
}
