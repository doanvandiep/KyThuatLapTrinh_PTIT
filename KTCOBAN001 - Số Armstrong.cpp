#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll armstrong(ll n)
{
	string s;
	s=to_string(n);
	ll sum=0;
	ll sum1=n;
	int count = s.size();
	while(n>0)
	{
	sum+=pow(n%10,count);
	n/=10;	
	}
	return sum==sum1;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		if(armstrong(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}
