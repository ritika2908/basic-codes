#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arra[i][j]);
        }
    }

    for (int k = 0; k < n; k++)
    {
            int min = arr[k][0];
            for (j = k; j < size; j++)
            {
                
                if (arr[k][j] < min)
                {
                    min = arr[k][j];
                    index = j;
                    arr[index] = arr[i];
                    arr[i] = min;
                }
            }
        }

        
    }

    return 0;
}
