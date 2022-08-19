//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-18:  Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-18: Will Takes The Month Number As An Input And Display Number Of Days In That Month...");

    // DATA INPUT...
    int month_Number;
    printf("\n\n");
    printf("Enter Month Number, To Check, The Number Of Days In That Month: ");
    scanf("%d", &month_Number);

    printf("\n");
    printf("The Sides Of A Triangle Entered By You, Is: %d", month_Number);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Take The Month Number As An Input And Display Number Of Days In That Month...\nRight...");
    printf("\n\n");

    // Check for 31 Days
    if (month_Number == 1 || month_Number == 3 || month_Number == 5 || month_Number == 7 || month_Number == 8 || month_Number == 10 || month_Number == 12)
        printf("The Month Number Entered By You, Is: %d, Is Of 31 Days...", month_Number);

    else
    {
        // Check for 30 Days
        if (month_Number == 4 || month_Number == 6 || month_Number == 9 || month_Number == 11)
            printf("The Month Number Entered By You, Is: %d, Is Of 30 Days...", month_Number);

        else
        {
            // Check for 28/29 Days
            if (month_Number == 2)
                printf("The Month Number Entered By You, Is: %d, Is Of 28/29 Days...", month_Number);

            else
                // Else Invalid Input
                printf("The Month Number Entered By You, Is: %d, Is An Invalid Month...", month_Number);
        }
    }

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}