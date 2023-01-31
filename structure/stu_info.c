#include<stdio.h>
typedef struct {
    char name[20];
    int  marks;
    int roll;
} student_info;

int main() 
{
int n ,max = 0,index;
scanf("%d",&n);

student_info s[n], *p;
p = s;

for (int i = 0; i < n; i++)
{
    
    scanf("%d",&p->roll);
    scanf("%d",&p->marks);
    scanf("%*c%[^\n]s",p->name);
    
    if (p->marks > max)
    {
        max = p->marks;
        index = i;
    } 
    p++;
}
p =s;
for (int i = 0; i < n; i++)
{
    if (p->marks == max)
    {
        printf("%s\n",p->name);
    }
    p++;
    
}

    return 0;
}