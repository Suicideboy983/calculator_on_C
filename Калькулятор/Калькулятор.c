#include <stdio.h>
#include <stddef.h>

int Addition(int a, int b, int* c)
{
    if (c == NULL) return 3;
    *c = a + b;
    return 0;
}

int Subtraction(int a, int b, int* c)
{
    if (c == NULL) return 3;
    *c = a - b;
    return 0;
}

int Multiplication(int a, int b, int* c)
{
    if (c == NULL) return 3;
    *c = a * b;
    return 0;
}

int Division(int a, int b, int* c)
{
    if (b == 0) return 2;
    if (c == NULL) return 3;
    *c = a / b;
    return 0;
}

int main()
{
    int check;
    int action;
    int q;
    int c;
    int x;
    int y;
    int z;
    do
    {
        check = printf("Enter first number: ");
        if (check < 0)
        {
            printf("Error!\n");
            return 1;
        }
        action = scanf("%d", &x);
        if (action != 1)
        {
            while (((c = getchar()) != EOF) && (c != '\n'));
        }
        check = printf("\n");
        if (check < 0)
        {
            printf("Error!\n");
            return 2;
        }
    } while (action != 1);
    do
    {
        check = printf("Enter second number: ");
        if (check < 0)
        {
            printf("Error!\n");
            return 3;
        }
        action = scanf("%d", &y);
        if (action != 1)
        {
            while (((c = getchar()) != EOF) && (c != '\n'));
        }
        check = printf("\n");
        if (check < 0)
        {
            printf("Error!\n");
            return 4;
        }
    } while (action != 1);
    check = printf("Enter number of operation:\n");
    if (check < 0)
    {
        printf("Error!\n");
        return 5;
    }
    check = printf("Addition - 1\nSubtraction - 2\nMultiplication - 3\nDivision - 4\n\n");
    if (check < 0)
    {
        printf("Error!\n");
        return 6;
    }
    do
    {
        check = printf("Enter number: ");
        if (check < 0)
        {
            printf("Error!\n");
            return 7;
        }
        action = scanf("%d", &z);
        if (action != 1)
        {
            while (((c = getchar()) != EOF) && (c != '\n'));
        }
    } while ((action != 1) && (z < 1) && (z > 4));
    if (printf("\n") < 0)
    {
        printf("Error!\n");
        return 8;
    }
    if (z == 1)
    {
        if (Addition(x, y, &q) != 0)
        {
            printf("Error!\n");
            return 9;
        }
    }

    else if (z == 2)
    {
        if (Subtraction(x, y, &q) != 0)
        {
            printf("Error!\n");
            return 10;
        }
    }

    else if (z == 3)
    {
        if (Multiplication(x, y, &q) != 0)
        {
            printf("Error!\n");
            return 11;
        }
    }

    else if (z == 4)
    {
        if (Division(x, y, &q) != 0)
        {
            check = printf("Error! You can\'t divide by zero!\n");
            if (check < 0)
            {
                printf("Error!\n");
                return 12;
            }
            return 13;
        }
    }
    if (printf("Result: %d\n", q) < 0)
    {
        printf("Error!\n");
        return 14;
    }
    return 0;
}