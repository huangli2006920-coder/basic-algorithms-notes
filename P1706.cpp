#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> sequences;

int n ;
int a[100];

void DFS (int k ) {
	if (k == n) {
		vector<int> sequence;
		for (int i = 0; i < n ; i++) {
			sequence.push_back(a[i]);
		}
		sequences.push_back(sequence);






		return ;
	}

	for (int i = 1 ; i <= n ; i ++) {
		a[k] = i;
		DFS(k + 1);
	}
}

int main (void) {

	cin >> n;
	DFS(0);
	for (int i = 0; i < sequences.size() ; i ++) {
		for (int j = 0 ; j < n ; j ++) {
			cout << sequences[i][j];
		}
		cout << endl;
	}

}
