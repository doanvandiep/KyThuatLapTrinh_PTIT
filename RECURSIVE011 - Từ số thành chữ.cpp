#include<bits/stdc++.h>
using namespace std;
string one[20]={""," One"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"," Nine"," Ten"," Eleven"," Twelve"," Thirteen"," Fourteen"," Fifteen"," Sixteen"," Seventeen"," Eighteen"," Nineteen"};
string ten[10]={"", " Ten", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety"};
string thousand[4]={"", " Thousand", " Million", " Billion"};
string numberstoWord(int n)
{
	if(n<20) return one[n];
	if(n<100) return ten[n/10]+one[n%10];
	if(n<1000) return one[n/100]+" Hundred"+numberstoWord(n%100);
	for(int i=3;i>=0;i--)
	{
		if(n>=pow(1000,i)){
			return numberstoWord(n/(int)pow(1000,i))+thousand[i]+numberstoWord(n%(int)pow(1000,i));
		}
	}
}
string result(int num)
{
	if(num==0) return "Zero";
	else return numberstoWord(num).substr(1);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << result(n) <<"\n";
	}
	return 0;
}