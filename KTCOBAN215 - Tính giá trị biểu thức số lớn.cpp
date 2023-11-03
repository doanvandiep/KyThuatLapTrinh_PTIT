#include <iostream>
#include <string>
using namespace std;

string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = temp / 10;
            result[i + j + 1] = (temp % 10) + '0';
        }
        result[i] += carry;
    }
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    }

    return "0";
}

string calculateProduct(int a, int b) {
    string product = "1";
    for (int i = a; i <= b; i++) {
        string multiplier = to_string(i);
        product = multiply(product, multiplier);
    }
    return product;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		 int n,k;  
        cin>>n>>k;
        if(n==k){
        	cout<<1<<"\n";
		}
		else{
        int c=n-k+1;
    string product = calculateProduct(c,n);
    cout<< product <<"\n";
}
	}
    return 0;
}