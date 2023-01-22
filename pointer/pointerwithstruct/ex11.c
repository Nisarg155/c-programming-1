#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
typedef struct {
    char name[20];
    int roll,marks;
} student;
void scan(student *p)
{
    printf("Enter name roll number and marks \n");
    scanf("%[^\n]s %d%d",p->name,&p->roll,&p->marks);
}
void mark_increment(student *p)
{

}

int main() 
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        scan(&s[i]);
        printf("%s\n%d\n%d\n",s[i].name,s[i].roll,s[i].marks);
    }

    
    

    return 0;
}