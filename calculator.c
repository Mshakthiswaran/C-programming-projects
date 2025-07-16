#include<stdio.h>
int main(){
    float num1=0.0;
    float num2 =0.0;
    char symbol = '\0';
    float result =0.0;

    printf("Enter the first number : ");
    scanf("%f",&num1);

    printf("Enter the second number : ");
    scanf("%f",&num2);

    printf("Enter the operater (+,-,*,/) : ");
    scanf(" %c",&symbol);

    switch (symbol){
        case '+':
        result = num1 +num2;
        break;

        case '-':
        result = num1 -num2;
        break;

        case '*':
        result = num1 *num2;
        break;

        case '/':
        result = num1 /num2;
        break;
    }
    printf("%.2f",result);
}