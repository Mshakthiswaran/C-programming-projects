#include<stdio.h>
#include<string.h>
int main(){

    int count =0;
    float price = 0.0f;
    char item[20] = "";

    printf("What item would you like to buy? : ");
    scanf("%s", item);
    printf("What is the price for each? :");
    scanf("%f", &price);
    printf("How many would you like? :");
    scanf("%d", &count);

    printf("You have bought %d %s/s \n", count,item);
    printf("The total is : $%.2f\n",price*count);
    
    return 0;
}
