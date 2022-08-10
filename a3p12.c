//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-12: Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-12: Will Check Whether A Given Alphabet Is In Uppercase Or Lowercase...");

    // DATA INPUT...
    char char_Upp_Low;
    printf("\n\n");
    printf("Enter An Alphabet, To Check, Whether It Is In Uppercase Or Lowercase: ");
    scanf("%c", &char_Upp_Low);

    printf("\n");
    printf("The Alphabet Entered By You, Is: %c", char_Upp_Low);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether A Given Alphabet Is In Uppercase Or Lowercase...\nRight...");
    printf("\n\n");

    printf("Hmm...\n");
    if ('A' >= char_Upp_Low && 'Z' <= char_Upp_Low)
        printf("The Number Entered By Is In \"Upper Case\"...");
    else
        printf("The Number Entered By Is In \"Lower Case\"...");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}