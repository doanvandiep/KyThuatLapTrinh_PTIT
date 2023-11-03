#include <iostream>
#include <vector>

using namespace std;

int tim(long long n) {
    int count = 0;

    // Tìm tất cả các ước số nguyên tố và đếm số lượng ước số nguyên tố
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            if(n%i!=0) count ++;
        }
    }

    // Nếu n còn lại sau khi đã chia hết cho tất cả các ước số nguyên tố nhỏ hơn căn n, nghĩa là n là một số nguyên tố
    if (n > 1) {
        count++;
    }

    return count;
}

int main() {
    int t; cin >> t;
    while(t--){
    	long long n; cin >> n;
    	cout << tim(n) << endl;
	}
    return 0;
}