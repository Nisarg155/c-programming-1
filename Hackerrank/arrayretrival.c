#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n;
    scanf("%d",&n);
    typedef struct{
        int index[n],value[n];
    }array;

    array a;
    int temp;
    for(int i = 0;i<n ;i++)
    {
        scanf("%d%d",&a.index[i],&a.value[i]);
        if(a.index[i]>= n)
        {
            printf("-1");
            exit(0);
        }
    }
    
    for(int i = 0;i<n ;i++)
    {
        for(int j = i+1;j<n ;j++ )
        {
            if(a.index[i]>a.index[j])
            {
                    temp = a.index[i];
                    a.index[i] = a.index[j];
                    a.index[j] = temp;

                    temp = a.value[i];
                    a.value[i] = a.value[j];
                    a.value[j] = temp;
            }
        }
    }
    int *p = a.value;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(p+i));
    }
    


    return 0;
}