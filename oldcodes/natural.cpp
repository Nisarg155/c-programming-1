#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number "<<endl;
    cin>>b;
    a = 1;
    c = 0;
    while (a<=b)
    {
        c = a + c;
        a = a +1;

    }
    cout<<"the sum of "<<b<<"natural number is"<<c;
    return 0;

    
}