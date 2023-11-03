#include<bits/stdc++.h>

#define ll long  long
using namespace std;

int k;

bool check(ll a){
	int count=0;
	while(a>9){
		int x=a%10;
		if(x==0 || x==1 || x==4 || x==9){
			count ++;
		}
		a/=10;
	}
	if(a==0 || a==1 || a==4 || a==9) count++;
	if(count==k) return true;
	return false;
}

void solve(){
	ll a=pow(10,k-1);
	ll b=pow(10,k)-1;
	ll x=sqrt(a), y=sqrt(b);
	if(x*x==a) x++; // loai tru truong hop lam tron xuong t/m
	if(k%2==1){ // vd 1,100,10000... t/m luon
		cout<<a<<endl;
		return ;
	}else{
		for(ll i=x;i<=y;i++){
			if(check(i*i)==true){
				cout<<i*i<<endl;
				return ;
			}
		}
	}
	cout<<-1<<endl;	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>k;
		solve();
	}
	return 0;
}