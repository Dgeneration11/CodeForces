#include<stdio.h>
#include<string.h>
int main()
{
    int x=80;
    int y;
    &y=x;
    x++;
    cout<<x<<" "<<-y;
    return 0;
}