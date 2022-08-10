//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-5: Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-5: Will Check, Whether A Given Number Is A Three-Digit Number Or Not...");

    // DATA INPUT...
    int user_Input_Number;
    printf("\n\n");
    printf("Enter A Number, To Check, Whether It Is A \"Three-Digit Number\", Or Not: ");
    scanf("%d", &user_Input_Number);
    printf("The Number Entered By You, Is: %d", user_Input_Number);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Check, Whether It Is A \"Three-Digit Number\", Or Not, Right...");

    if (user_Input_Number >= 100 & user_Input_Number <= 999)
    {
        printf("\n\nYes, It's Three-Digit Number: %d", user_Input_Number);
        goto x;
    }

    else
    {
        printf("\n\nNo, It's Not A Three-Digit Number: %d", user_Input_Number);
        goto y;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You: %d, is A \"Three-Digit Number\"", user_Input_Number);
    goto a;

y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You: %d, is Not A \"Three-Digit Number\"", user_Input_Number);
    goto a;

// FORMALITY...
a:
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}