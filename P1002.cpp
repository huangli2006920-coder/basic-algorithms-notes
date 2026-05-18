#include<bits/stdc++.h>

using namespace std;

int n, m ;
vector<vector<int>> qipan (n, vector<int>(m));
int cnt = 0;


int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

void DFS(int k, int x, int y) {
	if (x == n && y == m) {
		cnt ++;
		return;
	}
	if (y == m || qipan[][y + 1] == '1') {
		return ;

	}
	if (x == n || qipan[x + 1][] == '1') {
		return ;

	}
	for (int i = x ; i < n ; i ++) {
		DFS(k, i + 1, y);
		for (int j = y ; j < m ; j ++)
			DFS( k, i, j + 1);
		y++;

	}



}








int main(void) {
	cin >> n, m;
	int a, b ;
	cin >> a >> b ;
	qipan[a][b] = '1';
	for (int k = 0 ; k < 8 ; k ++) {
		int nx = a + dx[k];
		int ny = b + dy[k];

		if (nx > 0 && nx < n && ny > 0 && ny < m) {
			qipan[nx][ny] = '1';
		}
	}
	DFS(0, 0, 0);
	cout << cnt;


}
