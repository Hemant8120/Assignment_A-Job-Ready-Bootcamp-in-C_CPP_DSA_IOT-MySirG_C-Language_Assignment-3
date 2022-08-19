//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Decision Control Statements in C Language
//  Assignment-03_Problem-11: Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-11: Will Take The Marks Of 5 Subjects And Display Whether The Candidate Passed The Examination Or Failed...");
    printf("\n");
    printf("Assuming, Marks Are Given Out Of 100 And Passing Marks Is 33...");

    // DATA INPUT...
    int pas_Marks = 33, tot_Marks = 100, sub_1, sub_2, sub_3, sub_4, sub_5;
    printf("\n\n");
    printf("Enter The Marks Of \"Subject_1\": ");
    scanf("%d", &sub_1);
    printf("Enter The Marks Of \"Subject_2\": ");
    scanf("%d", &sub_2);
    printf("Enter The Marks Of \"Subject_3\": ");
    scanf("%d", &sub_3);
    printf("Enter The Marks Of \"Subject_4\": ");
    scanf("%d", &sub_4);
    printf("Enter The Marks Of \"Subject_5\": ");
    scanf("%d", &sub_5);
    printf("\n");
    printf("The Marks Entered By You, Are: %d, %d, %d, %d & %d", sub_1, sub_2, sub_3, sub_4, sub_5);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Know, Whether The Candidate is Passed The Examination Or Failed...\nRight...");
    printf("\n\n");

    if (sub_1 >= pas_Marks && sub_1 < tot_Marks && sub_2 >= pas_Marks && sub_2 < tot_Marks && sub_3 >= pas_Marks && sub_3 < tot_Marks && sub_4 >= pas_Marks && sub_4 < tot_Marks && sub_5 >= pas_Marks && sub_5 < tot_Marks)
    {
        printf("Congratulations...\nYou Passed In All Five Subjects...\n\n");
        printf("So...\nYou Passed The Examination...\n\n");
    }
    else
        printf("Sorry...\nYou Failed The Examination...\nDo Better Next Time...\n\n");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}