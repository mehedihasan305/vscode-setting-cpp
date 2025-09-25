#include <stdio.h>
#include <ctype.h>
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
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if (number == sum)
    {
        printf("Armstronge number");
    }
    else
    {
        printf("Not Armstrong number");
    }
    
}