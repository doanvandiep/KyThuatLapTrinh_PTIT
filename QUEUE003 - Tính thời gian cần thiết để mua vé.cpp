#include<bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<int> q;
        int n=tickets.size();
        for(int i=0;i<n;i++) q.push(i);

        while(true)
        {
            if(tickets[k]==0) break;
            int curr=q.front();
            time++;
            tickets[curr]--;
            q.pop();
            if(tickets[curr]!=0) 
            {
                q.push(curr);
            }
        }
        return time;
    }

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		vector<int> v;
		string temp="";
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
		cout << timeRequiredToBuy(v,k) << endl;
	}
	return 0;
}