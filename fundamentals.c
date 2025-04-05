#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

#define BUFFER_SIZE 80

void fundamentals(void) {
    /* Version 2: Measuring Strings */
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE];
    do {
        // Ask user to input a string
        printf("Type a string (q to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);

        if (strcmp(buffer2, "q\n") != 0) {
            buffer2[strlen(buffer2) - 1] = '\0'; // Remove newline

             if (strcmp(str, "") == 0 || strspn(str, " ") == strlen(str)) {
                printf("Warning: blank input\n");
            } else if (strcmp(str, "q") != 0) {
            // Show the length of the input string
            printf("The length of \"%s\" is %d characters\n", buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q\n") != 0);
    printf("*** End of Measuring Strings Demo ***\n\n");
}



    
    
    
    

    
        
        
        
            
        

        
        
        
        
        
        

        
        
        
                

            

            
     
    

    



