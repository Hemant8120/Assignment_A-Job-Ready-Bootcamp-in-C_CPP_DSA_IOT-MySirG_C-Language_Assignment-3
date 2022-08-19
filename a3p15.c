//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-15: Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-15: Will Check Whether A Given Number Is Positive, Negative Or Zero...");

    // DATA INPUT...
    int number_Pos_Or_Neg_Or_Zero;
    printf("\n\n");
    printf("Enter A Number, To Check, Whether It Is Positive, Negative Or Zero: ");
    scanf("%d", &number_Pos_Or_Neg_Or_Zero);

    printf("\n");
    printf("The Number Entered By You, Is: %d", number_Pos_Or_Neg_Or_Zero);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether It Is Positive, Negative Or Zero...\nRight...");
    printf("\n\n");

    printf("Hmm...\n");
    if (number_Pos_Or_Neg_Or_Zero > 0)
        printf("The Number Entered By Is \"Positive\"...");
    else if (number_Pos_Or_Neg_Or_Zero < 0)
        printf("The Number Entered By Is \"Negative\"...");
    else
        printf("The Number Entered By Is \"Zero\"...");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}