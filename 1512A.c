#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[100];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0];
        for(i=1; i<n; i++);
        {
            if(max<a[i])
                max=a[i];
        }
        int arr[max+1],unic;
        for(i=0; i<=max; i++)
        {
            arr[i]=0;
        }
        for(i=0; i<=max; i++)
        {
            arr[a[i]]+=1;
        }
        for(i=0; i<=max; i++)
        {
            if(arr[i]==1)
            {
                unic=arr[i];
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==unic)
            {
                printf("%d",i+1);
            }
        }
    }
    return 0;
}
