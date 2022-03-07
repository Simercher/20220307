# include <stdio.h>
# include <stdlib.h>

int main (){
    int N = 0, count = 0, *arr, size = 0;

    scanf("%d", &N);

    for(int k = 0; k < N; k++)
    {
        scanf("%d", &size);
        arr = (int *)malloc(size * sizeof(int));
        for(int z = 0; z < size; z++)
        {
            scanf("%d", &arr[z]);
        }
        for(int i = 1; i < size; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(arr[i] >= arr[j])
                {
                    // printf("%d %d\n", i, j);
                    count++;
                }
            }
        }
        printf("%d\n", count);
        count = 0;
        free(arr);
    }

    return 0;
}