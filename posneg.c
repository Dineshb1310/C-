#include <stdio.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("You entered a positive number.");
    } else if (num < 0) {
        printf("You entered a negative number.");
    } else {
        printf("You entered zero.");
    }

    return 0;
}
