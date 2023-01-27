#include<stdio.h>
#include<math.h>
int main(){
    int sum,i,n;
    i = 1;
    sum = 0;

    printf("enter the number ");
    scanf("%d",&n);
    while(i<=n){
        sum += i;
        i += 1;


    }
    printf("the sum of natural number is  %d",sum);
    return 0;

}