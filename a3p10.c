//  Assignment - 3   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-03_Problem-10: Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-03_Problem-10: Will Take The Cost Price And Selling Price Of A Product...\nAnd Calculate And Print The Profit Or Loss Percentage...");

    // DATA INPUT...
    float cost_Price, selling_Price, profit, loss, profit_Percentage, loss_Percentage;
    printf("\n\n");
    printf("Enter The \"Cost Price\",    Of The Product: Rs ");
    scanf("%f", &cost_Price);
    printf("Enter The \"Selling Price\", Of The Product: Rs ");
    scanf("%f", &selling_Price);
    printf("\n");
    printf("The Cost Price And Selling Price Entered By You, Are: %f & %f", cost_Price, selling_Price);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want The Profit Or Loss Percentage...\nRight...");
    printf("\n\n");

    if (selling_Price > cost_Price)
    {
        printf("Congratulations...\nYou Are In Profit...\n\n");
        profit = selling_Price - cost_Price;
        profit_Percentage = profit / 100;
        printf("You Are In Profit Of         :  %.2f INR", profit);
        printf("\n");
        printf("And Your Profit Percentage Is:  %.2f %", profit_Percentage);
    }
    else
    {
        if (selling_Price < cost_Price)
        {
            printf("Sorry Boss...\nActually...\n\nYou Are In Loss...\n\n");
            loss = cost_Price - selling_Price;
            loss_Percentage = loss / 100;
            printf("You Are In Loss Of         : %.2f INR", loss);
            printf("\n");
            printf("And Your Loss Percentage Is: %.2f %", loss_Percentage);
        }
        else
            printf("Hmm...\nYou Are Neither In Profit, Nor In Loss...");
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