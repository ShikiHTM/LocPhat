#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int vetcan(int a[], int n, int max, int &start, int &len) {
	for(int k = 1; k <= n; ++k) {
		int ln = max;
		for(int i = 0; i <= n-k; ++i) {
			int tong = 0;
			for(int j = i; j <= k + i; ++j)
			tong += a[j];
			if(tong == ln) {
				ln = tong;
				start = i;
				len = k;
			}
		}
	}
	return max;
}

void _ImportArray(int n, int a[]) {
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
}

int main() {
	int a[100];
	int n, s, start, len;
	cin >> n >> s;
	_ImportArray(n, a);
	int max = vetcan(a, n, s, start, len);
	cout << "Output: \n";
	for(int i = start; i <= start + len; i++)
		cout << a[i] << "\n";
	return 0;
}
