#include<stdio.h>
#include<ctype.h>

int main() 
{
	char ch ;
	scanf("%c",&ch);
	if (isupper(ch))
	{
		printf("%c",tolower(ch));
	}
	else
	{
		printf("%c",toupper(ch));
	}
	
	return 0;
}