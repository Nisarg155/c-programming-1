#include<stdio.h>

int main()
{
    int i=0,j,count = 0,temp;
    float a[100],sum=0;
do
{
    printf("enter : ");
    scanf("%f",&a[i]);
    

     if(a[i] == -1)
    {
        break;
    }
    else
    {
        sum += a[i];
        count++;
    }
    
    i++;
    

} while (1);

    float mean ,median;
    mean = sum /(float)count;

    for ( i = 0; i < count; i++)
    {
        for ( j = i+1; j < count; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = a[j];
            }
            
        }
        
    }

    if (count%2!=0)
    {
        i = (count +1)/2;

        median = a[i-1];
    }
    else
    {
        i = count/2;
        median = (a[i-1] + a[i])/2;

    }

    printf("%.2f%.2f",mean,median);
    
    
    

     
}