#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll a[20];
void giai_thua(){
	a[0]=1;
	for(int i=1;i<20;i++){
		a[i]=a[i-1]*(i+1);
	}
}
int main(){
	giai_thua();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
	    float sum=0;
	    for(int i=1;i<=n;i++){
	    	float k=1.0/(i+1);
	    	sum=pow(sum+a[i-1],k);
		}
		cout << fixed << setprecision(3) << sum <<" "<< "\n";		
	}
	return 0;
}