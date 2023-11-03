#include<bits/stdc++.h>
using namespace std;
int main() { 
int t; cin >> t;
while(t--){
	string n; 
cin >> n; 
n.erase(remove(n.begin(), n.end(), '-'), n.end()); 
cout << n.length() << endl;
}
return 0;
 }