#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    scanf("%d", &count);

    int *array = (int *)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        scanf("%d", array + i);
    }

    /*  logic to reverse the array. */

    for (int i = 0; i < count / 2; i++)
    {
        int end = count - 1 - i;
        int temp = array[i];
        array[i] = array[end];
        array[end] = temp;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(array + i));
    }

    free(array);
    return 0;

}
