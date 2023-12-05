// Disable warning for the use of certain functions in MSVC
#define _CRT_SECURE_NO_WARNINGS

// Define a constant for buffer size
#define BUFFER_SIZE 80

// Include the header file for the converting module
#include "converting.h"

// Version 1 (V1) of the converting function
void converting(void) {
    // Print a header message for the start of the demo
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare a character array to store input string
    char intString[BUFFER_SIZE];

    // Declare a variable to store the converted integer
    int intNumber;

    // Start a do-while loop to repeatedly get user input until 'q' is entered
    do {
        // Prompt the user to type an integer numeric string
        printf("Type an int numeric string (q - to quit):\n");

        // Read a line of input into intString using fgets
        fgets(intString, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input string
        intString[strlen(intString) - 1] = '\0';

        // Check if the entered string is not equal to 'q'
        if (strcmp(intString, "q") != 0) {
            // Convert the string to an integer using atoi
            intNumber = atoi(intString);

            // Print the converted number
            printf("Converted number is %d\n", intNumber);
        }

    // Continue the loop if the entered string is not 'q'
    } while (strcmp(intString, "q") != 0);

    // Print a closing message for the end of the demo
    printf("*** End of Converting Strings to int Demo ***");
}
//V2
printf("*** Start of Converting Strings to double Demo ***\n");
char doubleString[BUFFER_SIZE];
double doubleNumber;
do{
    printf("Type the double numeric string (q - to quit) : \n");
    fgets(doubleString, BUFFER_SIZE,stdin);
    doubleString[strlen(doubleString) - 1] = '\0';
    if ((strcmp(doubleString, "q") != 0 )){
        doubleNumber = atof(doubleString);
        printf("Converted number is %f\n",doubleNumber);
    }
}while(strcmp(doubleString,  "q" != 0));
printf("***End of Converting Strings to double Demo ***\n\n");
