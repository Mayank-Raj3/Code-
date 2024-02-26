// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

struct measure {
	int day;
	int change;
	string cow;
};

bool sortbyday(const measure &a, const measure &b) {
	return a.day < b.day;
}

int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);
	int N; cin >> N;
	measure data[N];
	unordered_map<string, int> milk;
	pair<string, int> winner;
	int changes = 0;

	for (int i = 0; i < N; i++) {
		int a, b;
		string c;
		cin >> a >> c >> b;
		data[i].day = a;
		data[i].change = b;
		data[i].cow = c;
		milk[c] = 7;
	}

	sort(data, data + N, sortbyday);
	for (int i = 0; i < N; i++) {
		milk[data[i].cow] += data[i].change;
		winner.second = max({milk["Mildred"], milk["Bessie"], milk["Elsie"]});
		string orig = winner.first;
		winner.first = "";
		if (milk["Mildred"] == winner.second) {
			winner.first += "Mildred";
		}
		if (milk["Elsie"] == winner.second) {
			winner.first += "Elsie";
		}
		if (milk["Bessie"] == winner.second) {
			winner.first += "Bessie";
		}
		if (winner.first != orig) {
			changes++;
		}
	}
	cout << changes << endl;
}