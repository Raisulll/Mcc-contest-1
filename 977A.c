#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,k;
    scanf("%d%d",&n,&k);
    for (int i = 1; i <= k; i++)
    {
        if (n%10!=0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
    }
    printf("%d",n);
    return 0;
}
