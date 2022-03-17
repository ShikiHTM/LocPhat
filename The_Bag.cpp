#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

struct Data{
	long w, v;
};
Data a[100];

int n, W;

bool cmp(Data a, Data b) {
	return (float)a.v/a.w > (float)b.v/b.w;
}

int _Finding(int i, int w, int v) {
	if(w > W) return 0;
	if(i==n && w <= W) return v;
	long l = _Finding(i+1, w+a[i].w, v + a[i].v);
	long r = _Finding(i+1, w, v);
	return max(l,r);
}

int main() {
	ios_base::sync_with_stdio(0);

	cout << "Input: \n";
	cin >> n >> W;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].w >> a[i].v;
	}
	sort(a, a+n, cmp);

	cout << "Output: \n";
	cout << _Finding(0, 0, 0);
	return 0;
}
