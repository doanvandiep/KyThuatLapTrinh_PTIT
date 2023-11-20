#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll sumModule(ll a,ll x)
{
    ll result=1;
    while(x>0)
    {
    	if(x%2==1)
    	{
    		result=(result*a)%29;
		}
		a=(a*a)%29;
		x/=2;	
	}
	return result;
}
ll Module(ll a,ll b)
{
	return a*sumModule(b,27); // a/b % songto = a*b^(songto-2)%29
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		ll x;
		cin >> x;
		ll a=sumModule(2,2*x+1)-1;
		if(a<0) a+=29;
		ll b=Module(a,1);
		ll c=sumModule(3,x+1)-1;
		if(c<0) c+=29;
		ll d=Module(c,2);
		ll e=sumModule(167,x+1)-1;
		if(e<0) e+=29;
		ll f=Module(e,166);
		cout << (b*d*f)%29 << endl;
	}
}
