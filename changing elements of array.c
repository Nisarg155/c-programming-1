#include<stdio.h>

int main()
{
    
    
        int n;
        printf("Enter the length of array  :");
        scanf("%d",&n);

        int a[n],ind ,val;
        for (int i = 0; i < n; i++)
        {
            printf("\n Enter the %d element of array :",i+1);
            scanf("%d",&a[i]);
        }

        int ch;
        printf(" \nHow many elements you want to change : ");

        scanf("%d",&ch);

        if (ch>0 && ch<=n)
        {
              
            
        for (int i = 0; i < ch; i++){
            printf("\nEnter the index number : ");
            scanf("%d",&ind);

            printf("\nEnter the value : ");
            scanf("%d",&val);

            a[ind] = val;

        }


        for(int i = 0;i<n;i++)
        {
            printf(" \n element %d of array  is %d",i+1,a[i]);
        }
            
        }
        
        
        
        
            
      else {
        printf("The change is not possible");
      }
            
    
}