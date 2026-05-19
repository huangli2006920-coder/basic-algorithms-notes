#include<bits/stdc++.h>

using namespace std;

int bignum[5005][3000];
int len[5005];




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


	bignum[1][0] = 1;
	len[1] = 1;

	bignum[2][0] = 2;
	len[2] = 1;

	for (int i = 3 ; i <= n ; i ++) {
		int carry = 0;
		for (int j = 0 ; j < max(len[i - 1], len[i - 2]); j++) {
			int sum = bignum[i - 1][j] + bignum[i - 2][j] + carry;
			bignum[i][j] = sum % 10;
			carry = sum / 10;

		}
		if (carry > 0) {
			bignum[i][max(len[i - 1], len[i - 2])] = carry;
			len[i] = max(len[i - 1], len[i - 2]) + 1;
		} else {
			len[i] = max(len[i - 1], len[i - 2]);
		}
	}

	for (int i = len[n] - 1; i >= 0; i--) {
		cout << bignum[n][i];
	}

	cout << endl;
	return 0;
}
