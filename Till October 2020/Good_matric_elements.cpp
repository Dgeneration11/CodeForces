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
        cout<<total - ( mat[0][1] + mat[0][3] + mat[1][0] + mat[3][0] + mat[1][n-1] + mat[3][n-1] + mat[n-1][1] + mat[n-1][3] );
    }
}