#include<stdio.h>
#include<math.h>
#define pi 3.14159265
void table(double (*p)())
{
        double angle = 0;
        for (int i = 0; i <=4 ;i++)
        {
            if(i == 2)
            {
                printf("Angle = 45 and value is  %.6lf \n",(*p)( 45 * pi / 180 ));
            }
            else{
                printf("Angle = %.0lf and value is %.6lf \n",angle,(*p)(angle * pi/180));
                angle += 30;
            }
        }
        
}

int main() 
{
    double (*p)()  = NULL;
    table(cos);
    table(sin);
    table(tan);
    return 0;
}