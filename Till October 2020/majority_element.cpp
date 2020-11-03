#include<bits/stdc++.h>
#include<vector> 
using namespace std;

int majority_ele(vector<int> &a, int left, int right){
    if(left == right) return -1;
    if(left +1 == right) return a[left];

    int left_elem = majority_ele(a, left, (left+right-1)/2 + 1);
    int right_elem = majority_ele(a, (left + right - 1) / 2 + 1, right);

    int lcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == left_elem) lcount += 1;
    }
    if (lcount > (right - left) / 2) return left_elem;

    int rcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == right_elem) rcount += 1;
    }
    if (rcount > (right - left) / 2) return right_elem;

    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<a.size(); i++){
        cin>>a[i];
    }

    cout<<(majority_ele(a, 0, n) != -1)<<endl;
}