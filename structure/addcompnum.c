#include<stdio.h>
typedef struct {
    float real,img; 
} complex;
complex add(complex c[] )
{
    float x = c[0].real + c[1].real;
    float y = c[0].img + c[1].img;
    complex temp;
    temp.real = x;
    temp.img = y;
    return temp;
};



int main() 
{
    complex c[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%f%f",&c[i].real,&c[i].img);
    }
    complex temp = add(c);
    printf("The sum of two complex number is \nreal part : %f \nimaginary part : %f",temp.real,temp.img);
    
    return 0;
}