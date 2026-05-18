#include<bits/stdc++.h>

using namespace std;

int n, m ;
vector<vector<int>> qipan;
int cnt = 0;


int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

void DFS( int x, int y) {
	if (x == n && y == m) {
		cnt ++;
		return;
	}
	if (y +1<= m || qipan[x][y + 1] == '1') {
		DFS( x, y +1);

	}
	if (x +1<= n || qipan[x + 1][y] == '1') {
		DFS(x+1, y );

	}
	

	



}








int main(void) {
	cin >> n, m;
	int a, b ;
	qipan.assign(n+1 , vector<int>(m+1 , 0 ));
	cin >> a >> b ;
	qipan[a][b] = 1;
	for (int k = 0 ; k < 8 ; k ++) {
		int nx = a + dx[k];
		int ny = b + dy[k];

		if (nx > 0 && nx < n && ny > 0 && ny < m) {
			qipan[nx][ny] = 1;
		}
	}
	DFS(0, 0);
	cout << cnt;


}
