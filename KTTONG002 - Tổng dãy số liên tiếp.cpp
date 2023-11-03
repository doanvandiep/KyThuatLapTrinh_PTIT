#include<bits/stdc++.h>
using namespace std;
long long tinh_tong(long l, long r){
	return (l+r)*(r-l+1)/2;
}
int main(){
	int t; cin >> t;
	while(t--){
		long l,r;
		cin >> l >> r;
		cout << tinh_tong(l,r) << endl;
	}
}