#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll unsigned long long int
ll Fibonanci(ll n)
{
	if(n<=1) return n;
	else return (Fibonanci(n-1)+Fibonanci(n-2))%mod;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << Fibonanci(n) << endl;
	}
	return 0;
}