#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    if(n>1) return true;
}

bool isFullPrime(int n) {
    while (n > 0) {
        int digit = n % 10;
        
        if (!isPrime(digit)) {
            return false;
        }
        
        n /= 10;
    }
    
    return true;
}

int countFullPrimes(int n) {
    int count = 0;
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if(isFullPrime(i)){
            	count ++;
			}
        }
    }
    
    return count;
}

int main() {
    int t; cin >> t;
    while ( t-- ){
    	int n; cin >> n;
    	cout << countFullPrimes(n) << endl;
	}
    return 0;
}