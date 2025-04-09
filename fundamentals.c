#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

#define BUFFER_SIZE 80

void fundamentals(void)
   /* Version 1: Indexing Strings */
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    do {
        // Ask user to input a string
        printf("Type a non-empty string (q to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove newline

        if (strcmp(buffer1, "q") != 0) {
            // Ask for character index
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';

            position = atoi(numInput);
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1; // Limit to valid range
                printf("Too big... Position reduced to max. available\n");
            }

            // Show character at given position
            printf("The character found at %d position is '%c'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);
    printf("*** End of Indexing Strings Demo ***\n\n");

/* Version 2: Measuring Strings */
    printf("*** Start of Measuring Strings ***\n");
    char buffer2[BUFFER_SIZE];  // Buffer to store user input

    do {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);  // Read input from user including newline

        // Check if the input is not "q\n" (user didn't choose to quit)
        if (strcmp(buffer2, "q\n") != 0) {
            
            // Check for blank input (either only newline or all spaces/newline)
            if (strcmp(buffer2, "\n") == 0 || strspn(buffer2, " \n") == strlen(buffer2)) {
                printf("Warning: blank input\n");
            } else {
                buffer2[strlen(buffer2) - 1] = '\0';  // Remove the trailing newline character
                printf("The length of \"%s\" is %d characters\n", buffer2, (int)strlen(buffer2));  // Display string length
            }
        }
    } while (strcmp(buffer2, "q\n") != 0);  // Loop until the user enters "q"

    printf("*** End of Measuring Strings ***\n\n");
 /* Version 3: Copying Strings */
    printf("*** Start of Copying Strings Demo ***\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do {
        destination[0] = '\0'; // Reset destination to empty
        printf("Destination string is reset to empty\n");
        // Ask user for source string
        printf("Type the source string (q to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0'; // Remove newline

        if (strcmp(source, "q") != 0) {
            // Copy source to destination and show the result
            strcpy(destination, source);
            printf("New destination string is '%s'\n", destination);
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");
}



    
    
    
    

    
        
        
        
            
        

        
        
        
        
        
        

        
        
        
                

            

            
     
    

    



