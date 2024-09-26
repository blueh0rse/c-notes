#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Welcome to Simple Calc v1.0!\n");

    int val1 = 0;
    int val2 = 0;
    int result = 0;

    printf("Type a number: ");
    scanf("%d", &val1);

    printf("Type a second number: ");
    scanf("%d", &val2);

    // Addition
    result = val1 + val2;
    printf("%d + %d = %d\n", val1, val2, result);

    // Substraction
    result = val1 - val2;
    printf("%d - %d = %d\n", val1, val2, result);

    // Multiplication
    result = val1 * val2;
    printf("%d * %d = %d\n", val1, val2, result);

    // Division
    result = val1 / val2;
    printf("%d / %d = %d\n", val1, val2, result);

    // Modulo
    result = val1 % val2;
    printf("%d mod %d = %d\n", val1, val2, result);

    return 0;
}
