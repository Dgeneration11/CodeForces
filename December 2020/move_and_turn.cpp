#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int ans= 1 + (3 * n * (n + 4) + 2 - pow(-1,n)* (n * (n + 4) + 2)) / 8;
    
    cout<<ans<<endl;
}

