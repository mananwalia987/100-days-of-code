// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main()
{
    struct Employee e;

    scanf("%s %d %d %d %d", e.name, &e.id,
          &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}