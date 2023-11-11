#include<bits/stdc++.h>
using namespace std;
string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;
}
int main(){
	int t; cin >> t;
	cin.ignore() ;
	while(t--)
	{
		string s;
		getline(cin,s);
		cout << removeOuterParentheses(s) << endl;
	}
	return 0;
}