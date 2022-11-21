#include<stdio.h>
int main()
{
    int A[103],n,even=0,odd=0,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0) even++;
        else odd++;
    }
    if(even<odd)
    {
        for(i=1; i<=n ;i++)
        {
            if(A[i]%2==0)
                printf("%d",i);
        }
    }
    else
    {
         for(i=1; i<=n ;i++)
        {
            if(A[i]%2!=0)
                printf("%d",i);
        }
    }
    return 0;
}
