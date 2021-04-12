#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, c;
		cin >> a >> b >> c;
		auto GetPower = [&](long long base, long long exponent) {
			int res = 1;
			while (exponent > 0) {
				if (exponent & 1) {
					res *= base;
				}
				base *= base;
				exponent /= 2;
			}
			return res;
		};
		// 'x' is equal to the 10 raise to ('a' - 1) to get a number with 'a' digits
		long long x = GetPower(10, a - 1);
		// 'y' is equal to the 10 raise to ('b' - 1) to get a number with 'b' digits
		// plus 10 raise to ('c' - 1) to a GCD with 'c' digits
		long long y = GetPower(10, b - 1) + GetPower(10, c - 1);
		cout << x << " " << y << '\n';
	}
	return 0;
}
