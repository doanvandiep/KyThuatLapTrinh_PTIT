#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int X,Y,M;
		cin >> X >> Y >> M;
		int socola=M/X+(M/X-1)/(Y-1);
		cout << socola << endl;
	}
	return 0;
}