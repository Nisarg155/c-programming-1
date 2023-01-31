#include<stdio.h>


int main() 
{
    int no_tree,no_park,park_trees;
    typedef  struct tree_info{
        char name[20];
        int age ;
    } tree ;
    printf("Enter the number of trees outside the park :- ");
    scanf("%d",&no_tree);
    printf("Enter the number of park in the city :- ");
    scanf("%d",&no_park);
    printf("Enter the number of trees inside park :-");
    scanf("%d",&park_trees);
    tree t[no_tree];
    typedef struct park_info {
            tree t[park_trees]
    } park ;
    park p[no_park];
    for (int i = 0; i < no_tree; i++)
    {
        printf("Enter the ")
    }
    
    return 0;
}