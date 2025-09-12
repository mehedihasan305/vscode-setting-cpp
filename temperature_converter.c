#include <stdio.h>

int main()
{
    int choice;
    double temp, result;

    printf("===== Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Exit\n");

    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Celsius → Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        result = (temp * 9 / 5) + 32;
        printf("Temperature: %.2lf °C = %.2lf °F\n", temp, result);
        break;

    case 2: // Fahrenheit → Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        result = (temp - 32) * 5 / 9;
        printf("Temperature: %.2lf °F = %.2lf °C\n", temp, result);
        break;

    case 3: // Celsius → Kelvin
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        result = temp + 273.15;
        printf("Temperature: %.2lf °C = %.2lf K\n", temp, result);
        break;

    case 4: // Kelvin → Celsius
        printf("Enter temperature in Kelvin: ");
        scanf("%lf", &temp);
        result = temp - 273.15;
        printf("Temperature: %.2lf K = %.2lf °C\n", temp, result);
        break;

    case 5: // Exit
        printf("Exiting program. Goodbye!\n");
        break;

    default:
        printf("Invalid choice! Please enter 1-5.\n");
    }

    return 0;
}
