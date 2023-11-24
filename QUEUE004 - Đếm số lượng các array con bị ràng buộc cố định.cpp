#include<bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> nums, int minK, int maxK) {
        long long int ans = 0;
        int lb=-1,lmn=-1,lmx=-1,i,n=nums.size();
        for(i =0; i<n;i++){
            if(nums[i]>=minK&&nums[i]<=maxK){
                lmn = (nums[i]==minK)?i:lmn;
                lmx = (nums[i]==maxK)?i:lmx;
                ans += max(0,min(lmn,lmx)-lb);
            }else{
                lb = i,lmn=-1,lmx=-1;
            }
        }
        return ans;
  }
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		cin >> s;
		int n,k;
		cin >> n >> k;
		 vector<int> v;
        string temp = "";
        for (char a : s) {
            if (a == ',') {
                int value = stoi(temp);
                v.push_back(value);
                temp = "";
            } else {
                temp += a;
            }
        }
        int value = stoi(temp);
        v.push_back(value);
        cout << countSubarrays(v,n,k) << endl;
	}
	return 0;
}