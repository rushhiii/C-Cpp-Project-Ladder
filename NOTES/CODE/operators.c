#include <stdio.h>

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Increment and Decrement
    int x = 5;
    printf("Original x: %d\n", x);
    printf("Increment x: %d\n", ++x);
    printf("Decrement x: %d\n", --x);

    // Assignment Operators
    int y = 10;
    y += 5; printf("y += 5: %d\n", y);
    y -= 2; printf("y -= 2: %d\n", y);
    y *= 3; printf("y *= 3: %d\n", y);
    y /= 4; printf("y /= 4: %d\n", y);
    y %= 3; printf("y %%= 3: %d\n", y);

    // Comparison Operators
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n", x <= y);

    // Logical Operators
    printf("x < 10 && y < 10: %d\n", x < 10 && y < 10);
    printf("x < 10 || y < 2: %d\n", x < 10 || y < 2);
    printf("!(x < 10): %d\n", !(x < 10));

    return 0;
}
