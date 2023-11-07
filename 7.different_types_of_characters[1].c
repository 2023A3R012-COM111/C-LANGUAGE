#include<stdio.h>
 int main ()
 {
     char singleQuote = '\''; // Single quote character
     printf("Single Quote: %c\n", singleQuote);

    char doubleQuote = '\"'; // double quote character
     printf("Double Quote: %c\n", doubleQuote);

     char backslash = '\\';// Backslash character
     printf("Backslash: %c\n", backslash);

     printf ("Hello\nWorld\n"); // New line (line feed) character

     printf("Tabbed\tHii\tHow\tare\tyou\t\n");

     printf("Vertical\vTab\vCharacter\vDisplay\n");

     printf("remove a\b char\n");
    
     printf("Carriage\rReturn\n");
    
     printf("Form\fFeed\n");

     printf("Beep\a\n");
    
     char nullChar =  '\0';
     printf("Null Character: %c\n", nullChar);
    
     char questionMark = '\?';
     printf("Question Mark: %c\n", questionMark);
     
     char hexvalue = '\x17';
     printf("Hex Value: %c\n",hexvalue);
    
     return 0;
 }

