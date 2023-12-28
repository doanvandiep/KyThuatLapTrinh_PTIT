#include <bits/stdc++.h>
#define ll long long
// cách tính số tập con 
// tính số các phần tử khác nhau
// số lần xuất hiện của từng phần tử
// (số lần x+1)*(số lần y+1)*... (số các số x,y,.. là số lần xuất hiện của các phần tử khác nhau)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll a[100005], b[100005], c = 0;
        map<ll, int> cnt;

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            cnt[a[i]] = 0;
        }

        sort(a + 1, a + n + 1);

        for (int i = 1; i <= n; ++i) {
            cnt[a[i]]++;
            if (cnt[a[i]] == 1)
                b[++c] = a[i];
        }

        ll ans = 1;
        for (int i = 1; i <= c; ++i)
            ans = (ans * (cnt[b[i]] + 1)) % 1000000007;

        cout << (ans - 1 + 1000000007) % 1000000007 << " ";
        c = 0;

        for (int i = 1; i <= n; ++i)
            if (a[i] >= 0)
                b[++c] = a[i];

        if (c > 1) {
            cout << "[" << b[1] << ", ";
            for (int i = 2; i <= c - 1; ++i)
                cout << b[i] << ", ";
            cout << b[c] << "]";
        } else if (c == 1) {
            cout << "[" << b[1] << "]";
        } else {
            cout << "[" << a[n] << "]";
        }

        cout << '\n';
    }

    return 0;
}
