#include<stdio.h>
#include<stdlib.h>

int main()
{
    int candi,n,count=0,max =0,tie;
    unsigned int no_votes,val;
    scanf("%d%lu",&candi,&no_votes);

    int a[no_votes] = -1,b[no_votes];
    for (int  i = 0; i < no_votes; i++)
    {
        scanf("%d",b[i]);    
    }
    for (int  i = 0; i < no_votes; i++)
    {
        for (int j = i+1; j < no_votes; i++)
        {
            count = 1;
            if (b[i]=b[j])
            {
                count++;
                a[j] == 0;
                
                
            }
            a[i] = count;
            if(a[i]==max &&a[i] != -1)
            {
                printf("-1");
                exit(0);
            }
            else if (a[i]>max && a[i] !=-1)
            {
                max = a[i];
                val = b[i];
            }

            
        }
        
    }

    printf("%d",val);



    
    

    
    
}