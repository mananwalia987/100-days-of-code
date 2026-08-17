#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped value is:a = %d\n", a);
    printf("Swapped value is:b = %d\n", b);
    return 0;
}