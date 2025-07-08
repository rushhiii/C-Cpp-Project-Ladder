#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // 🔹 Implicit Conversions (Widening)
    int a = 10;
    double b = a;  // int to double automatically
    printf("Implicit int to double: %d -> %.2lf\n", a, b);

    // 🔹 Explicit Conversions (Casting)
    float x = 5.5;
    int y = (int)x;  // drops decimal
    printf("Explicit float to int: %.2f -> %d\n", x, y);

    // 🔹 Integer Division vs Float
    int n1 = 7, n2 = 2;
    float result1 = n1 / n2;  // wrong: integer division
    float result2 = (float)n1 / n2;  // correct
    printf("Wrong division: %d / %d = %.2f (int division)\n", n1, n2, result1);
    printf("Correct division: (float)%d / %d = %.2f\n", n1, n2, result2);

    // 🔹 Char to Int and vice versa
    char ch = 'A';
    int ch_value = ch;
    char back = (char)(ch_value + 1);
    printf("Char '%c' -> ASCII %d -> back to '%c'\n", ch, ch_value, back);

    // 🔹 Converting Between Integer Sizes
    long big = 1000000;
    short small = (short)big; // may lose data
    printf("long to short: %ld -> %d\n", big, small);

    // 🔹 Double to Float (narrowing)
    double dval = 3.141592653589793;
    float fval = (float)dval;
    printf("Double to float: %.15lf -> %.7f\n", dval, fval);

    // 🔹 Use of sizeof() to understand type sizes
    printf("\nType Sizes:\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));

    return 0;
}
