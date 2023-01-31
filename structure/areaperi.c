#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct point
{
    int x, y;
}pt;

typedef struct rectangle
{
    pt pt1;
    pt pt2;
}rect;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    rect r1;
    int s1,s2;
    char c,d;
    scanf("%d%c%d%d%c%d",&r1.pt1.x,&c,&r1.pt1.y,&r1.pt2.x,&d,&r1.pt2.y);
    if (r1.pt1.x == r1.pt2.x || r1.pt1.y == r1.pt2.y)
    printf("-1");
    else
    {
        s1 = r1.pt2.x - r1.pt1.x;
        s2 = r1.pt2.y - r1.pt1.y;
        if (s1<0)
            s1 = -s1;
        if (s2<0)
        s2 = -s2;
        printf("%d\n%d",s1*s2,2*s1+2*s2);
    } 
    
    

    return 0;
}