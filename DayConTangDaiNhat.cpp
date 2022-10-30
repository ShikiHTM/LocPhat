#include <bits/stdc++.h>
using namespace std;

const int INF = 1e8;
int n, a[INF], L[INF];

int main() {
  int result = 1;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for(int i = 0; i < n; ++i) {
    L[i] = 0;
    for(int j = i - 1; j >= 0; --j) {
      if(a[i] > a[j]) L[i] = max(L[i], L[j]);
    }
    L[i] += 1;
    result = max(result, L[i]);
  }
  cout << result;
}
