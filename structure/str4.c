#include<stdio.h>
void fun( result r1  )
{
    /* data */
};


int main() 
{
    typedef struct exam_info{
        int roll ;
        char name[20];
        struct exam_result{
            int grades ;
        } marks;
    } result ;
    struct exam_result marks = {50};
    result r1 = {03,"nisarg"};
    fun(r1);
    return 0;
}