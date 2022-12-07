#include <stdio.h>

int main()
{
    int i = 0, j, count = 0;
    float a[100], b[100], sum = 0, temp, max = 0;
    do
    {
        scanf("%f", &a[i]);
        if (a[i] == -1)
        {
            break;
        }
        else
        {
            sum += a[i];
            b[i] = -1;
            count++;
        }
        i++;
    } while (1);

    float mean, median;
    mean = sum / count;

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (count % 2 != 0)
    {
        i = (count + 1) / 2.0 - 1;

        median = a[i];
    }
    else
    {
        i = count / 2;
        median = (a[i - 1] + a[i]) / 2.0;
    }
    printf("%.2f %.2f", mean, median);

    int frequency, index, rep = 0;

    for (i = 0; i < count; i++)
    {
        frequency = 1;
        for (j = i + 1; j < count; j++)
        {
            if (a[i] == a[j])
            {
                frequency++;
            }
        }
        b[i] = frequency;

        if (b[i] > max)
        {
            max = b[i];
            index = i;
        }
    }
    for (i = 0; i < count; i++)
    {
        if (b[i] == max)
        {
            rep++;
        }
    }

    if (count > 1)
    {
        if (rep > 1)
        {
            printf(" -1.00");
        }
        else
            printf(" %.2f", a[index]);
    }
    else
    {
        printf(" -1.00");
    }
    return 0;
}