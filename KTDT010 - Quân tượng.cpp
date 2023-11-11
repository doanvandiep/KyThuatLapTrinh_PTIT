#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n<1) return 0;
		else if(n==1) cout << "1" << endl;
		else{
			cout << 2*(n-1) << endl;
		}
	}
	return 0;
}