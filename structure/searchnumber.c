#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[20];
    long int phone_number;
} user_info;

int main() 
{
    int n;
    scanf("%d",&n);
    user_info u_i[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%*c%[^\n]s%ld",u_i[i].name,&u_i[i].phone_number);
    }
    char name[20];
    scanf("%*c%[^\n]s",name);
    for (int i = 0; i < n; i++)
    {
    if (strcmp(u_i[i].name,name) == 0)
    {
        printf("number = ",u_i[i].phone_number);
        break;
    }
    }
    
    
    return 0;
}