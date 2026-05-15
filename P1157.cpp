#include<bits/stdc++.h>

using namespace std;

int a[100];
int n, r ;
vector<vector<int>> sequences;

void DFS(int k, int x);

int main(void) {
	cin >> n >> r;
	DFS(0, 1);
	for (int i = 0  ; i < sequences.size() ; i ++) {
		for (int j = 0 ; j < r ; j ++) {
			cout << setw(3) << sequences[i][j];
		}
		cout << endl;
	}
}

void DFS(int k, int x) {
	if (k == r) {
		vector<int> sequence;
		for (int i = 0 ; i < r ; i ++) {
			sequence.push_back(a[i]);
		}
		sequences.push_back(sequence);
		return;
	}

	for (int i = x ; i <= n ; i++) {
		a[k] = i;
		DFS(k + 1,  1 + a[k]);
	}

}
