#include<stdio.h>
#include<string.h>

int main()
{
    char data[100] = "AB" ,data1[100] = "IJ";
    strcpy(&data[3],data1);
    printf("%s",data); 
}