#include<stdio.h>
int main()
{
    int n,k,i,count=0;
    scanf("%d%d",&n,&k);
    int Arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0; i<n ; i++)
    {
         if(Arr[i]>=Arr[k-1] && Arr[i])
            count++;
    }
    printf("%d",count);
    return 0;
}
