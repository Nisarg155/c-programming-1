#include<stdio.h>
typedef struct measure{
    int feet;
    float inch;
} mer;

int main() 
{
    mer m1,m2;
    scanf("%d%f%d%f",&m1.feet,&m1.inch,&m2.feet,&m2.inch);
    if(m1.inch + m2.inch >= 12)
    {
        int x = (m1.inch + m2.inch)/12 ;
        float y = (m1.inch + m2.inch) - x*12;
        printf("%d %.1f",x,y);
    }
    else printf("%d %.1f",m1.feet + m2.feet,m1.inch + m2.inch);

    return 0;
}