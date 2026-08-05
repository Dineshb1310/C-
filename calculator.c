#include <stdio.h>

int main() {
    int a, b, choice;

    scanf("%d %d", &a, &b);
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("%d", a + b); break;
        case 2: printf("%d", a - b); break;
        case 3: printf("%d", a * b); break;
        case 4:
            if(b != 0)
                printf("%.2f", (float)a / b);
            else
                printf("Division by zero");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
