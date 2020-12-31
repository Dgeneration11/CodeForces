#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a=240-k;
    int time =0, c=0;

    for(int i=1; i<=n;i++){
        time += 5*i;
        if(time > a){
            break;
        }
        c=c+1;
    }
    cout<<c<<endl;
}