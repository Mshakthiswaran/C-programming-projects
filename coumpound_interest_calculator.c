#include<stdio.h>
#include<math.h>
int main(){
    double principal =0.0;
    double rate = 0.0;
    int years =0;
    int timescompounted = 0;
    double total = 0.0;

    printf("Coumpond Interest Calculater \n");

    printf("Enter the principal(p) : ");
    scanf("%lf",&principal);
    printf("Enter the  interest rate % (r) : ");
    scanf("%lf",&rate);
    rate /=100;
    printf("Enter the year (t) : ");
    scanf("%d",&years);
    printf("Enter the times compounded : ");
    scanf("%d",&timescompounted);
    total = principal *pow(1+rate/timescompounted,timescompounted*years);
    printf("After %d years ,the total will be $%.2lf",years,total);
}