//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-9: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

//  Approach-5

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
        if (b >= c)
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

// Now, this program is more over Correct.
// But, we can avoid   ">=" symbol and 
//         simply use  ">".

// Why we used ">=" symbol...
// If,     3 Numbers will be same...?
// Then,   3 "if Statements" should not be executed.

// But, in this program,
// We, already used "Nested if-else Statement".
// So, there will be no more issue like that.

// Although, this program is Correct,
// But, We can reduce the Program Lines Like:

//  if (a >= b && a >= c)
//     {
//         printf("%d", a);
//         goto x;
//     }

//     else
//     {
//         if (b >= c)
//         .
//         .
//         .
//     }

//     In this way, this program executes 4 Operators:-
//                                         1.  >=  --> in  (a >= b) &&  a >= c
//                                         1.  &&  --> in   a >= b (&&) a >= c
//                                         1.  >=  --> in   a >= b  && (a >= c)
//                                         1.  >=  --> in  (b >= c)

// Hence, Performance will decrease. Because, Compiler need to Execute these 4 Operators, One-by-One.
// Hence, Effort will be Reduce, To do Coding...

// Hence, We need to improve this...

// Credit Goes To Saurav Shukla Sir, From MySirG.Com...
// Thanks Sir...