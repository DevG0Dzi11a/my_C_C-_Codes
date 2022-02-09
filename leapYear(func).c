#include<stdio.h>

void lpYear(int a)
{
    if(a%4==0 && a%100!=0 || a%400==0)
        printf("This is a leap year");
    else
        printf("This is not a leap year");

}

void main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    lpYear(year);


}
