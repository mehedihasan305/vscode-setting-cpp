#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c", &ch);

    // Check if input is a letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // Check if vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("vowel\n");
        }
        else
        {
            printf("consonant\n");
        }
    }
    else
    {
        printf("Invalid input. Please enter a letter.\n");
    }

    return 0;
}
