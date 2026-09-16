/*
Q22: Write a program to find profit or loss percentage
given cost price and selling price.
*/

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
    {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %f\n", percentage);
    }
    else if (costPrice > sellingPrice)
    {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %f\n", percentage);
    }
    else
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}