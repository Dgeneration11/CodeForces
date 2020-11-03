#include <bits/stdc++.h>
using namespace std;

int sum(long long x){
    int s=0;
    while(x>0){
        s+=x%10;
        x/=10;
    }
    return s;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        long long n; 
        int s;
        cin>>n>>s;
        if(sum(n)<=s){
            cout<<0<<"\n";
            continue;
        }
        long long answer =0;
        long long factor = 1;
        for(int k=0; k<18; ++k){
            int last_digit = (n/factor)%10;
            long long add = ((10-last_digit)%10)*factor;
            n +=add;
            answer += add;
            if(sum(n)<=s){
                break;
            }
            factor *= 10;
        }
        cout<<answer<<"\n";
    }
    return 0;
}
