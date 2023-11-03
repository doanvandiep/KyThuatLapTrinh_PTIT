#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll tinh(ll n){
	ll s=1;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			if(i!=n/i){
				s+=i+n/i;
			}
			else{
				s+=i;
			}
		}
	}
	return s;
}
int  main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(tinh(a)==b&&tinh(b)==a){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}