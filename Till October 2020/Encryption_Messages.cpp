#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n>>m>>c;
    int a[n], b[m];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<m;i++){
        cin>>b[i];
    }

    for(int i=0; i<n;i++){
        if(i+m > n){
            break;
        }
        for(int j=0;j<m;j++){
            a[i+j] += b[j];
            b[j] = b[j] % c;
        }
    }

    for(int i=0; i<n;i++){
        cout<<" "<<a[i]%c;
    }
}