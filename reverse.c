#include <stdio.h>
#include <math.h>
int main()
{

    int number, temp, r, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {

        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    printf("Reverse number = %d\n", sum);
}