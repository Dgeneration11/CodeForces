#include<bits/stdc++.h>

using namespace std;
int main(){
    long long int n, k=0;
    cin>>n;

    while(n>0){
        if(n%10 == 4 || n%10 == 7){
            k++;
        }
        n=n/10;
    }
    if (k==4 || k==7){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}