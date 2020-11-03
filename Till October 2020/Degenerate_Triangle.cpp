#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }
    

}