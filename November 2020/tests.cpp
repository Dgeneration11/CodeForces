#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y[10];
    cin>>x;
    for(int i=0; i<3; i++){
        cin>>y[i];
    }
    int sum=0;
    for(int i=0; i<3; i++){
        sum = sum + y[i];
    }

    if(x==sum){
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
    
}