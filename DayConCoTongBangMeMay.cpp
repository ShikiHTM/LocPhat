#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(1);
    cin.tie(0);

    int n, S;
    scanf("%d %d", &n, &S);

    vector<int> a(n);
    for(int i = 0; i < n; ++i) scanf("%d", &a[i]);

    vector<bool> dp(S+1, false);
    dp[0] = true;
    
    for(int i = 0; i < n; ++i) {
        for(int j = S; j >= a[i]; --j) {
            if(dp[j-a[i]] == true) dp[j] =true;
        } 
    }

    if(dp[S]) printf("YES");
    else printf("NO");
}
