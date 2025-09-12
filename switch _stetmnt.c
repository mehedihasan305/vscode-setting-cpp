#include <stdio.h>

int main()
{
    float num;
    int choice;

    printf("Enter a number (1.0, 2.0, 3.0): ");
    scanf("%f", &num);

    choice = (int)num;

    switch (choice)
    {
    case 1:
        printf("You entered One\n");
        break;
    case 2:
        printf("You entered Two\n");
        break;
    case 3:
        printf("You entered Three\n");
        break;
    default:
        printf("Not matched!\n");
    }
}
