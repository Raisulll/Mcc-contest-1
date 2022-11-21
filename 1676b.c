#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t; 
    scanf("%d",&t);
    while (t--)
    {
        int n,arr[50],i; 
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int min=arr[0];
        for(i=0; i<n; i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
        int sum=0;
        for(i=0; i<n; i++)
        {
            int x=arr[i]-min;
            sum+=x;
        }
        printf("%d\n",sum);
    }
    
    return 0;
}
