#include<stdio.h>
#include<string.h>
int result(int a[1000], long long n)
{
    int even=0, odd=0;
    if(n%2==0)
    {
        for(int i=1; i<n; i+=2)
        {
            if(a[i]%2==0)
                even = even + 1;
            else
                odd = odd + 1;
        }
        if(even>odd)
            printf("1 \n");
        else
            printf("2 \n");
    }
    else
    {
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%2==0)
                even = even + 1;
            else
                odd = odd + 1;
        }
        if(even>odd)
            printf("2 \n");
        else
            printf("1 \n");
    }
    return 0;
}

int main()
{
    long long t, n, number, x=0;
    int array[1000];
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &number);
        x=number;
        for(int i=n-1; i>=0; i-- )
        {
            array[i] = x%10;
            x = x/10;
        }
        result(array, n);
    }
    return 0;
}