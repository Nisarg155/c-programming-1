#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(char (*p)[][50],int n)
{
    char x,y;
    int cmp;
    char temp[50];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {

                x = **(*p +i); // first char of ith row
                y = **(*p + j); // first char of jth row
                if (x  == 32 +y || x - 32 == y)
                {
                    if (y>x)
                    {
                        strcpy(temp,*(*p + i));
                        strcpy(*(*p + i),*(*p +j));
                        strcpy(*(*p + j),temp);
                    }     
                }
                else if(x == y)
                {
                cmp =  strcmp(*(*p + i),*(*p + j));
                if (cmp>=1)
                {
                        strcpy(temp,*(*p + i));
                        strcpy(*(*p + i),*(*p +j));
                        strcpy(*(*p + j),temp);
                }
                else
                {
                    cmp =  strcmp(*(*p + i),*(*p + j));
                    if (cmp>=1 && )
                    {
                        
                    }
                    
                }
                
                
                }

        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",*(*p + i));
    }
        
}  
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    char name[n][50],name2[n][50];
    for(int i = 0;i<n ;i++)
    {
        scanf("%*c%[^\n]s",name[i]);
    }
    for (int i = 0; i < n; i++)
    {
        strcpy(name2[i],name[i]);
    }
    printf("%d\n",n);
    sort(&name2,n);

    
    return 0;
}
