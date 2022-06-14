#include<stdio.h>

void print(int n,int ar[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}

void rotation(int n,int ar[])
{
    int temp=ar[0];
    for(int i=0;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    ar[n-1]=temp;
    print(n,ar);
}

void input(int n, int ar[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    rotation(n,ar);
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    input(n,ar);
}
