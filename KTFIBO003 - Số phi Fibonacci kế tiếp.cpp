#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll a[43];
void nonFibo()
{
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=43;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		nonFibo();
		for(int i=0;i<=43;i++)
		{
			if(a[i]>n)
			{
				if(a[i]-n==1)
				{
					cout << a[i]+1 << "\n";
					break;
				}else{
					cout << n+1 << "\n";
					break;
				}
			}
		}
	}
	return 0;
}