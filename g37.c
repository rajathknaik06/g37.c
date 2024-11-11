/*Ramu, a dedicated businessman who operates a cosmetic store, is seeking assistance to analyze the financial performance of his business. He is looking for a program that can help him determine the profit or loss for each cosmetic item he sells.



Note:

a) profit = selling price - cost price

b) loss = cost price - selling price

Input format :
The first line of input consists of a floating-point number representing the cost.

The second line of input consists of a floating-point number representing the selling price.

Output format :
If there is a profit, the output displays "Profit = {profit amount}".

If there is a loss, the output displays "Loss = {loss amount}".

If there is neither profit nor loss, the output displays "No profit or no loss".*/

#include<stdio.h>

int main(){
    float cost_price, selling_price, profit, loss;
    scanf("%f %f", &cost_price, &selling_price);

    if (selling_price > cost_price){
        profit = selling_price - cost_price;
        printf("Profit = %.2f", profit);
    }
    else if (selling_price < cost_price){
        loss = cost_price - selling_price;
        printf("Loss = %.2f", loss);
    }
    else    {
        printf("No profit or no loss");
    }
}

