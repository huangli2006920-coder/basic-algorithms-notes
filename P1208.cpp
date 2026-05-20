#include<bits/stdc++.h>

using namespace std;

struct cow {
	int amoount;
	int price;
};
int n, m;

bool cmp (cow a, cow b);

int main (void) {

	cin >> n >> m;
	vector<cow> x(m);
	for (int i = 0 ; i < m ; i ++) {
		cin >> x[i].price >> x[i].amoount;
	}
	sort (x.begin(), x.end(), cmp);

	int sum = n;
	int total = 0;

	for (int i = 0 ; i < m ; i ++) {
		for (int j = x[i].amoount ; j > 0 ; j --) {
			if (sum == 0) {
				break;
			}
			sum--;
			total += x[i].price;

		}
	}

	cout << total;


}


bool cmp (cow a, cow b) {
	return a.price < b.price ;
}
