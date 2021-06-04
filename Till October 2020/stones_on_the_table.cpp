#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count=0;
    cin>>n;
    char a[50];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n;i++){
            if(a[i]==a[i+1]){
                count+=1;
            }
    }
    cout<<count;

}