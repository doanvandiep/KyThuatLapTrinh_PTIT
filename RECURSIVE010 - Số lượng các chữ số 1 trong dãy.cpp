#include <bits/stdc++.h>
using namespace std;
int solve(int A) {
    int ans = 0;
    for (int i = 1; i <= A; i *= 10) {
        // i là kích thước của cụm.
        // temp là khoảng thời gian.
        int temp = i * 10;
        // Phần này sẽ giải quyết phần cụm cuối cùng thừa.
        ans += ((A/temp) * i) + min(max(A%temp-i+1, 0), i);
        // vi du xet so 1 o hang chuc
        // 15%10-10+1=6, 10-15 có 6 so 1 o hang chuc
    }
    return ans;
}
int main()
{
  int t; cin >> t;
  while(t--)
  {
  	int n;
  	cin >> n;
  	cout << solve(n) << endl;
  }
    return 0;
}