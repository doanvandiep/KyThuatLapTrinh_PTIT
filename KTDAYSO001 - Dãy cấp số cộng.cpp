#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(n<3) cout << "YES" << endl;
		else {
			long long d=a[1]-a[0];
			int kt=1;
		for(int i=2;i<n;i++){
			if((a[i]-a[i-1])!=d){
				kt=0;
				break;
			}
		}
		if(kt==1) cout << "YES\n";
		else cout << "NO\n";
		}
	}
	return 0;
}