#include<bits/stdc++.h>
using namespace std;

string addString(string s1, string s2) {
    while (s1.size() > s2.size()) s2 = "0"+s2;
    while (s1.size() < s2.size()) s1 = "0"+s1;
    int len = s1.size();
    string ans = "";
    int carry = 0;
    for (int i = len - 1; i >= 0; i--) {
        int product = s1[i] - '0' + s2[i] - '0' + carry;
        carry = product / 10;
        ans = to_string(product % 10) + ans;
    }
    if (carry > 0) ans ="1"+ans;
    return ans;
}

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
int main()
{
	ifstream ip("bignumber.in");
    ofstream of("bignumber.out");
     int t;
     ip>>t;
     string line;
     getline(ip, line);
     while(getline(ip,line)){
         string s=line;
     	string s1="";
     	string s2="";
     	char c;
     	int j;
     	for(int i=0;i<s.size();i++){
     		if(s[i]>='0'&&s[i]<='9'){
     			s1+=s[i];
		}
		else if(s[i]=='+'||s[i]=='*'){
			j=i;
			c=s[i];
			break;
		}
		 }
		 for(int i=j+1;i<s.size();i++){
		 	if(s[i]>='0'&&s[i]<='9')
		 	s2+=s[i];
		 }
		string s3;
		if(c=='+'){
			s3=addString(s1,s2);
		}
		else{
			s3=mulString(s1,s2);
		}
		 of<<s3<<"\n";
	 }
	return 0;
}