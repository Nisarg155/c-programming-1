#include<iostream>
using namespace std;

void sunny();
int glo = 55;

int main()
{
    char glo ='h'; 
        cout<<  glo;
    sunny();
    bool t = true;
    cout<<"\nIS " <<t;
    return 0;


}
void sunny()
{
    cout<<"\n"<<glo;
}