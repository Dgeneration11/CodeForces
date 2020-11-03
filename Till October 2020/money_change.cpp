#include<bits/stdc++.h>
using namespace std;

int change(int m){
    int count =0;
    int coins[] = {10, 5, 1};
    for(int i=0;m>0;i++){
        count = count + m/coins[i];
        m = m%coins[i];
    }
    return count;

}

int main(){
    int m;
    cin>>m;
    cout<<change(m);
}