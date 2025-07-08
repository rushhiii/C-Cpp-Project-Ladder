#include <stdio.h>     // for printf()
#include <limits.h>    // for INT_MAX, CHAR_MAX, etc.
#include <float.h>     // for FLT_MAX, DBL_MAX
#include <stdbool.h>   // for bool, true, false (C99+)

int main() {
    // 🔢 Basic Integer Types
    int age = 20;
    short int si = -32768;
    long int li = 1000000000;
    unsigned int u_age = 25;

    // 🔡 Character Type
    char initial = 'R';

    // 🔠 String (character array)
    char name[] = "Rushi";

    // 🔢 Floating Point Types
    float height = 5.9f;     // single precision
    double weight = 68.2345; // double precision
    long double pi = 3.141592653589793238L;

    // ✅ Boolean Type (needs <stdbool.h>)
    bool is_student = true;

    // 🧠 Memory Sizes (in bytes)
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(short) = %zu bytes\n", sizeof(short));
    printf("sizeof(long) = %zu bytes\n", sizeof(long));
    printf("sizeof(unsigned int) = %zu bytes\n", sizeof(unsigned int));
    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(long double) = %zu bytes\n", sizeof(long double));
    printf("sizeof(bool) = %zu bytes\n\n", sizeof(bool));

    // 🖨️ Printing Variables
    printf("Age: %d\n", age);
    printf("Unsigned Age: %u\n", u_age);
    printf("Short Int: %hd\n", si);
    printf("Long Int: %ld\n", li);
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);
    printf("Height: %.2f ft\n", height);
    printf("Weight: %.4lf kg\n", weight);
    printf("Pi (long double): %.15Lf\n", pi);
    printf("Is Student: %s\n\n", is_student ? "true" : "false");

    // 📈 Value Limits
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MAX: %e\n", DBL_MAX);

    return 0;
}
