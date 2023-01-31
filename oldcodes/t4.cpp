#include<iostream>

using namespace std;

int c=55;

int main()
{
    int a , b,c ;
    cout<<"enter first number"<<endl;
    cin>>a;

    cout<<"enter second value "<<endl;
    cin>>b;

    cout<<"result of adddition 12"<<++a + ++b <<endl ;



    cout<<"global variable is "<<::c;
    return 0;

}