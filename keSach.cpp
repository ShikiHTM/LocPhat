#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void Count(int a[], int n){
    int b[n];
    int x = 1;
    b[0] = a[0];

    for(int i = 1; i < n; i++){
        int dem = 0;
        for(int j = 0; j < x; j++){

            if(a[i] == b[j])
                dem++;
        }
        if(dem == 0) {

            b[x] = a[i];
            x++;
        }
    }

    int c[x];
    for(int i = 0; i < x; i++)
        c[i]=0;

    for(int i = 0; i < x; i++){

        for(int j = 0; j < n; j++){
            if(a[j] == b[i])
                c[i]++;
        }
    }
    
    int max = c[0], vtri = 0, y = 1;
    
    for(int i = 1; i < x; i++){
        if(c[i] > max){
            max = c[i];
            vtri = i;
            y = 1;
        }
        if(c[i] == max){
            y++;
        }       
    }
    
    if(y == 1){
        cout << b[vtri] << " " << max;
    }

    else{
        int d[y];
        int z = 0;
        for(int i = 0; i < x; i++)
            if(c[i] == max) {
                d[z] = i;
                z++;
            }
        for(int i = 0; i<z; i++)
            cout << b[d[i]] << " ";
        cout << " " << max;
         
    }
}

int main() {
    int n;
    int a[10000];

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << "Output: " << endl;
    Count(a, n);
    return 0;
}
