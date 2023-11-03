#include<bits/stdc++.h>

using namespace std;

int solve(string s){
	string a="";
	if(s[8]=='?' && s[9]=='?'){
		s[8]='2';
		s[9]='3';
	}else if(s[8]=='?' && s[9]!='?'){
		if(s[9]<='3'){
			s[8]='2';
		}else{
			s[8]='1';
		}
	}else if(s[8]!='?' && s[9]=='?') {
		if(s[8]=='2'){
			s[9]='3';
		}else{
			s[9]='9';
		}
	}
	if(s[11]=='?') s[11]='5';
	if(s[12]=='?') s[12]='9';
	
	a=a+s[7]+s[8]+s[9]+s[10]+s[11]+s[12]+s[13];
	cout<<a;
	cout<<endl;
	
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		
		solve(s);
	}
}