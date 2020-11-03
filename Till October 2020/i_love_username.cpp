#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0,countt=0;
    cin>>n;
    int points[n];
    for(int i =1; i<=n;i++){
        cin>>points[i];
    }
    int best = points[1];
    int worst = points[1];
    for(int i=2; i<=n;i++){
        if(points[i]>best){
            best = points[i];
            count++;
        }
        if(points[i]<worst){
            worst = points[i];
            countt++;
        }
    }
    cout<<count+countt<<endl;
}