#include<iostream>

using namespace std;

int main()
{
    float a,b;
    cout<<"enter first number :"<<endl;
    cin>>a;

    cout<<"enter second number:"<<endl;
    cin>>b;

    cout<<"if a is greater "<<(a>b)<<endl;

    cout<<"if b is greater "<<(b>a)<<endl;

    cout<<"if 0 or 1 \n"<<((a>b) && (b>a));

    return 0;



}