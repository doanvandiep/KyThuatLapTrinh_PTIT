#include<bits/stdc++.h>
using namespace std;
#define ll long long
string add(string a,string b){
	string ans="";
	while(a.size()<b.size())a="0"+a;
	while(a.size()>b.size())b="0"+b;
	int l=a.size();
	int nho=0;
	for(int i=l-1;i>=0;i--){
		int so=a[i]-'0'+b[i]-'0'+nho;
		nho=so/10;
		ans=(char)(so%10+'0')+ans;
	}
	if(nho>0){
		ans="1"+ans;
	}
	return ans;
}
int main(){
     int t;
     cin>>t;
     while(t--){

     string a,b;
     cin>>a>>b;
     cout<<add(a,b)<<"\n";
	 }
   return 0;
}