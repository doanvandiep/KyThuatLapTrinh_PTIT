#include<bits/stdc++.h>
using namespace std;
int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,flip=0;
        for(int i=0;i<n;i++){
            if(flip%2==nums[i]){
                if(i>n-k) return -1;
                ans++;
                flip++;
                nums[i]-=2;
                
            }
            if(i>=k-1 && nums[i-k+1]<0){
                flip++;
                nums[i-k+1]+=2;
            }
        }
        return ans;
}
int main(){
	int t; cin >> t;
	while(t--){
	string s;
	cin >> s;
	int k; cin >> k;
	string temp="";
	vector<int> v;
	for(char c:s){
		if(c==','){
			int value=stoi(temp);
			v.push_back(value);
			temp="";
		}else{
			temp+=c;
		}
	}
	int value=stoi(temp);
	v.push_back(value);
	cout <<	minKBitFlips(v,k) << endl;
	}
	return 0;
}