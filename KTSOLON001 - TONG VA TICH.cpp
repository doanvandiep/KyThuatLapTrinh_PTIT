#include<bits/stdc++.h>
using namespace std;

string addString(string s1, string s2) {
    while (s1.size() > s2.size()) s2 = "0"+s2;
    while (s1.size() < s2.size()) s1 = "0"+s1;
    int len = s1.size();
    string ans = "";
    int carry = 0;
    for (int i = len - 1; i >= 0; i--) {
        int product = s1[i] - '0' + s2[i] - '0' + carry;
        carry = product / 10;
        ans = to_string(product % 10) + ans;
    }
    if (carry > 0) ans ="1"+ans;
    return ans;
}

string mulString(string s1,string s2)
{
	int len1=s1.size();
	int len2=s2.size();
	vector<int> result(len1+len2,0);
	for(int i=len1-1;i>=0;i--)
	{
		for(int j=len2-1;j>=0;j--)
		{
		int product=(s1[i]-'0')*(s2[j]-'0');
		int sum=product+result[i+j+1];
		result[i+j+1]=sum%10;
		result[i+j]+=sum/10;	
		}
	}
	string ans;
	for(int x:result)
	{
		if(!(ans.empty()&&x==0))
		{
			ans+=to_string(x);
		}
	}
	return ans.empty()?"0":ans;
}
int main() {
    ifstream inputFile("bignumber.in"); // Mở tệp đầu vào
    ofstream outputFile("bignumber.out"); // Mở tệp kết quả
    int t;
    inputFile >> t; // Đọc số lượng trường hợp thử nghiệm từ tệp đầu vào

    for (int i = 0; i < t; i++) {
        string s1, s2, s3;
        inputFile >> s1 >> s2 >> s3; // Đọc các chuỗi từ tệp đầu vào

        if (s2 == "+") {
            outputFile << addString(s1, s3) << endl; // Gọi hàm cộng và ghi kết quả vào tệp kết quả
        } else if (s2 == "*") {
            outputFile << mulString(s1, s3) << endl; // Gọi hàm nhân và ghi kết quả vào tệp kết quả
        }
    }
    inputFile.close(); // Đóng tệp đầu vào
    outputFile.close(); // Đóng tệp kết quả
    return 0;
}
