#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long mat[n][n];
    long total =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            total+=mat[i][j];
        }
    }
    if(n<=3){
        cout<<total;
    }
    else{
        total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == (n-1)/2 || j == (n-1)/2 || i==j || i+j == n-1){
                    total+=mat[i][j];
                }
            }
        }
        cout<<total;   
    }
}