#include <stdio.h>
#include <string.h>

int main()
{
	char s1[15], s2[15];
	int i, j, count1,count2, flag = 0,temp;
	scanf("%s%s", s1, s2);
	
	int n = strlen(s1);
	int a[n], b[n];
	
	if(strlen(s1) == strlen(s2)){
		for (i = 0; i < n; i++)
		{
			a[i] = -1;
			b[i] = -1;
		}
	for (i = 0; i < n; i++)
	{
		count1 = 1; count2 =1;
		for (j = i + 1; j < n; j++)
		{
			if (s1[i] == s1[j])
			{
				count1++;
				a[j] = 0;
			}
			if (s2[i] == s2[j])
			{
				count2++;
				b[j] = 0; 
			}
			
		}
		if (a[i] != 0)
			a[i] = count1;
		if (b[i] != 0)
			b[i] = count2;
	}
	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j < n; j++)
		{
			if (a[i]<a[j])
			{
				temp = a[j];
				a[j] = a[i]	;
				a[i] = temp;	
			}
			if (b[i]<b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for ( i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		flag = 1;
	}
	if(flag)
		printf("false");
	else
		printf("true");
	}
	else
	printf("false");

	return 0;
}