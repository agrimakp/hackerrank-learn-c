#include <stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int n;
    printf("number of rows: ");
    scanf("%d", &n);

    int length = (n * 2 - 1);
    for (int row = 0; row < length; row++)
    {
        // printf("%d\n", row);
        for (int column = 0; column < length; column++)
        {
            // now we are at position (row, column)
            int distance = min(row, column);
            // calculate min distance from this position to board corners

            distance = min(distance, length - row - 1);
            distance = min(distance, length - column - 1);

            // print position

            printf("%d ", n - distance);
        }
        printf("\n");
    }

    return 0;
}
