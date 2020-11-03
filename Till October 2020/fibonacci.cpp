#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    
    int f,f1,f2;
    f1=0;
    f2=1;
    for(int i=2;i<=n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}