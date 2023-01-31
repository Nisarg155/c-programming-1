#include<stdio.h>
typedef struct calender_info{
    int year,month ,day,hour,min ,sec;
}date;
void sort_dates(date  d[] ,int n )
{
    date temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (d[i].year<d[j].year)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
            else if(d[i].month > d[j].month)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
            else if(d[i].day > d[j].day)
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
        
        
    }
    
}
void print(date d[],int n){
    printf("%d\n",n);
        for(int i = n-1;i>=0 ;i--)
        printf("%02d/%02d/%04d %02d:%02d:%02d\n",d[i].day,d[i].month,d[i].year,d[i].hour,d[i].min,d[i].sec);
        
}


int main() 
{
    int n;
    scanf("%d",&n);
    date d[n];
    for (int  i = 0; i <n; i++){
    scanf("%d%d%d%d%d%d",&d[i].year,&d[i].month,&d[i].day,&d[i].hour,&d[i].min,&d[i].sec);
    }

    sort_dates(d,n);
    print(d,n);
    

    return 0;
}