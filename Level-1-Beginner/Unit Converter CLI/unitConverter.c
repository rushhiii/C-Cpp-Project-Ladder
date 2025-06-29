#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void clearInputBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

void convertLength()
{
    double value;
    char from[5], to[5];

    printf("Enter value: ");
    scanf("%lf", &value);
    clearInputBuffer();

    printf("Convert from (km, m, cm, mi, ft, in): ");
    scanf("%s", from);
    clearInputBuffer();

    printf("Convert to (km, m, cm, mi, ft, in): ");
    scanf("%s", to);
    clearInputBuffer();

    // Convert input to meters first
    double meters;
    // Use switch for 'from' unit
    if (0)
    {
    }
    else if (strcmp(from, "km") == 0)
        meters = value * 1000;
    else if (strcmp(from, "m") == 0)
        meters = value;
    else if (strcmp(from, "cm") == 0)
        meters = value / 100;
    else if (strcmp(from, "mi") == 0)
        meters = value * 1609.34;
    else if (strcmp(from, "ft") == 0)
        meters = value * 0.3048;
    else if (strcmp(from, "in") == 0)
        meters = value * 0.0254;
    else
    {
        printf("Unknown 'from' unit.\n");
        return;
    }

    double result;
    // Use switch for 'to' unit
    if (0)
    {
    }
    else if (strcmp(to, "km") == 0)
        result = meters / 1000;
    else if (strcmp(to, "m") == 0)
        result = meters;
    else if (strcmp(to, "cm") == 0)
        result = meters * 100;
    else if (strcmp(to, "mi") == 0)
        result = meters / 1609.34;
    else if (strcmp(to, "ft") == 0)
        result = meters / 0.3048;
    else if (strcmp(to, "in") == 0)
        result = meters / 0.0254;
    else
    {
        printf("Unknown 'to' unit.\n");
        return;
    }

    printf("Result: %.2f %s\n", result, to);
}

void convertTemperature()
{
    double temp;
    char from[3], to[3];

    printf("Enter temperature: ");
    scanf("%lf", &temp);
    clearInputBuffer();

    printf("Convert from (C, F, K): ");
    scanf("%s", from);
    clearInputBuffer();

    printf("Convert to (C, F, K): ");
    scanf("%s", to);
    clearInputBuffer();

    double result;

    // Use switch for 'from' unit
    if (strcmp(from, to) == 0)
    {
        result = temp;
    }
    else if (strcmp(from, "C") == 0)
    {
        if (strcmp(to, "F") == 0)
            result = (temp * 9 / 5) + 32;
        else if (strcmp(to, "K") == 0)
            result = temp + 273.15;
        else
        {
            printf("Invalid conversion.\n");
            return;
        }
    }
    else if (strcmp(from, "F") == 0)
    {
        if (strcmp(to, "C") == 0)
            result = (temp - 32) * 5 / 9;
        else if (strcmp(to, "K") == 0)
            result = (temp - 32) * 5 / 9 + 273.15;
        else
        {
            printf("Invalid conversion.\n");
            return;
        }
    }
    else if (strcmp(from, "K") == 0)
    {
        if (strcmp(to, "C") == 0)
            result = temp - 273.15;
        else if (strcmp(to, "F") == 0)
            result = (temp - 273.15) * 9 / 5 + 32;
        else
        {
            printf("Invalid conversion.\n");
            return;
        }
    }
    else
    {
        printf("Invalid conversion.\n");
        return;
    }

    printf("Result: %.2f %s\n", result, to);
}

void convertCurrency()
{
    double amount;
    char from[4], to[4];

    printf("Enter amount: ");
    scanf("%lf", &amount);
    clearInputBuffer();

    printf("Convert from (INR, USD, CAD, EUR): ");
    scanf("%s", from);
    clearInputBuffer();

    printf("Convert to (INR, USD, CAD, EUR): ");
    scanf("%s", to);
    clearInputBuffer();

    // Hardcoded exchange rates to USD
    double toUSD;
    // Use switch for 'from' currency
    if (0)
    {
    }
    else if (strcmp(from, "INR") == 0)
        toUSD = amount / 83.0;
    else if (strcmp(from, "USD") == 0)
        toUSD = amount;
    else if (strcmp(from, "CAD") == 0)
        toUSD = amount / 1.35;
    else if (strcmp(from, "EUR") == 0)
        toUSD = amount / 0.92;
    else
    {
        printf("Unknown 'from' currency.\n");
        return;
    }

    double result;
    // Use switch for 'to' currency
    if (0)
    {
    }
    else if (strcmp(to, "INR") == 0)
        result = toUSD * 83.0;
    else if (strcmp(to, "USD") == 0)
        result = toUSD;
    else if (strcmp(to, "CAD") == 0)
        result = toUSD * 1.35;
    else if (strcmp(to, "EUR") == 0)
        result = toUSD * 0.92;
    else
    {
        printf("Unknown 'to' currency.\n");
        return;
    }

    printf("Result: %.2f %s\n", result, to);
}

int main()
{

    bool runAgain = true;
    char ans;
    printf("======== Welcome to the Unit Converter CLI! =========\n");

    do
    {
        int catChoice;
        int isInt;

        printf("\n=====================================================\n");
        // printf("======== Welcome to the Unit Converter CLI! =========\n");
        printf("Select a conversion category:\n"
               "1. Length - (km, m, cm, mi, ft, in)\n"
               "2. Weight\n"
               "3. Temperature - (°C, °F, K)\n"
               "4. Currency - (INR, USD, CAD, EUR)\n");

        do
        {
            printf("\nEnter your choice (1-4): ");
            isInt = scanf("%d", &catChoice);

            if (isInt != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                catChoice = 0;
            }
            else if (catChoice < 1 || catChoice > 4)
            {
                printf("Please enter a number between 1 and 4.\n");
                clearInputBuffer();
            }

        } while (catChoice < 1 || catChoice > 4);

        printf("\n");

        switch (catChoice)
        {
        case 1:
            convertLength();
            break;
        case 2:
            printf("Weight converter coming soon...\n");
            break;
        case 3:
            convertTemperature();
            break;
        case 4:
            convertCurrency();
            break;
        default:
            printf("Something went wrong.\n");
        }

        printf("=====================================================");
        do
        {
            printf("\nWould like to convert again? (y/n): ");
            int isChar = scanf("%c", &ans);
            clearInputBuffer();
            if (isChar == 1 && ans == 'y')
            {
                // runAgain = true;
                break;
            }
            else if (isChar == 1 && ans == 'n')
            {
                runAgain = false;
                break;
            }
            else
            {
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (1); // can't do 0, that would mean false

    } while (runAgain);

    printf("\n=====================================================\n");
    printf("exsited Converter.");
    return 0;
}
