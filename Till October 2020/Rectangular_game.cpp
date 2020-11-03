#include<bits/stdc++.h>
using namespace std;
int d(int n){
    if(n%2==0){
            return 2;
        }
    for(int i=3;i*i<=n;i=i+2){
        if(n%i == 0){
            return i;
        }
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    int x=0;
    int answer = 0;
    while(1){
        answer += n;
        x = d(n);
        n /= x;
        if(n<=1){
            break;
        }
    }
    answer+=1;
    cout<<answer<<"\n";
}