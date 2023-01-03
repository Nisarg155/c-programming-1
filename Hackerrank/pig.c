#include <stdio.h>
void convert_to_pig_latin(char a[],int k)
{
    int s = 0;
    int ind = 0;
    int start = 0;
    int i = 0;
    char piglatin[80];

    for (; a[i] != '\0'; i++, s++)
    
    {
        
        char temp = a[i];

        for (; a[i] != ' ' && a[i] != '\0' && a[i] != '.'; i++)
        {
            s++;
        }

        for (; start < s - 1 ; start++ , ind++) {
            piglatin[ind] = a[start +1];
        }

        piglatin[ind] = temp;
        piglatin[ind+1] = 'l';
        piglatin[ind+2] = 'y';
        piglatin[ind + 3] = ' ';
        ind += 4;
        start = s + 1;
    }
    if(k==1){
     piglatin[ind-1] = '.';
    piglatin[ind] = '\0';
    }
    else
    piglatin[ind] = '\0';
    printf("%s\n", piglatin);
}

int main()
{
    char c[10][1000],j;
    int i=0,z=0;
    while( gets(c[i])!='\0' )
    {
        i++;
    }
    if(i>1)
        z=1;
   for(j=0;j<i;j++)
    {
       convert_to_pig_latin(c[j],z);
    }

return 0;
}