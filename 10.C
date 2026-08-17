#include<stdio.h>
int main()
{ 
    int t,h,m,s;
    printf("Enter time in seconds non negative:");
    scanf("%d",&t);
    h=t/3600;
    m=(t%3600)/60;
    s=t%60;
    
    printf("Time in hours is: %d\n",h);
    printf("Time in minutes is: %d\n",m);
    printf("Time in seconds is: %d\n",s);
    return 0;
}