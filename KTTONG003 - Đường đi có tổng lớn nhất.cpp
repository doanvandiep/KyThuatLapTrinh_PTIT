#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;

int getMaxPathSum(int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    // Tạo một bảng dp có cùng kích thước với bảng A
    int dp[MAX_SIZE][MAX_SIZE];

    // Sao chép giá trị của cột đầu tiên từ bảng A sang bảng dp
    for (int i = 0; i < m; i++) {
        dp[i][0] = A[i][0];
    }

    // Duyệt từ cột thứ 2 đến cột cuối cùng
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < m; i++) {
            // Tìm giá trị lớn nhất trong 3 ô (i, j-1); (i-1, j-1); (i+1, j-1)
            int maxVal = dp[i][j-1];
            if (i > 0) {
                maxVal = max(maxVal, dp[i-1][j-1]);
            }
            if (i < m - 1) {
                maxVal = max(maxVal, dp[i+1][j-1]);
            }

            // Cộng giá trị tìm được vào ô (i, j) của bảng dp
            dp[i][j] = A[i][j] + maxVal;
        }
    }

    // Tìm giá trị lớn nhất trong cột cuối cùng của bảng dp
    int maxSum = dp[0][n-1];
    for (int i = 1; i < m; i++) {
        maxSum = max(maxSum, dp[i][n-1]);
    }
    return maxSum;
}

int main() {
    int t; cin >> t;
    while(t--){
    	int m, n;
   
    cin >> m >> n;

    int A[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    int maxPathSum = getMaxPathSum(A, m, n);
    cout << maxPathSum << endl;
	}
    return 0;
}