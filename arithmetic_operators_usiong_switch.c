#include <stdio.h>
  int main() {
    char choice;
    int n1, n2;
    float result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    switch (choice) {
        case '+':
            result = n1 + n2;
            printf("Result: %d + %d = %.0f\n", n1, n2, result);
            break;

        case '-':
            result = n1 - n2;
            printf("Result: %d - %d = %.0f\n", n1, n2, result);
            break;

        case '*':
            result = n1 * n2;
            printf("Result: %d * %d = %.0f\n", n1, n2, result);
            break;

        case '/':
            if (n2 != 0) {
                result = (float)n1 / n2;
                printf("Result: %d / %d = %.2f\n", n1, n2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (n2 != 0) {
                result = n1 % n2;
                printf("Result: %d %% %d = %.0f\n", n1, n2, result);
            } else {
                printf("Error: Modulus by zero is not possible.\n");
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}
