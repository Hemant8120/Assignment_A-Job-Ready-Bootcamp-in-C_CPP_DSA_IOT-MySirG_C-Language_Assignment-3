//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-13: Write a program to check whether a given number is divisible by 3 and divisible by 2 or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-13: Will Check Whether A Given Number Is Divisible By 3 And Divisible By 2 Or Not...");

    // DATA INPUT...
    int number_Div_2_And_3;
    printf("\n\n");
    printf("Enter A Number, To Check, Whether It Is Divisible By 2 And 3: ");
    scanf("%d", &number_Div_2_And_3);

    printf("\n");
    printf("The Number Entered By You, Is: %d", number_Div_2_And_3);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether It Is Divisible By 2 And 3 Or Not...\nRight...");
    printf("\n\n");

    printf("Hmm...\n");
    if (number_Div_2_And_3 % 2 == 0 && number_Div_2_And_3 % 3 == 0)
        printf("The Number Entered By Is \"Divisible By 2 And 3\"...");
    else
        printf("The Number Entered By Is \"Not Divisible By 2 And 3\"...");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}