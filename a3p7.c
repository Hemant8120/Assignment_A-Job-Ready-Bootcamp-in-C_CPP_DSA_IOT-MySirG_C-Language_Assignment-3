//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-7: Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-7: Will Check Whether Roots Of A Given Quadratic Equation \"ax^2 + bx + c = 0\" Are Real & Distinct, Real & Equal Or Imaginary Roots...");
    printf("\n");
    printf("Let's Say, We Have A Quadratic Equation As \"ax^2 + bx + c = 0\"");

    // DATA INPUT...
    float a, b, c, discriminant, root_1, root_2, real_Component, imaginary_Component;
    printf("\n\n");
    printf("Enter The First  Number As, co-efficient of x^2 That Is a = ");
    scanf("%f", &a);
    printf("Enter The Second Number As, co-efficient of   x That Is b = ");
    scanf("%f", &b);
    printf("");
    printf("Enter The Third  Number As, Constant Term       That Is c = ");
    scanf("%f", &c);
    printf("\n");
    printf("The Numbers Entered By You, Are: %.2f, %.2f & %.2f", a, b, c);
    printf("\n");
    printf("Hence The Formed Quadratic Equation Is : %.2fx^2 + %.2fx + %.2fc = 0", a, b, c);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Check, The Roots Are Real_Distinct, Real_Equal Or Immaginary...");
    printf("\n\n");

    discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0)
    {
        root_1 = (-b + sqrt(discriminant)) / (2 * a);
        root_2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root_1 = %.2f \n", root_1);
        printf("Root_2 = %.2f \n", root_2);
        goto x;
    }

    else if (discriminant == 0)
    {
        root_1 = -b / (2 * a);
        root_2 = -b / (2 * a);
        printf("Root_1 = %.2f \n", root_1);
        printf("Root_2 = %.2f \n", root_2);
        goto y;
    }

    else
    {
        real_Component = -b / (2 * a);
        imaginary_Component = sqrt(-discriminant) / (2 * a);
        printf("Root_1 = %.2f + i %.2f \n", real_Component, imaginary_Component);
        printf("Root_2 = %.2f - i %.2f \n", real_Component, imaginary_Component);
        goto z;
    }

// DATA OUTPUT...
x:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Roots Are, Real & Distinct...");
    goto a;
y:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Roots Are, Real & Equal...");
    goto a;
z:
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("The Roots Are, Imaginary...");
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