#include<stdio.h>
int lpyear(int);
int main()
{
    int year;
    printf("Enter the year :- ");
    scanf("%d",&year);
    if (lpyear(year))
        printf("Year %d is a leap year ",year);
    else
        printf("Year %d is not a leap year",year);
    return 0;
}
int lpyear(int year)
{
    if (year%4==0||year%400==0&&year%100!=0)

        return 1;
    else
        return 0;
}
