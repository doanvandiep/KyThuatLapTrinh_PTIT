#include <iostream>

#define MOD 1000000007
using namespace std;
long long luy_thua(long long a, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        n /= 2;
    }
    return result;
}

int main() {
    long t; cin >> t;
	while(t--){
		long long a,n;
		cin >> a >> n;
		cout << luy_thua(a,n) << endl;
	} 
    return 0;
}