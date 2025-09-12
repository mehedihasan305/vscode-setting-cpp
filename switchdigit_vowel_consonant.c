#include <stdio.h>

int main() {
    int digit;

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    switch (digit) {
        case 0:
            printf("You entered Zero.\n");
            break;
        case 1:
            printf("You entered One.\n");
            break;
        case 2:
            printf("You entered Two.\n");
            break;
        case 3:
            printf("You entered Three.\n");
            break;
        case 4:
            printf("You entered Four.\n");
            break;
        case 5:
            printf("You entered Five.\n");
            break;
        case 6:
            printf("You entered Six.\n");
            break;
        case 7:
            printf("You entered Seven.\n");
            break;
        case 8:
            printf("You entered Eight.\n");
            break;
        case 9:
            printf("You entered Nine.\n");
            break;
        default:
            printf("Not a digit (0-9)!\n");
    }

   

}
