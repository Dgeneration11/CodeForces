#include<bits/stdc++.h>
using namespace std;

int sumOFdigits(int n){
    int sum=0;
    while(n){
        sum += n%10;
        n=n/10;
    }
    return sum;
}

int main(){
    int k;
    cin>>k;
    int count=0;
    for(int i=19; i<19000000; i+=9){
        if(sumOFdigits(i) == 10){
            ++count;
            if(count == k){
                cout<<i;
                return 0;
            }
        }
    }
}
