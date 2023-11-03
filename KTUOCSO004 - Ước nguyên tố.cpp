#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int kt=1;
	    for(int i=2;i<=sqrt(n);i++){
	    	if(n%i==0){
	    		int cnt=0;

	    		while(n%i==0){
	    			n/=i;
	    			cnt ++;
				}
				if(cnt>1) {
					cout << "YES" << endl;
					kt=0;
					break;
	        }
				
			}
		}
		if(kt==1) cout << "NO" << endl;
		
	}
}