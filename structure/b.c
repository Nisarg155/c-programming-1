#include<stdio.h>
typedef struct {
    char name[20];
    int roll , s1_mark ,s2_mark , s3_mark,s4_mark , s5_mark,result;
} student_info;
void merit(student_info *ptr,int n)
{
    student_info temp;
    for (int i = 0; i <n -1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((ptr + i )->result <( ptr + j )->result)
            {
                temp = *(ptr + i);
                *(ptr + i)  = *(ptr + j);
                *(ptr + j) = temp; 
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf(" Rank :- %d  Name :-%s\n",i+1,(ptr + i)->name);
    }
    
    
}
int main() 
{
    int n;
    printf("Enter the number of students :- ");
    scanf("%d",&n);
    student_info s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name :- ");
        scanf("%*c%[^\n]s",s[i].name);
        printf("Enter roll :- ");
        scanf("%d",&s[i].roll);
        printf("enter marks of sub 1 :- ");
        scanf("%d",&s[i].s1_mark);
        printf("enter marks of sub 2 :- ");
        scanf("%d",&s[i].s2_mark);
        printf("enter marks of sub 3 :- ");
        scanf("%d",&s[i].s3_mark);
        printf("enter marks of sub 4 :- ");
        scanf("%d",&s[i].s4_mark);
        printf("enter marks of sub 5 :- ");
        scanf("%d",&s[i].s5_mark);
        printf("\n");
        
        s[i].result = s[i].s1_mark + s[i].s2_mark + s[i].s3_mark + s[i].s4_mark + s[i].s5_mark;
    }
    merit(s,n);
    
    
    
    
    return 0;
}