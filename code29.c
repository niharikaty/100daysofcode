//Q22: Write a program to find profit or loss percentage given cost price and selling price.//

#include <stdio.h>
int main() {
    
    float costP, sellingP, percnt;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costP, &sellingP);
    if (sellingP > costP) 
    {
        percentage = ((sellingP - costP) / costP) * 100;
        printf("Profit %f", percnt);
    } 
    else if (sellingP < costP) 
    {
        percnt = ((costP - sellingP) / costP) * 100;
        printf("Loss %f", percnt);
    } 
    else 
    {
   
        printf("No Profit No Loss");
        return 0
    }
}