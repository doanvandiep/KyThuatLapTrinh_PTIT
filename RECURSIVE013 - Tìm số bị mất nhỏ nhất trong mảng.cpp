#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int t; cin >> t;

	while(t--)
	{
		string s;
		cin>> s;
		if(s=="")
		{
			cout <<"0" << endl;
		}else{
			memset(a,0,100001);
			string temp="";
			for(char c:s)
			{
			if(c==','){
				a[stoi(temp)]++;
				temp="";
			}else{
				temp+=c;
			}
			}
			a[stoi(temp)]++;
			for(int i=0;i<100001;i++)
			{
				if(a[i]==0){
					cout << i << endl;
					break;
				}
			}
	}
}
}