#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selected_op;
    double a, b, result;

    printf("Calculator Console App\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n\n");

    printf("Please type the number of the operation you want to perform: ");
    scanf("%d", &selected_op);
    printf("Your selected option: %d\n", selected_op);
    if (selected_op == 5) {
        printf("Exiting calculator...\n");
        return 0;
    }
    while(selected_op != 5){
        if (selected_op >= 1 && selected_op <= 4) {
        printf("Enter the first number: ");
        scanf("%lf", &a);
        printf("Enter the second number: ");
        scanf("%lf", &b);

        switch (selected_op) {
            case 1:
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result = a / b;
                printf("Result: %.2lf\n", result);
                break;
        }
    } else {
        printf("Invalid selection.\n");
    }

        printf("Calculator Console App\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n\n");

        printf("Please type the number of the operation you want to perform: ");
        scanf("%d", &selected_op);
        printf("Your selected option: %d\n", selected_op);
    }
    if (selected_op == 5) {
        printf("Exiting calculator...\n");
        return 0;
    }

    return 0;
}
