#include<stdio.h>
typedef struct {
    char name[20];
    int meter,centi_meter;
    int total;
    
}length;

int main() 
{
    int n;
    printf("Enter number of inputs :- ");
    scanf("%d",&n);
    length len[n],temp ,*ptr =NULL;
    ptr = len;
    for (int i = 0; i <n; i++,ptr++)
    {
        printf("Enter name :- ");
        scanf("%*c%s",ptr->name);
        printf("Enter lenght :- ");
        scanf("%dm %dcm",&ptr->meter,&ptr->centi_meter);
        ptr->total = ptr->meter*100 +ptr->centi_meter;
    }
    ptr = len;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((ptr + i)->total<(ptr +j)->total)
            {
                temp = len[i];
                len[i] = len[j];
                len[j] =temp;
            }
        }
    }
    ptr = len;
    for (int i = 0; i < n; i++,ptr++)
    {
        printf("Name :- %s\nlength :- %dcm\n",ptr->name,ptr->total);
    }
    
    
    
    return 0;
}