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
		ll a; cin >> a;
		if(a==1) cout << "0" << endl;
		else cout << tinh(a) << endl;
	}
}