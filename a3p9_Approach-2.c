//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-9: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

//  Approach-2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-9: Will Find \"The Greatest Among The Three Given Numbers\"...");

    // DATA INPUT...
    int a, b, c;

    printf("\n\n");

    printf("Enter The  First Number as a = ");
    scanf("%d", &a);

    printf("Enter The Second Number as b = ");
    scanf("%d", &b);

    printf("Enter The  Third Number as c = ");
    scanf("%d", &c);

    printf("\n");
    printf("The Numbers Entered By You, Are: %d, %d & %d", a, b, c);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Find \"The Greatest Among The Three Given Numbers\"...\nRight...");
    printf("\n\n");

    if (a >= b && a >= c)
    {
        printf("%d", a);
        goto x;
    }

    if (b >= a && b >= c)
    {
        printf("%d", b);
        goto y;
    }

    if (c >= a && c >= b)
    {
        printf("%d", c);
        goto z;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Among Three Numbers, a, b & c...\nFirst Number, \"a = %d\" is Greater...", a);
    goto a;
    
y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Among Three Numbers, a, b & c...\nSecond Number, \"b = %d\" is Greater...", b);
    goto a;
    
z:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("Among Three Numbers, a, b & c...\nThird Number, \"c = %d\" is Greater...", c);
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

/*-----------------------------------------------------------------------------------------------------------------*/
// NOTE:

// Although this program is correct. Still, there is a Problem in "if Statement"...

// Problem:
// Each and Every "if Statement" will execute...
// and Hence, There corresponding "printf() statement"...
// Means, if a=2, b=3, c=4
// O/P -->  2
//          3
//          4
//          Which is Still A Problem...
//          We don't need to execute each and every "printf() statement"...

// Hence, We need to Improve This Program...

// Credit Goes To Saurav Shukla Sir, From MySirG.Com...
// Thanks Sir...