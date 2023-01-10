#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(char (*p)[][20],int n)
{
    char x,y;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                x = **(*p +i); // first char of ith row
                y = **(*p + j); // first char of jth row
                if (x  == 32 +y || x - 32 == y)
                {
                    /* code */
                }
        }
    }    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    char name[n][20];
    for(int i = 0;i<n ;i++)
    {
        scanf("%*c%[^\n]s",name[i]);
    }
    char (*p)[][20] = NULL;

    p = &name;
    sort(p,n);

    
    return 0;
}
