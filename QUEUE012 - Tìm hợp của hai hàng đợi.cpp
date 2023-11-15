#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  
    while (t--) {
        string a,b;
		cin >> a >> b;
		vector<int> v;
		string temp="";
		for(char c:a)
		{
		if(c==','){
		if(count(v.begin(),v.end(),stoi(temp))==0)v.push_back(stoi(temp));
		temp="";	
		}else{
			temp+=c;
		}		
 	    }
 	    if(count(v.begin(),v.end(),stoi(temp))==0)v.push_back(stoi(temp));
 	    vector<int> v1;
		string temp1="";
		for(char c:b)
		{
		if(c==','){
		v1.push_back(stoi(temp1));	
		temp1="";
		}else{
			temp1+=c;
		}		
 	    }
 	    v1.push_back(stoi(temp1));

        for (int x : v1) {
            if (count(v.begin(), v.end(), x) == 0) {
                v.push_back(x);
            }
        }
    for(int i=0;i<v.size()-1;i++)
    {
    	cout << v[i] <<",";
	}
	cout << v[v.size()-1]<< endl;
    }

    return 0;
}
