//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-16: Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit or a special character.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-16: Will Check Whether It Is An Alphabet (UpperCase), An Alphabet (LowerCase), A Digit Or A Special Character...");

    // DATA INPUT...
    char character_UpAl_LowAl_Dig_SpChar;
    printf("\n\n");
    printf("Enter A Character, To Check, Whether It Is An Alphabet (Upper Case), An Alphabet (Lower Case), A Digit Or A Special Character: ");
    scanf("%c", &character_UpAl_LowAl_Dig_SpChar);

    printf("\n");
    printf("The Character Entered By You, Is: %c", character_UpAl_LowAl_Dig_SpChar);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether It Is An Alphabet (Upper Case), An Alphabet (Lower Case), A Digit Or A Special Character...\nRight...");
    printf("\n\n");

    printf("Hmm...\n");
    if (character_UpAl_LowAl_Dig_SpChar >= 65 && character_UpAl_LowAl_Dig_SpChar <= 90)
        printf("The Number Entered By Is \"Alphabet (Upper Case)\"...");
    else if (character_UpAl_LowAl_Dig_SpChar >= 97 && character_UpAl_LowAl_Dig_SpChar <= 112)
        printf("The Number Entered By Is \"Alphabet (Lower Case)\"...");
    else if (character_UpAl_LowAl_Dig_SpChar >= 48 && character_UpAl_LowAl_Dig_SpChar <= 57)
        printf("The Number Entered By Is \"Digit\"...");
    else
        printf("The Number Entered By Is \"Special Character\"...");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}