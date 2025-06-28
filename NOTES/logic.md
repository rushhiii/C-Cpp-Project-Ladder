
## Check if the userinput datatype is valid to what program whould expect

take a look at these code:
```c
    do {
        printf("Enter your choice (1-4): ");
        result = scanf("%d", &catChoice);

        // If scanf failed (e.g., input was a letter), clear input buffer
        if (result != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\\n'); // clear buffer
            catChoice = 0; // reset choice to stay in loop
        } else if (catChoice < 1 || catChoice > 4) {
            printf("Please enter a number between 1 and 4.\n");
        }

    } while (catChoice < 1 || catChoice > 4);
```

or this helper funtion:

```c
int getIntInRange(int min, int max) {
    int x, result;
    do {
        printf("Enter a number (%d–%d): ", min, max);
        result = scanf("%d", &x);
        if (result != 1 || x < min || x > max) {
            printf("Invalid!\n");
            clearInputBuffer();
        }
    } while (result != 1 || x < min || x > max);
    return x;
}
```

