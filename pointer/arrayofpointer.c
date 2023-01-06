#include<stdio.h>
#include<string.h>


int main() 
{
    char *p[4] ;
    char data[4][20];
    for(int i = 0;i<4 ;i++)
    {
        p[i] = data[i]; // assigning the value to pointer 
    }

    // reading the string using pointer and data
    for(int i = 0;i< 4 ;i++)
    {
        if(i<2)
        {
            scanf("%s%*c",data[i]);
        }
        else
        {
            scanf("%s%*c",p[i]);
        }
    }

    // changing first and last character using pointer
    int len;
    char temp; 
    for ( int i = 0; i < 4 ; i++)
    {
        len = strlen(p[i]);
        len--;
        temp = *(*(p+i));
        *(*(p + i)) = *(*(p+i) + len);
        *( *(p + i ) + len) = temp; 
    }
    // swamping the pointer based on character of all string in ascending sorted order
    
    char *temp_pointer = NULL ; // to store the pointer 
    for (int i = 0; i < 4; i++)
    {
        for (int  j = i+1; j < 4; j++)
        {
            if(p[i][0]>p[j][0])
            {
                    temp_pointer = p[i];
                    p[i] = p[j];
                    p[j] = temp_pointer;
            }
        }
        
    }
    

    // printing the sorted array using pointer and data array
    printf("\n");
    for (int i = 0; i < 4; i++) // to print using the pointer 
    {
        printf("%s\n",p[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) // to print using the data stirng
    {
        printf("%s\n",data[i]);
    }
    
    
    
    return 0;
}