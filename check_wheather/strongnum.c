#include<stdio.h>
int fact(int num)
{
    int ret;
    switch (num)
    {
    case 1:
    ret = 1;
        break;
    case 2:
    ret = 2;
        break;
    case 3:
    ret = 6;
        break;
    case 4:
    ret = 24;
        break;
    case 5:
    ret = 120;
        break;
    case 6:
    ret = 720;
        break;
    case 7:
    ret = 5040;
        break;
    case 8:
    ret = 40320;
        break;
    case 9:
    ret = 362880;
        break;
    default :
    ret = 0;
    break;
    }
    return ret;
}

int main() 
{
    int num,sum  = 0,q;
    scanf("%d",&num);

    q = num;
    while (q)
    {
        sum += fact(q%10);
        q/= 10;
    }
    if(sum == num)
    printf("YES\n");
    else
    printf("NO\n");
    
    

    return 0;
}