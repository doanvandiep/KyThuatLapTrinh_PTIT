#include <bits/stdc++.h>
using namespace std;

void removestar(string s) {
    stack<char> stk;

    for (char c : s) {
        if (!stk.empty() && c == '*') {
            stk.pop();
        } else if (c != '*') {
            stk.push(c);
        }
    }

    vector<char> v;
    while (!stk.empty()) {
        v.push_back(stk.top());
        stk.pop();
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Đọc ký tự xuống dòng sau t

    while (t--) {
        string s;
        getline(cin, s);
        removestar(s);
    }

    return 0;
}