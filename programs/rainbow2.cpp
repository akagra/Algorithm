#include <bits/stdc++.h>

using namespace std;

const int MAXN = 105;
const int MAX = 100;

int a[MAXN];

int main() {
	int T;
	scanf("%d", &T);
	assert(T >= 1 && T <= MAX);
	while (T--) {
		int n;
		scanf("%d", &n);
		assert(n >= 1 && n <= MAX);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			assert(a[i] >= 1 && a[i] <= MAX);
		}
		vector<pair<int, int> > cnts;
		int cnt = 1, which = a[0];
		for (int i = 1; i < n; i++) {
			if (a[i] == a[i - 1]) {
				cnt++;
			} else {
				cnts.push_back(make_pair(which, cnt));
				which = a[i];
				cnt = 1;
			}
		}
		if (cnt > 0) {
			cnts.push_back(make_pair(which, cnt));
		}
		int ok = true;
		// cnt dentoes consecutive groups of equal numbers.
		if (cnts.size() == 13) {
			for (int i = 0; i < 13; i++) {
				if (cnts[i] != cnts[13 - i - 1]) {
					ok = false;
				}
				if (i < 7 && cnts[i].first != i + 1) {
					ok = false;
				}
			}
		} else {
			ok = false;
		}
		puts(ok ? "yes" : "no");
	}
	return 0;
}
