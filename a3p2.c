//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-01: Write a program to check whether a given number is divisible by 5 or not

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-01: Will Check, Whether A Given Number Is divisible by 5 or not...");

    // DATA INPUT...
    int num, remainder;
    printf("\n\n");
    printf("Enter a Number, To Know, Whether The Given Number Is \"Divisible By 5 Or Not\": ");
    scanf("%d", &num);
    printf("The Number Entered By You, Is: %d", num);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether The Number You Have Entered, Is \"Divisible By 5 Or Not\", Right...");

    remainder = num % 10;

    if (remainder == 5 || remainder == 0)
    {
        printf("\n\nIt Is, \"Divisible By 5\"");
        goto x;
    }
    else
    {
        printf("\n\nIt Is, \"Not Divisible By 5\"");
        goto y;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You, %d is: \"Divisible By 5\"", num);
    goto a;
y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Number Entered By You, %d is: \"Not Divisible By 5\"", num);
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