#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll dem(ll n){
	ll d=0;
	for(ll i=5;i<=n;i*=5){
		d+=n/i;
	}
	return d;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<dem(n)<<"\n";
	}
}