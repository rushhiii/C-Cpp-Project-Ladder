#include <stdio.h>


int main() {
    printf("\n=====================================================\n");
    printf("======== Welcome to the Unite Converter CLI! ========\n"); // CLI - Command Line Interface
    printf("Select a conversion category:\n"
              "1. Length - (km, m, cm, mi, ft, in)\n"
              "2. Weight\n"
              "3. Temperature - (°C, °F, K)\n"
              "4. Currency - (INR, USD, CAD, EUR)\n");

    // int catChoice;
    
    // printf("Enter your choice (1-4): ");
    // scanf("%d", &catChoice);

    // while (catChoice < 1 || catChoice > 4) {
    //     printf("Invalid input. Please enter a number between 1 and 4: ");
    //     scanf("%d", &catChoice);
    //     // while(getchar() != '\n'); // Clear the input buffer
    // }

    int catChoice;
    int rlt;

    do {
        printf("Enter your choice (1-4): ");
        rlt = scanf("%d, &catChoice");
        
        // scanf("");

    } while (catChoice < 1 || catChoice > 4);

    printf("You selected category %d which is \n", catChoice);


    printf("=====================================================\n");
    return 0;
}


// void convertLength();       // km <-> mi <-> m <-> cm etc.
// void convertTemperature();  // °C <-> °F <-> K
// void convertCurrency();     // INR <-> USD <-> CAD (hardcoded rates)
