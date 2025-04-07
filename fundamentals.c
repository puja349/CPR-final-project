#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

#define BUFFER_SIZE 80

void fundamentals(void) {
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
}


    
    
    
    

    
        
        
        
            
        

        
        
        
        
        
        

        
        
        
                

            

            
     
    

    



