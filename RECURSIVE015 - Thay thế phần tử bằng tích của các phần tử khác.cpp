#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		vector<int> v;
		string temp="";
		for(char c:s)
		{
			if(c==',')
			{
				int value=stoi(temp);
				v.push_back(value);
				temp="";
			}else{
				temp+=c;
			}
		}
		int value=stoi(temp);
		v.push_back(value);
		vector<int> q=productExceptSelf(v);
		for(int i=0;i<q.size()-1;i++)
		{
			cout << q[i]<<",";
		}
		cout << q[q.size()-1]<<"\n";
	}
	return 0;
}