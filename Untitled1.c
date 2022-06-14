#include<stdio.h>
void send(int a,int b)
{
 if(a>b)
    return b,a;
 else
    return a,b;
}

int main()
{
    int x,y;
     scanf("%d %d",&x,&y);
    send(x,y);
    printf("%d %d",x,y);
}
