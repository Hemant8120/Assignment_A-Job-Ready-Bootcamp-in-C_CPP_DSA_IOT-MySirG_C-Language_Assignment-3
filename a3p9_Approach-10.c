//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-9: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

//  Approach-10

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

      printf("Among Three Numbers, a, b & c...\"%d\" is Greater...", a > b ? a > c ? a : c : b > c ? b
                                                                                                   : c);

      // FORMALITY...
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

// Now, this program is Final Program.
// Still, We need to improve thisThrough Conditional Operator( ? : )...

/*-----------------------------------------------------------------------------------------------------------------*/
// LOGIC:

// If, we compare "a" with "b",
// so, definately, we can't get the Answer, which one is Greater.
// But, their Result(True / False) say something.

// Case-1
// If, (a > b) is True,
// Then, "b" is Not Greater.
// So, Either "a" or "c" will be Greater.

// Case-2
// If, (a > b) is False,
// Then, "a" is Not Greater.
// So, Either "b" or "c" will be Greater.

/*-----------------------------------------------------------------------------------------------------------------*/
// Credit Goes To Saurav Shukla Sir, From MySirG.Com...
// Thanks Sir...