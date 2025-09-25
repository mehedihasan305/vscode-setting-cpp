#include <stdio.h>
#include <math.h>

int main()
{
    int number, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("%d is not prime\n", number);
        return 0;
    }

    for (i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}
