#include<stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d",&N);
    if(N>0)
    {
        printf("%d",N*(N+1)/2);
    }
    else
    {
        for(N;N<=1;N++){
            sum=sum+N;
        }
        printf("%d",sum);
    }
    return 0;
}