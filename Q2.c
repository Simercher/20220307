# include <stdio.h>
# include <stdlib.h>

int main()
{
    int num = 0, count = 1, sum = 0, flag = 0;

    while (1 == 1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (num == 1)
        {
            printf("case%d: 1\n", count);
            count++;
        }else
        {
            for(int i = num; i > 0; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        sum += j;
                    }
                }
                // printf("%d\n", sum);
                if (sum == num)
                {
                    printf("case%d: %d\n", count, i);
                    count++;
                    flag = 1;
                    break;
                }
                sum = 0;
            }
            if (flag == 0)
            {
                printf("case%d: -1\n", count);
                count++;
            }
            sum = 0;
            flag = 0;
        }
    }

    return 0;
}