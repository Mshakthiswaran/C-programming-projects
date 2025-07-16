#include<stdio.h>
int main(){
    int choice=0;
    double kilogram = 0.0;
    double pound = 0.0;
    printf("Weight Converstion Calculator \n");
    printf("1. Kilograms to pounds.\n");
    printf("2. Pounds to Kilograms.\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    if(choice == 1){
    printf("Enter the weight in kilograms: ");
    scanf("%lf",&kilogram);

    pound = kilogram *2.20462;
    printf("%.2lf Kilogram is equal to %.2lf", kilogram,pound);

    }else if(choice ==2){
        printf("Enter the weight in pounds : ");
        scanf("%lf",&pound);

        kilogram = pound/2.0462;
        printf("%.2lf pounds is equal to %.2lf",pound,kilogram);
    }
    else{
        printf("Choices are only 1 or 2. ");
    }


}