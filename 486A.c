#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long int n,count=0;
    scanf("%li",&n);
    for (int i = 1; i <=n; i++)
    {
        count=count+pow(-1,i)*i;
    }
    printf("%li",count);
    return 0;
}
