#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

#define BUFFER_SIZE 80

void fundamentals(void) {
    /* Version 2: Measuring Strings */
    printf("*** Start of Measuring Strings Demo ***\n");
    
    char str[BUFFER_SIZE];

    do {
        // Ask user to input a string
        printf("Type a string (q - to quit):\n");
        fgets(str, BUFFER_SIZE, stdin);
        str[strcspn(str, "\n")] = '\0'; // remove newline

        if (strcmp(str, "") == 0 || strspn(str, " ") == strlen(str)) {
            printf("Warning: blank input\n");
        } else if (strcmp(str, "q") != 0) {
            printf("The length of \"%s\" is %lu characters\n", str, strlen(str));
        }

    } while (strcmp(str, "q") != 0);

    printf("--- End of Measuring Strings ---\n\n");
}




    
    
    
    

    
        
        
        
            
        

        
        
        
        
        
        

        
        
        
                

            

            
     
    

    



