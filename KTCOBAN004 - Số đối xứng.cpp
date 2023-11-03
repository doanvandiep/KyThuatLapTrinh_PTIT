#include <iostream>
#include <cmath>

using namespace std;

long long countPalindromes(long long k) {
    if (k == 1) {
        return 9;
    }
    else if (k % 2 == 0) {
        return 9 * pow(10, k/2 - 1);
    }
    else {
        return 9 * pow(10, (k-1)/2);
    }
}

int main() {
    int t;cin>> t;
    while(t--){
    	long long n;
    	cin >> n;
    	cout << countPalindromes(n) << endl;
	}
}