#include<stdio.h>
void print(int arr_odd[],int arr_even[],int even,int odd,int range)
{
    static int i = 1;
    if (i == range +1 ) 
    {
        return;
    }
    if (i % 2)
    {
        arr_odd[odd++] = i;
    }
    else
    arr_even[even++] = i;
    i++;
    print(arr_odd,arr_even,even,odd,range);
}

int main() 
{
    int range;
    scanf("%d",&range);
    int even ,odd;
    if (range % 2)
    {
        even = range/2;
        odd = range - even;
    }
    else
    {
        even = range/2;
        odd = even;
    }
    int arr_odd[odd],arr_even[even];

    print(arr_odd,arr_even,0,0,range);

    printf("All even number between range is : ");
    for (int i = 0; i < even; i++)
    {
        printf("%d\t",arr_even[i]);
    }
    printf("\n");
    printf("All odd number between range is : ");
    for (int i = 0; i < odd; i++)
    {
        printf("%d\t",arr_odd[i]);
    }
    printf("\n");
    
    
    
    return 0;
}