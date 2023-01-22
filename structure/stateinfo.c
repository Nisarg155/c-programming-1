#include<stdio.h>
typedef struct {
    char city_name[20];
    float literacy_rate ,average_income;
    int population;
}state_info;

int main() 
{
    int n;
    scanf("%d",&n);
    state_info s[n];
    int highest_population = 0;
    float highest_literacy_rate = 0;
    int index1 ,index2;
    for (int i = 0; i < n; i++)
    {
        scanf("%*c%[^\n]s",s[i].city_name);
        scanf("%d",&s[i].population);
        scanf("%f",&s[i].literacy_rate);
        scanf("%f",&s[i].average_income);
    }
    for (int i = 0; i < n  ; i++)
    {
        if (s[i].population > highest_population )
        {
            highest_population = s[i].population;
            index1 = i;

        }
        if (s[i].literacy_rate > highest_literacy_rate)
        {
            index2 = i;
            highest_literacy_rate = s[i].literacy_rate;
        }
    }
    printf("%s\n%s",s[index1].city_name,s[index2].city_name);
    
    
    return 0;
}