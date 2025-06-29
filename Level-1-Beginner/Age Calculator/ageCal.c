#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void clearInputBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 2:
        return isLeapYear(year) ? 29 : 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

bool isValidDate(int day, int month, int year)
{
    if (year < 1900 || month < 1 || month > 12)
        return false;
    if (day < 1 || day > getDaysInMonth(month, year))
        return false;
    return true;
}

int main()
{
    int birthDay, birthMonth, birthYear;
    time_t now = time(NULL);
    struct tm *current = localtime(&now);

    bool runAgain = true;
    char ans;

    printf("\n========= Welcome to AgeCal CLI =========\n");

    do
    {

        printf("Enter your birth date:\n");

        while (1)
        {
            printf("Day (1-31): ");
            scanf("%d", &birthDay);

            printf("Month (1-12): ");
            scanf("%d", &birthMonth);

            printf("Year (e.g., 2005): ");
            scanf("%d", &birthYear);

            if (!isValidDate(birthDay, birthMonth, birthYear))
            {
                printf("\nInvalid date. Please enter a real calendar date.\n");
                continue;
            }

            if ((birthYear > current->tm_year + 1900) ||
                (birthYear == current->tm_year + 1900 && birthMonth > current->tm_mon + 1) ||
                (birthYear == current->tm_year + 1900 && birthMonth == current->tm_mon + 1 && birthDay > current->tm_mday))
            {
                printf("You haven't been born yet! Try again.\n");
                continue;
            }

            break;
        }

        struct tm birthDate = {0}; // "struct" () is time component which holds all this, day, month, year, hours, etc.
        birthDate.tm_mday = birthDay;
        birthDate.tm_mon = birthMonth - 1;
        birthDate.tm_year = birthYear - 1900;

        time_t birthSeconds = mktime(&birthDate); // "birthDate" into seconds
        double seconds = difftime(now, birthSeconds);
        int totalDays = seconds / (60 * 60 * 24);

        int years = totalDays / 365;
        totalDays %= 365;
        int months = totalDays / 30; // approx.
        totalDays %= 30;

        printf("\nYou are approximately %d years, %d months, and %d days old.\n", years, months, totalDays);

        // Next Birthday Countdown
        struct tm nextBirthday = *current;
        nextBirthday.tm_mday = birthDay;
        nextBirthday.tm_mon = birthMonth - 1;
        nextBirthday.tm_year = current->tm_year;

        time_t nextBDaySeconds = mktime(&nextBirthday);
        if (difftime(nextBDaySeconds, now) < 0)
        {
            // If birthday has already passed this year, set for next year
            nextBirthday.tm_year += 1;
            nextBDaySeconds = mktime(&nextBirthday);
        }

        int daysUntilBirthday = (int)(difftime(nextBDaySeconds, now) / (60 * 60 * 24));

        printf("Days until your next birthday: %d days\n", daysUntilBirthday);
        printf("=====================================================\n");

        do
        {
            clearInputBuffer();
            printf("\nWould you like to calculate again? (y/n): ");
            int isChar = scanf("%c", &ans);
            // clearInputBuffer();
            if (isChar == 1 && ans == 'y')
            {
                printf("=====================================================\n");
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

        } while (1);

    } while (runAgain);

    printf("=====================================================\n");
    return 0;
}
