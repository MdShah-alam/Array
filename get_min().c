#include<stdio.h>
int  get_min(int a, int b)
{
    return a<b? a:b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int d=get_min(a,b);

    printf("%d",d);
}
