#include<bits/stdc++.h>
using namespace std;
 int calculate(string s) {
        int sum=0;
        int sign=1;
        stack<int> stac;
        for (int i=0;i<s.length();i++){
            char ch=s[i];
            if (isdigit(ch)){
                int val=0;
                while(i<s.length() && isdigit(s[i])){
                    val=val*10+(s[i]-'0');
                    i++;
                }
                i--;
                sum=sum+sign*val;
                sign=1;
            }else if (ch=='('){
                stac.push(sum);
                stac.push(sign);
                sum=0;
                sign=1;
            }
            else if (ch==')'){
                sum=stac.top()*sum;
                stac.pop();
                sum=sum+stac.top();
                stac.pop();
            }
            else if (ch=='-'){
                sign*=-1;
            }
        }
        return sum ;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << calculate(s) << endl;
	}
	return 0;
}