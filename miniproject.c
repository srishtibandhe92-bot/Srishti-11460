//Srishti Bandhe
//11460 BCA 1B
#include <stdio.h>

int main()
{
    int choice, repeat;
    double a, b, result;
    int i, power;
    double powResult;

    do
    {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Cube\n");
        printf("7. Power\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a / b;
                printf("Result = %.2lf\n", result);
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%lf", &a);
                result = a * a;
                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                result = a * a * a;
                printf("Result = %.2lf\n", result);
                break;

            case 7:
                printf("Enter base: ");
                scanf("%lf", &a);
                printf("Enter power: ");
                scanf("%d", &power);
                powResult = 1;
                for (i = 1; i <= power; i++)
                {
                    powResult = powResult * a;
                }
                printf("Result = %.2lf\n", powResult);
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);

    } while (repeat == 1);

    return 0;
}

