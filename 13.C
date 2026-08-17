#include<stdio.h>
int main()
{ 
    int a;
    printf("Enter a Year:");
    scanf("%d",&a);
    if((a%400==0 )|| ((a%4==0) && (a%100!=0)))
        printf("Entered year is a leap year");
    else
        printf("Entered year is not a leap year");
    return 0;
}