#include<stdio.h>

int main() 
{
    int nu_employee,count = 0,j;
    scanf("%d",&nu_employee);
    int ind[nu_employee];
    typedef struct employee_info{
        char name[20];
        int id;
        float experiance,salary;
    } emp_info ;
    emp_info emp[nu_employee];
    for (int i = 0; i < nu_employee; i++)
    {
        scanf("%s%d%f%f",emp[i].name,&emp[i].id,&emp[i].experiance,&emp[i].salary);
        if (emp->salary < 50000 && emp->experiance >= 7 )
            {
                ind[count] = i;
                count++;
            }
    }
    if(!count)
    printf("0");
    else
    {
        for (int i = 0; i < count; i++)
        {
            j = ind[i];
            printf("%d %s\n",emp[j].id,emp->name);
            
        }
        
    }
    

    

    return 0;
}