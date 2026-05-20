#include<bits/stdc++.h>

using namespace std;

struct people {
	int time;
	int order ;

};

bool cmp (people a, people b);

int main(void) {
	int n;
	cin >> n;

	vector<people> x(n);

	for (int i = 0 ; i < n ; i++) {
		cin >> x[i].time;
		x[i].order = i + 1;

	}
	double sum;

	sort (x.begin(), x.end(), cmp);
	double total_wait = 0;
	double current_time = 0;

	for (int i = 0 ; i < n ; i ++) {
		if (i > 0) {
			total_wait += current_time ;

		}
		current_time += x[i].time;
	}
	sum = total_wait / n;
	for (int i = 0 ; i < n ; i ++) {
		cout << x[i].order << " ";

	}
	cout << endl;
	cout << fixed << setprecision(2) << sum ;
}



bool cmp (people a, people b) {
	if (a.time != b.time) {
		return a.time < b.time ;
	}

	return a.order < b.order ;
}
