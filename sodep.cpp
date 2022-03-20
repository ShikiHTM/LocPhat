#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int daoNguoc(int a) {
    int res = 0;
    while(a > 0) {
        int tmp = a % 10;
        res = res * 10 + tmp;
        a = a / 10;
    };
    return res;
}

bool timSoDep(int i) {
    if(__gcd(i, daoNguoc(i)) == 1) return true;
    return false;
}

int soDep(int n) {
    int dem = 0;
    for(int i = 1; i < n; ++i) {
        if(timSoDep(i) == true) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int a;
    cin >> a;
    int res = soDep(a);
    cout << res;
    return 0;
}
