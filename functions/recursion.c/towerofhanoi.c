#include<stdio.h>
void toi(int n,char source ,char destination,char helper){
        if(n==0)
        return;

        toi(n-1,source,helper,destination);
        printf("moved from %c to %c \n",source,destination);
        toi(n-1,helper,destination,source);
        
}

int main() 
{
    int n;
    scanf("%d",&n);
    char a = 'A', b = 'B' ,c='C';
    toi(n, a,c,b);
    return 0;
}