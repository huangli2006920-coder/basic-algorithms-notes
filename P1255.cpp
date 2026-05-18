#include<bits/stdc++.h>

using namespace std;

long long  dp[10000];

int main(void) {
	int n ;
	cin >> n;


	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}
	if (n == 2) {
		cout << 2 << endl;
		return 0;
	}
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3 ; i <= n ; i ++) {

		dp[i] = (dp[i - 1] ) + (dp[i - 2] );
	}


	cout << dp[n];
}
