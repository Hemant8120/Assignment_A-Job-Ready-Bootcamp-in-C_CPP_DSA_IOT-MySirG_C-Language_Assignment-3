//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-6: Write a program to print greater between two numbers. Print one number of both are the same.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-6: Will Print, Greater Between Two Numbers...");

    // DATA INPUT...
    int user_Input_Number_1, user_Input_Number_2;
    printf("\n\n");
    printf("Enter The First Number: ");
    scanf("%d", &user_Input_Number_1);
    printf("Enter The Second Number: ");
    scanf("%d", &user_Input_Number_2);
    printf("\n");
    printf("The Numbers Entered By You, Are: %d & %d", user_Input_Number_1, user_Input_Number_2);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, Greatest Between Two Numbers...");

    if (user_Input_Number_1 == user_Input_Number_2)
    {
        printf("\n\nHmm...\nBoth The Numbers You Have Entered, Are Same...");
        printf("\n\n");
        printf("Please Try To Enter Different Numbers...");
        goto a;
    }

    if (user_Input_Number_1 > user_Input_Number_2)
    {
        printf("\n\nNumber-1: %d, Is Greater", user_Input_Number_1);
        goto x;
    }

    else
    {
        printf("\n\nNumber-2: %d, Is Greater", user_Input_Number_2);
        goto y;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Among Number-1 & Number-2, Number-1: %d, Is Greater...", user_Input_Number_1);
    goto a;

y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Among Number-1 & Number-2, Number-1: %d, Is Greater...", user_Input_Number_1);
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