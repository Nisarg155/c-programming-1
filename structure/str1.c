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
    int n,m;
    printf("Enter the numbr of trees :-  ");
    scanf("%d",&n);
    printf("Enter the number of benches :- ");
    scanf("%d",&m);


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
    printf(GREEN"There are %d trees in park and info of it are shown below \n",n);
    for (int i = 0; i < n; i++)
    {
        printf(RED"%d Name/Type :- %s Age :- %d\n",i+1,t[i].name,t[i].age);
    }
    printf("\n");
    printf(GREEN"There are total %d bench in park and info of it are shown below \n",m);
    for(int i = 0;i<m ;i++)
    {
        printf(RED"%d Colour :- %s length :- %.3f \n",i+1,b[i].colour,b[i].length);
    }

    
    

    return 0;
}