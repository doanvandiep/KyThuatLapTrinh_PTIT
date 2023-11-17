#include<bits/stdc++.h>
using namespace std;
//DOANVANDIEP
string deCode(string s,int k)
{
	long long length=0;
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			length*=s[i]-'0';
		}else{
			length++;
		}
	}
	for(int i=s.size()-1;i>=0;i--)
	{
		if(isdigit(s[i]))
		{
			length/=s[i]-'0';
			k%=length;
		}else
		{
			if(k==0||length==k) return string(1,s[i]);
			length--;
		}
	}
	return "";
}
int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		int k;
		cin >> k;
		cout << deCode(s,k) <<"\n";
	}
	return 0;
}