#include<iostream>
using namespace std;
int dp[5005][1001];
int xi[5005], yi[5005], n, s, a, b;
int main() {
	cin >> n >> s >> a >> b;
	for (int i = 1; i <= n; i++) {
		cin >> xi[i] >> yi[i];
	}
	for (int i = 1; i <= n; i++) //枚举考虑每一个苹果
		for (int j = 0; j <= s; j++) { //枚举背包大小
			dp[i][j] = dp[i - 1][j]; //不能取就直接转移考虑之前苹果的最大值
			if (xi[i] <= a + b && j >= yi[i]) //如果能够取
				dp[i][j] = dp[i - 1][j - yi[i]] + 1 > dp[i][j] ? dp[i - 1][j - yi[i]] + 1 : dp[i][j]; //这个就是动态转移方程。max函数运行太慢，我们这里选择三目运算符取较大值
		}
	cout << dp[n][s]; //因为是从前向后递推，因此接收最终答案的位置也从最前面转到了最后面
	return 0;
}
