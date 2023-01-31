#include<stdio.h>
#define NORMAL  "\x1b[0m"
#define RED    "\x1b[31m"
#define GREEN  "\x1b[32m"

int main() 
{
    typedef struct tree_info{
        char name[20];
        int age ;
    } tree;
    typedef struct bench_info{
        char colour[20];
        float length;
    } bench;
    int n,m,p,pk;
    
    printf(NORMAL"Enter the number of parks in the city :- ");
    scanf("%d",&pk);
    printf(GREEN"Enter the number of tree inside park :- ");
    scanf("%d",&p);
    typedef struct park_info {
        tree t[p];
    } park;
    park par[pk];
    for (int i = 0; i < pk; i++)
    {
        printf("\n");
        printf("Enter the info of park  %d \n",i+1);
        for (int j = 0; j < p; j++)
        {
            printf(GREEN"Enter the type\\name of tree no. :- %d in park no:- %d :- ",j+1,i+1);
            scanf("%s",par[i].t[j].name);
            printf(GREEN"Enter the age tree no. :- %d in park no:- %d :- ",j+1,i+1);
            scanf("%d",&par[i].t[j].age);
        }
    }
    printf("\n");
    for (int i = 0; i < pk; i++)
    {
        printf(RED"The info of park no.:- %d is shown below \n",i+1);
        for (int j = 0; j < p; j++)
        {
            printf("The name of tree is : %s and age is : %d\n",par[i].t[j].name,par[i].t[j].age);
        }
    }
    
    
    printf("\n");
    printf(GREEN"Enter the numbr of trees outside park :-  ");
    scanf("%d",&n);
    printf(RED"Enter the number of benches outside park :- ");
    scanf("%d",&m);
    printf("\n");

    tree t[n];
    bench b[m];
    printf("\n");
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the information of tree number %d \n",i+1);
        printf(GREEN"Enter the name/type of tree :- ");
        scanf("%s",t[i].name);
        printf(GREEN"Enter the Age   of   tree :- ");
        scanf("%d",&t[i].age);
    }
    printf("\n");
    for(int i = 0;i<m ;i++)
    {
        printf("Enter the info of  benche number %d in park \n",i+1);
        printf(GREEN"Enter the colour of bench :- ");
        scanf("%s",b[i].colour);
        printf(GREEN"Enter the length of bench :- ");
        scanf("%f",&b[i].length);
    }
    printf("\n");
    printf(GREEN"There are %d trees in outside park and info of it are shown below \n",n);
    for (int i = 0; i < n; i++)
    {
        printf(RED"%d Name/Type :- %s Age :- %d\n",i+1,t[i].name,t[i].age);
    }
    printf("\n");
    printf(GREEN"There are total %d bench outside the park and info of it are shown below \n",m);
    for(int i = 0;i<m ;i++)
    {
        printf(RED"%d Colour :- %s length :- %.3f \n",i+1,b[i].colour,b[i].length);

    }
    return 0;
}