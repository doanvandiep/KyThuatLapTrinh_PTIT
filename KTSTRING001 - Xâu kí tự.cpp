#include<bits/stdc++.h>
using namespace std;
int strStr(string c, string p) {
        return p.find(c);
    }
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string s1="";
		string s2="";
		int i=9;
		while(s[i]!='"'){
			s1+=s[i];
			i++;
		}
		int j=i+13;
		while(s[j]!='"'){
			s2+=s[j];
			j++;
		}
		cout<<strStr(s1,s2)<<"\n";
	}
}