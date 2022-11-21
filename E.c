#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,val,c;
    double B;
    scanf("%lld %lf",&A,&B);
    c=(B*100+0.5);
    val=A*c/100;
    printf("%lld",val);
    return 0;
}