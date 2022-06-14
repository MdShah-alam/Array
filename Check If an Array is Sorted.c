#include<stdio.h>
#include<stdbool.h>

void sort(int n,int* a)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void array_copy(int* a, int* b, int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}

bool is_sorted(int n,int* a)
{
    int b[n];
    array_copy(a,b,n);
    sort(n,b);
    for(int i=0;i<n;i++)
    {
        if(b[i]!=a[i])
            return false;
    }
    return true ;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int ans=is_sorted(n,a);

    if(ans)
        printf("Yes sorted\n");
    else
        printf("No\n");
}
