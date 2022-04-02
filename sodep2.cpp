#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, response;

void readf() {
	ifstream fi;
	fi.open("TEST.INP", ios_base::in);
	fi >> n;
	fi.close();
}

int daoNguoc(int n) {
	int res = 0;
	int tmp;
	while (n > 0) {
		tmp = n % 10;
		res = res * 10 + tmp;
		n = n / 10;
	}
	return res;
}

bool soDep(int i, int j) {
	if (__gcd(i, j) == 1) return true;
	return false;
}

int checkSoDep(int n) {
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (soDep(i, daoNguoc(i)) == true) {
			count++;
		}
	}
	return count;
}

void outf() {
	ofstream fo;
	fo.open("TEST.OUT", ios_base::out);
	response = checkSoDep(n);
	fo << response;
}

int main() {
	readf();
	outf();
}
