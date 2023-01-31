#include<stdio.h>
    typedef struct std {
        int roll_no;
        char name[20];
        struct result{
        int total;
        }ans;
    } final_result;
    final_result r1;

void fun(final_result r1) {
            printf("Enter roll name and total \n ");
            scanf("%d%s%d",&r1.roll_no,r1.name,&r1.ans.total);
            printf("ROll No %d \n Name %s \n total %d",r1.roll_no,r1.name,r1.ans.total);
}

int main() 
{
    final_result r1;

    fun(r1);
    return 0;
}