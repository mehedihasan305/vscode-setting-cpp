#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    (marks >= 30) ? printf("Pass\n") : printf("Fail\n");

    return 0;
}