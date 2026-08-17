#include<stdio.h>
int main()
{
    float a, b,sum=0,pro=0,quo=0,diff=0;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    printf("Sum = %f", sum);
    printf("Difference = %f", diff);
    printf("Product = %f", pro);
    printf("Quotient = %f", quo);
    return 0;
}	