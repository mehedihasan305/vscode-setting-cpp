#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int number, sum = 0, temp, remainder;

    printf("Enter any number : ");
    scanf("%d", &number);
    temp = number;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    if (number == sum)
    {
        printf("Palindrome number");
    }
    else
    {

        printf("Not palindrome number");
    }
}