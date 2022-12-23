#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count, ind, max = 0;
        scanf("%d", &n);
        int card[n], freq[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &card[i]);
            freq[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (card[i] == card[j])
                {
                    count++;
                    freq[j] = 0;
                }
            }
            if (freq[i] != 0)
            {
                freq[i] = count;
                if (count > max)
                {
                    max = count ;
                    ind = i;
                }

            }
        }
        
        count = 0;
        for(int i = 0 ; i<n;i++)
        { 
            if(card[i]!= card[ind])
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
