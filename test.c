/*#include<stdio.h>
int main(){

char ch;

printf("Enter any letter : ");
scanf("%c", &ch);

if(ch >= 'a' && ch <= 'z') 
printf("Small letter");

else if("ch >= 'A' && ch <= 'Z'")
printf("Capital letter");

else
printf("Not a letter");


} */

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

}
