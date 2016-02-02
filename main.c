#include <stdio.h>

//0-false 1-true
int isLeapYear(int year)
{
    if(year%400==0)
        return 1;

    if(year%100==0)
        return 0;

    if(year%4==0)
        return 1;

    return 0;
}

//%4 = Leap YEar
//1900,2000,2100,2200,2300,2400

int main()
{
    printf("2000:%d\n",isLeapYear(2000));
    printf("1900:%d\n",isLeapYear(1900));
    printf("1904:%d\n",isLeapYear(1904));
    printf("1901:%d\n",isLeapYear(1901));

    return 0;
}


