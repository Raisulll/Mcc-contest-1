#include<stdio.h>
int main()
{
    int x,dis;
    scanf("%d",&x);
    dis=(x/5)+(x%5!=0);
    printf("%d",dis);
    return 0;
}
