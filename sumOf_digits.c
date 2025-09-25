#include <stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{

    int number, temp, remainder, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {

        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }

    printf("sum of digits : %d\n", sum);
}