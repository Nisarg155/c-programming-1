#include<stdio.h>
int fun(int x)
{
	static int call=0;
	call++;
	x++;
	if(x<5)
	{
		fun(x);
		fun(x);
		fun(x);
	}
	return call;
}
int main()
{
	int value;
	value=fun(0);
	printf("%d",value);
	return 0;
}