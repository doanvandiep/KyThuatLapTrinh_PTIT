#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long du(string a,int mod){
	long long r=0;
	for(int i=0;i<a.size();i++){
		r=r*10+a[i]-'0';
		r%=mod;
	}
	return r;
}
long long pow(long long a, long long b){
	long long res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		b/=2;
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		long long x=du(a,mod);
		long long y=du(b,mod-1);
		cout << pow(x,y) << endl;
	}
}