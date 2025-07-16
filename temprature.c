#include<stdio.h>
int main(){
    float temperature = 0.0;
    float celsius =0.0;
    float farenheit = 0.0;
    char temp = '\0';
    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius(c) or Fahrenheit(F)?: ");
    scanf("%c",&temp);

    if(temp == 'c' || temp == 'C')
    {
    
        printf("Enter the temperature in Celsius : ");
        scanf("%f",&celsius);
    
        farenheit = (celsius*9/5)+32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.",celsius,farenheit);
    }else if(temp == 'f' || temp == 'F')
    {
        printf("enter the temperature in farenheit :");
        scanf("%f",&farenheit);

        celsius =(farenheit-32)*5/9;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.",farenheit,celsius);
    }
    else
    {
        printf("Invalid Choice! Please select C OR F");
    }
}