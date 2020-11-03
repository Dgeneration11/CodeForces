#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
long long max_product(vector<int> a, vector<int> b){
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    long long result=0;
    for(int i=0; i<a.size(); i++){
        result += (long long) a[i]*b[i];
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    cout<<max_product(a,b)<<endl;
}