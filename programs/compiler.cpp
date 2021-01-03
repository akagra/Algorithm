#include <iostream>
#include <cassert>
#include <cstdio>
#include <algorithm>
using namespace std;

int Tn, i, fa, op, ret, sl = 0;
string s;

int main (int argc, char * const argv[]) {
	cin >> Tn;
	assert(1 <= Tn && Tn <= 500);
	while (Tn--) {
		cin >> s;
		assert(1 <= s.length() && s.length() <= 1000000);
		sl += s.length();
		ret = 0;
		for(fa = 0, i = 0, op = 0; i < s.length(); i++) {
			if (s[i] == '<') ++op; else // maintaining balance for '<'
				if (!op) fa = 1; // the balance should never go below zero
					else --op; // maintaining balance for '>'
			if (!fa && !op) ret = i + 1; // if the prefix is a correct one
		}
		cout << ret << endl;
	}
	assert(1 <= sl && sl <= 5000000);
    return 0;
}
