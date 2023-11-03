#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum_of_divisors(ll n) {
    ll sum = 1;
    ll original_n = n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            sum *= (pow(i, count + 1) - 1) / (i - 1);
        }
    }

    if (n != 1) {
        sum *= (n + 1);
    }

    return sum == original_n * 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        if (sum_of_divisors(n)) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
