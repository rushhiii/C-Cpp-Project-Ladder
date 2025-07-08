#include <stdio.h>

int main() {
    int age;
    float gpa;
    char initial;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your first initial: ");
    scanf(" %c", &initial); // note the space before %c!

    printf("\n--- Your Info ---\n");
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Initial: %c\n", initial);

    return 0;
}
