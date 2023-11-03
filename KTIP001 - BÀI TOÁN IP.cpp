#include<bits/stdc++.h>
using namespace std;
 int  genIp(string &s) {
        vector<string> ans;
        int N = s.length();

        for(int i=0; i<N-3; ++i){
            for(int j=i+1; j<N-2; ++j){
                for(int k=j+1; k<N-1; ++k){

                    string A = s.substr(0, i+1);
                    string B = s.substr(i+1, j-i);
                    string C = s.substr(j+1, k-j);
                    string D = s.substr(k+1, N-k);

                    int p = A.length();
                    int q = B.length();
                    int r = C.length();
                    int t = D.length();

                    if((A[0] == '0' && p > 1) || (B[0] == '0' && q > 1) || (C[0] == '0' && r > 1) || (D[0] == '0' && t > 1)) continue;
                    if((A[0] != '0' && p > 3) || (B[0] != '0' && q > 3) || (C[0] != '0' && r > 3) || (D[0] != '0' && t > 3)) continue;
                    if(p <= 0 || q <= 0 || r <= 0 || t <= 0) continue;
                    if(stoi(A) > 255 || stoi(B) > 255 || stoi(C) > 255 || stoi(D) > 255) continue;

                    string ip = A + '.' + B + '.' + C + '.' + D;
                    ans.push_back(ip);
                }
            }
        }
        return ans.size();
    }
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<genIp(s)<<"\n";
	}
}