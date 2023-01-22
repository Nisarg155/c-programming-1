#include <stdio.h>

int main(void)
{
	// your code goes here
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int likes[n], comments[n], max = 0, index,flag = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&likes[i]);
			if (likes[i] > max)
			{
				max = likes[i];
				index = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &comments[i]);
		}
		for (int i = 0; i < n; i++)
		{
			if (likes[i] == max && index != i)
			{
				if (comments[i] > comments[index])
					{printf("%d\n", i + 1);
					flag = 1;
					break;
					}
				else{
					printf("%d\n", index + 1);
					flag = 1;
					break;
				}
			}
		}
		if(flag !=1)
		printf("%d\n",index +1);
		
	}
	return 0;
}
