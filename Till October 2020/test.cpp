#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {1,2,3};
    int *p = a;
    int **r = &p;
    cout<<**r<<a<<*p;

}