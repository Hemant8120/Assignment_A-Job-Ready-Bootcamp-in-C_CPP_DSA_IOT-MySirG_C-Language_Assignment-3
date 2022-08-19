//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-9: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

//  Approach-4

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

    else
    {
        if (b >= a && b >= c)
        {
            printf("%d", b);
            goto y;
        }

        else
        {
            printf("%d", c);
            goto z;
        }
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

// Now, this program is written in the form of Nested "If-Else Statement".

// How does this program work?
// 1.  If, "if Condition" is Correct,
//     Then, This Statement will execute.

// 2.  If, "if Condition" is Wrong,
//     Then, Either:-
//                     i.  "else-if    Statement" will execute.
//                     ii. "else-else  Statement" will execute.
// But, out of These Three Statements, Only One Statement will execute...
// This is Nice...

// However, There is a Logical Mistake in this Program...
// I.  if      (a >= b && a >= c)  --> If "a" is not Large, Then Compiler will move to "else-if(b >= a && b >= c) Statement" where it encounters (b >= a && b >= c). Means "a" Again...
// II. else-if (b >= a && b >= c)
// III.else-else
    
// Means, if "a" is already Not-Large, So Why we again compete "a" with "b"...?
// So, We can skip this "else-if(b >= a && b >= c) Statement" Condition, and Minimize it to:
// if(b >= a && b >= c) --> if(b>=c)

// Hence,  We need to improve this program as well...

// Credit Goes To Saurav Shukla Sir, From MySirG.Com...
// Thanks Sir...