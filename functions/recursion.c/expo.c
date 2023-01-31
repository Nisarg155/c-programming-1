#include<stdio.h>
int E(int n , int e)
{
    static int count = 1;
    if(count==e)
    return n;
    count++;
    return n*E(n,e);

}

int main() 
{
    int n,e;
    scanf("%d%d",&n,&e);
    printf("%d",E(n,e));
    return 0;
}