#include<stdio.h>

float add(float,float,float);
float sub(float,float,float);
void print(float);
void print_line(void);

int main()
{
    float n1,n2,n3;
    printf(" n1 : n2 : n3 ");
    scanf("%f%f%f",&n1,&n2,&n3);
    
    add(n1,n2 ,n3);
    sub(n1,n2,n3);
    
}

float add(float x,float y ,float z){
    print(x+y+z);
}
float sub(float x,float y , float z){
    if (x==y==z){
    printf("-1");
    print_line();}
    float max = x>=y && y>=z?x :y>=x && x>=z?y:z;
    float min = x>=y && y>=z?z :y>=z && z>=x?x:y;
    print(max-min);
    
}
void print_line(void){

    for (int i = 0; i < 10; i++)
    {
        printf("_");
    }
}
void print(float print){
    printf("\n%f\n",print);
    print_line();

}

