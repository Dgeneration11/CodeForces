#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i=<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1;i<=n-2;i++){
        if(a[i]==a[i+1] && a[i+1]==a[i+2]]){
            c++;
        }
    }
    int x=0;
    int y[n];
    int m=0;
    for(int i=1;i<=n;i++){
        int x=1;
        for(int j=i+1;j<=n;j++){
            if(a[i]==a[j]){
                x++;
                break;
            }
        }
        m++;
        y[i]=x;
    }
    int s=0;
    cout<<x<<endl;
    for(int i=0;i<m;i++){
        if(y[i]==3){
            s++;
        }
    }
    if(m==s){
        c++;
    }

}