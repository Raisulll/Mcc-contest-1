#include<stdio.h>
int main()
{
    int n,h,a,sum=0;
    scanf("%d %d",&n,&h);
    for (int i = 1; i<=n; i++)
    {
        scanf("%d",&a);
        if (a<=h)
        {
            sum+=1;
        }
        else
        {
            sum+=2;
        }
        
    }
    printf("%d",sum);
    
    return 0;
}