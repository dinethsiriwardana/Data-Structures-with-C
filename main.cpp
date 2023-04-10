#include <stdio.h>

int main() {

    int number;
    char c;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("You entered: %c\n", c);
    return 0;

}
