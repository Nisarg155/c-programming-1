#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    /* define appropriate members here */
    int year, month, day;
} date;
void print(date d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (d[i].month == 2)
        {
            if (d[i].year % 4 == 0 && (d[i].year % 100 != 0 || d[i].year % 400 == 0))
            {
                if (d[i].day < 29)
                    d[i].day += 1;
                else
                {
                    d[i].day = 1;
                    d[i].month += 1;
                }
            }
            else
            {
                if (d[i].day < 28)
                    d[i].day++;
                else
                {
                    d[i].month += 1;
                    d[i].day = 1;
                }
            }
        }
        else if (d[i].month == 1 || d[i].month == 3 || d[i].month == 5 || d[i].month == 7 || d[i].month == 8 || d[i].month == 10 || d[i].month == 12)
        {
            if (d[i].month == 12 && d[i].day == 31)
            {
                d[i].year += 1;
                d[i].month = 1;
                d[i].day = 1;
            }
            else if (d[i].day == 31)
            {
                d[i].month += 1;
                d[i].day = 1;
            }

            else if (d[i].day < 31)
                d[i].day += 1;
        }
        else if (d[i].month == 4 || d[i].month == 6 || d[i].month == 9 || d[i].month == 11)
        {

            if (d[i].day == 30)
            {
                d[i].month += 1;
                d[i].day = 1;
            }
            else if (d[i].day < 30)
                d[i].day += 1;
        }
        printf("%04d %02d %02d\n", d[i].year, d[i].month, d[i].day);
    }
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    date d[n];
    for (int i = 0; i < n; i++)
        scanf("%d%d%d", &d[i].year, &d[i].month, &d[i].day);

    print(d, n);
    return 0;
}