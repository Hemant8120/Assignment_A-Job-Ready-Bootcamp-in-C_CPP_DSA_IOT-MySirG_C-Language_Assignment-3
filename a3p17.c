//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-17:  Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-17: Will Check To Take Length Of The Sides Of A Triangle As An Input And Will Display, Whether This Triangle Is Valid Or Not...");

    // DATA INPUT...
    int side_A, side_B, side_C;
    printf("\n\n");
    printf("Enter First  Side As Side_A: ");
    scanf("%d", &side_A);
    printf("Enter Second Side As Side_B: ");
    scanf("%d", &side_B);
    printf("Enter Third  Side As Side_C: ");
    scanf("%d", &side_C);

    printf("\n");
    printf("The Sides Of A Triangle Entered By You, Are: %d, %d & %d", side_A, side_B, side_C);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Take Length Of The Sides Of A Triangle As An Input And Will Display, Whether This Triangle Is Valid Or Not...\nRight...");
    printf("\n\n");

    printf("Hmm...\n");
    if (side_A + side_B > side_C || side_B + side_C > side_A || side_C + side_A > side_B)
        printf("The Sides Of A Triangle Is \"Valid\"...");
    else
        printf("The Sides Of A Triangle Is \"Not Valid\"...");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}