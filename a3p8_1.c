//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-8_1: Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-8_1: Will Check Whether A Given Year Is A \"Leap_Year Or Not\"...");

    // DATA INPUT...
    int leap_Year;
    printf("\n\n");
    printf("Enter A Number, To Check, Whether It Is A \"Leap_Year Or Not\": ");
    scanf("%d", &leap_Year);
    printf("\n");
    printf("The Numbers Entered By You, Is: %d", leap_Year);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Check, Whether It Is A \"Leap_Year Or Not\"...");
    printf("\n\n");

    if (leap_Year % 4)
    {
        printf("Not A Leap_Year");
        goto y;
    }

    else if (leap_Year % 100)
    {
        printf("Leap_Year");
        goto x;
    }

    else if (leap_Year % 400)
    {
        printf("Not A Leap_Year");
        goto y;
    }

    else
        printf("Leap_Year");

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You Is \"A Leap_Year\"...");
    goto a;
y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You Is \"Not A Leap_Year\"...");
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