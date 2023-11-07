#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		geltine(cin,s);
		int l=0;
		int r=s.size()-1;
		while(l<=r)
		{
			if(s[l]!=s[r]){
				cout <<"1" << endl;
				break;
			}else{
				l++;
				r--;
			}
		}
	}
	return 0;
}