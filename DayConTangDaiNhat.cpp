#include<stdio.h>

const int INF = 1e8;
int n, a[INF], F[INF];

int main() {
  int i, j;
  scanf("%d", &n);
  for(i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  
  int result = 1;
  for(i = 0 ; i < n ; ++i) {
    F[i] = 0;
    for(j = i - 1; j >= 0; --j)
      if(a[i] > a[j]) F[i] = max(F[i], F[j]);
    
    F[i] += 1;
    result = max(F[i], result);
  }
  
  cout << result;
}
