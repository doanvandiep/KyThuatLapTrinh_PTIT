#include<bits/stdc++.h>
using namespace std;
string mulString(string s1,string s2)
{
	int len1=s1.size();
	int len2=s2.size();
	vector<int> result(len1+len2,0);
	for(int i=len1-1;i>=0;i--)
	{
		for(int j=len2-1;j>=0;j--)
		{
			int product=(s1[i]-'0')*(s2[j]-'0');
			int sum=product+result[i+j+1];
			result[i+j+1]=sum%10;
			result[i+j]+=sum/10;
		}
	}
	string ans;
	for(int x:result)
	{
		if(!(ans.empty()&&x==0))
		{
			ans+=to_string(x);
		}
	}
	return ans.empty()?"0":ans;
}
string result(int a,int b)
{
	string product="1";
	for(int i=a;i<=b;i++)
	{
		string mul=to_string(i);
		product=mulString(product,mul);
	}
	return product;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int c=n-k+1;
		cout << result(c,n) << endl;
	}
	return 0;
}
	
