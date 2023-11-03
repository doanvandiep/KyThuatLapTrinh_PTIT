#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

string s;
int t;
unsigned long long int n;

int main()
{   
    cin.tie(0) -> sync_with_stdio;
    
    cin >> t;
    while(t--){
        cin>>n;
        s="";
        while(n){
            s+=n%2+'0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        cout<<s<<'\n';
    }
    
    return 0;
}