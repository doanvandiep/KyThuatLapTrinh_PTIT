#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		vector<int> v;
		string temp="";
		for(char c:s1)
		{
			if(c==',')
			{
				v.push_back(stoi(temp));
				temp="";
			}else{
				temp+=c;
			}
		}
		int value=stoi(temp);
		v.push_back(value);
		vector<int> q;
		string temp1="";
		for(char c:s2)
		{
			if(c==',')
			{
				q.push_back(stoi(temp1));
				temp1="";
			}else{
				temp1+=c;
			}
		}
		int value1=stoi(temp1);
		q.push_back(value1);
		vector<int>v3;
		for(int x:v){
        	if(count(q.begin(),q.end(),x)!=0&&count(v3.begin(),v3.end(),x)==0){
        		v3.push_back(x);
			}
		}
     if(!v3.empty())
     {
     	for(int i=0;i<v3.size()-1;i++)
     	{
     		cout << v3[i] <<",";
		 }
		 cout << v3[v3.size()-1] << endl;
	 }else{
	 	cout << endl;
	 }
}

}