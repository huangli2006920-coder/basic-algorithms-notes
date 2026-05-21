#include<bits/stdc++.h>

using namespace std;

struct apple {
	int height ;
	int energy;
};

bool cmp(apple a, apple b);




int main (void) {
	int n, s ;
	cin >> n >> s;
	int a, b ;
	cin >> a >> b;
	vector<apple> x;
	int temp, h;

	for (int i = 0 ; i < n ; i ++) {
		cin >> h >> temp;
		if (h > a + b) {
			continue;

		}
		x.push_back({h, temp});
	}
	sort (x.begin(), x.end(), cmp);

	int cnt = 0;

	for (int i = 0 ; i < x.size(); i ++) {


		if (s >= x[i].energy) {
			s -= x[i].energy;
			cnt ++;
		} else {
			break;
		}
	}

	cout << cnt ;

}



bool cmp(apple a, apple b) {
	return a.energy < b.energy;
}
