#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[20];
    int marks[3];
    int total_marks;
}student;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    student s[n];
    int sum ;
    for(int i = 0;i<n ;i++)
    {
        sum = 0;
        scanf("%d%*c%s",&s[i].id,s[i].name);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&s[i].marks[j]);
            sum += s[i].marks[j];
        }
        s[i].total_marks = sum;
        
    }
    student temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i +1 ; j < n; j++)
        {
            if (s[i].total_marks<s[j].total_marks)
            {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n",s[i].name,s[i].id,s[i].total_marks);
    }
    
    
    
    return 0;
}