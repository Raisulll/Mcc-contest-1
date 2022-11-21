#include<stdio.h>
int main()
{
    int X;
    float Y,val;
    scanf("%d %f",&X,&Y);
    if ( X+0.5>Y)
    {
        val=Y;
    }
    else if(X%5==0){
        val=Y-X-0.50;
    }
    else{
        val=Y;  
    }
    printf("%.2f",val);
    return 0;
}