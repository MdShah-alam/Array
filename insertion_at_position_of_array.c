#include<stdio.h>

int main()
{
    int n;
    printf("Enter the length of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter your array elements :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    int temp,pos;
    printf("\nEnter the value :");
    scanf("%d",&temp);
    printf("Enter position :");
    scanf("%d",&pos);

    for(int i=n; i>pos-1; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=temp;
    for(int i=0; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
