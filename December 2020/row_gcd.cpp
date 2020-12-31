#include<bits/stdc++.h>
#include<algorithm>
typedef unsigned long long ll;
typedef long double ld;
#define int ll
#define double ld
using namespace std;
 
const int SIZE = 2e5;
 
int n, m, a[SIZE], b[SIZE];
 
signed main () {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int j = 0; j < m; j++) {
        cin >> b[j];
    }
    sort(a, a + n);
    int g = 0;
    for(int i = 1; i < n; i++) {
        g = gcd(g, a[i] - a[0]);
    }
    for(int j = 0; j < m; j++) {
        cout << gcd(g, a[0] + b[j]) << " ";
    }
    return 0;
}