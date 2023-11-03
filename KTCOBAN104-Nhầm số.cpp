#include<bits/stdc++.h>
using namespace std;
int bien_doi1(int a){
     string s=to_string(a);
     string ans="";
     for(char c:s){
     	if(c=='3'){
     		ans+='5';
		 }
		 else{
		 	ans+=c;
		 }
	 }
	 return stoi(ans);
}
int bien_doi2(int a){
     string s=to_string(a);
     string ans="";
     for(char c:s){
     	if(c=='5'){
     		ans+='3';
		 }
		 else{
		 	ans+=c;
		 }
	 }
	 return stoi(ans);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int a1=bien_doi2(a);
		int b1=bien_doi2(b);
		int a2=bien_doi1(a);
		int b2=bien_doi1(b);
		cout<<a1+b1<<" "<<a2+b2<<"\n";
	}
}