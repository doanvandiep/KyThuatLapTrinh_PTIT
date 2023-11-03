#include<bits/stdc++.h>
using namespace std;
int p[1000001];
void sang_so(){
	for(int i=0;i<=1000000;i++){
		p[i]=1;
	}
	p[0]=p[1]=0;
	for(int i=2;i<=1000;i++){
		for(int j=i*i;j<=1000000;j+=i){
			p[j]=0;
		}
	}
}
int main(){
	sang_so();
	int t; cin >> t;
	while(t--){
		int l,r;
		int cnt=0;
		cin >> l >> r;
		for(int i=l;i<=r;i++){
			if(p[i]==1) cnt++;
		}
		cout << cnt << endl;
	}
}