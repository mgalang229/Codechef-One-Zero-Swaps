#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s, p;
		cin >> n >> s >> p;
		for (int i = 0; i < n - 1; i++) {
			// check if the current character is equal to '1' and it is not equal to the
			// corresponding letter in string 'p'
			if (s[i] == '1' && s[i] != p[i]) {
				// if yes, then start searching for a '0' character in the next remaining letters
				// and swap these characters in order to make the current letter equal to its
				// corresponding letter in string 'p'
				for (int j = i + 1; j < n; j++) {
					if (s[j] == '0') {
						swap(s[i], s[j]);
						break;
					}
				}
			}
		}
		cout << (s == p ? "Yes" : "No") << '\n';
 	}
	return 0;
}
