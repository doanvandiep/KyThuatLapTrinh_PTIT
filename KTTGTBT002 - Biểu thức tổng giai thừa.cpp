#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; 
		float x;
		cin>>n>>x;
		float s=1,sum=0;
		for(int k=1;k<=n;k++){
			s*=x/k;
			sum+=s;
		}
		cout<<setprecision(3)<<fixed<<sum<<" "<<endl;
	}
	return 0;
}