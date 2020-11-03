#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    int temp=0;
    long long answer = 0;
    cin>>a;
    if(a>= 100){
        temp = a/100;
        a = a - (temp*100);
        answer = temp + answer;
    }
    if(a>= 20){
        temp = a/20;
        a = a - (temp*20);
        answer = temp + answer;
    }
    if(a>= 10){
        temp = a/10;
        a = a - (temp*10);
        answer = temp + answer;
    }
    if(a>= 5){
        temp = a/5;
        a = a - (temp*5);
        answer = temp + answer;
    }
    if(a>= 1){
        temp = a/1;
        a = a - (temp);
        answer = temp + answer;
    }
    cout<<answer<<"\n";
}