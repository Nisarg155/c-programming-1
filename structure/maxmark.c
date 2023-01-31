#include<stdio.h>
typedef struct {
    char name[20];
    int mark1,mark2,mark3;
}student ;

int main() 
{
    int n,t[3] = {0},index[3];
    scanf("%d",&n);
    student s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%*c%[^\n]s",s[i].name);
        scanf("%d%d%d",&s[i].mark1,&s[i].mark2,&s[i].mark3);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].mark1 > t[0])
        {
            t[0] = s[i].mark1;
            index[0] = i; 
        }
        if (s[i].mark2 > t[1])
        {
            t[1] = s[i].mark2;
            index[1] = i; 
        }
        if (s[i].mark3 > t[2])
        {
            t[2] = s[i].mark3;
            index[2] = i; 
        }
    }
    
for (int i = 0; i < 3; i++)
{
    printf("%s\n",s[index[i]].name);
}


    
    return 0;
}