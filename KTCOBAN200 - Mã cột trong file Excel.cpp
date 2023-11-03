#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream ip("input.txt");
	ofstream of("output.txt");
	long long  n;
	while (ip >> n)
	{
		string result ="";
		while(n>0){
			n-=1;
			char temp='A'+(n%26);
			result=temp + result;
			n/=26;
		}
		of << result << endl;
	}
	return 0;
}