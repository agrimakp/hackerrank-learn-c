#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isEven(int i)
{
    return i % 2 == 0;
}

void printNumber(int number)
{
    if (number == 0)
    {
        printf("zero\n");
    }
    else if (number == 1)
    {
        printf("one\n");
    }
    else if (number == 2)
    {
        printf("two\n");
    }
    else if (number == 3)
    {
        printf("three\n");
    }
    else if (number == 4)
    {
        printf("four\n");
    }
    else if (number == 5)
    {
        printf("five\n");
    }
    else if (number == 6)
    {
        printf("six\n");
    }
    else if (number == 7)
    {
        printf("seven\n");
    }
    else if (number == 8)
    {
        printf("eight\n");
    }
    else if (number == 9)
    {
        printf("nine\n");
    }
    else
    {
        printf("Greater than 9\n");
    }
}

int main()
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
    // Complete the code.

    for (i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            printNumber(i);
        }
        else
        {
            if (isEven(i))
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}
