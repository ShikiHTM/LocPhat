#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

string st;
int n, k;

void fileOpen() {
	fstream fi;
	fi.open("C:\\Users\\Admin\\Desktop\\input.inp", ios_base::in);
	fi >> n >> k;
	fi >> st;
	fi.close();
}

string paling_chan(string st, int t) {
	bool kt = false;
	string res;
	for(int i = 1; i < st.size(); ++i)
	if(st[i-1] == st[i]) {
		res = "";
		int len = 0;
		int l = i-1, r = i;
		while(st[i] == st[r]) {
			if( l == -1) break;
			if( r == st.size()) break;
			len += 2;
			res  = st[l] + res + st[r];
			l--;r++;
			if(len == t) {
				kt = true;
				break;
			}
		}
		if(kt) break;
	};
	if(!kt) return "";
	return res;
}

string paling_le(string st, int t) {
	bool kt = false;
	string res;
	for(int i = 1; i < st.size(); ++i)
	if(st[i-1] == st[i+1]) {
		res = st[i];
		int len = 1;
		int l = i-1, r = i+1;
		while(st[i] == st[r]) {
			if( l == -1) break;
			if( r == st.size()) break;
			len += 2;
			res  = st[l] + res + st[r];
			l--;r++;
			if(len == t) {
				kt = true;
				break;
			}
		}
		if(kt) break;
	}
	if(!kt) return "";
	return res;
}

void outFile() {
	ofstream fo;
	fo.open("C:\\Users\\Admin\\Desktop\\output.out", ios_base::out);
	n = n - k;
	string s ="";
	if( n % 2 == 0) s = paling_chan(st,n);
	else s = paling_le(st, n);
	if( s == "") fo <<"No";
	else fo << s;
}

int main() {
	//cin >> st;
	fileOpen();
	//cout << n << k << endl;
	//cout << st;
	outFile();
}
