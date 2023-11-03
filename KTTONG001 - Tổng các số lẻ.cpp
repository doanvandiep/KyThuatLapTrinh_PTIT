#include<bits/stdc++.h>
using namespace std;
long tinh_tong(long l,long r){
	if(l%2==0){
		l+=1;
	}
	if(r%2==0){
		r-=1;
	}
	return (l+r)*(((r-l)/2)+1)/2;
}
int main(){
	int t; cin >> t;
	while(t--){
		long l,r;
		cin >> l >> r;
		cout << tinh_tong(l,r)<< endl;
	}
}