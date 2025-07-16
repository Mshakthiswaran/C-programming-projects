#include<stdio.h>
#include<math.h>
int main(){
    double radius=0.0;
    double area = 0.0;
    double surfacearea =0.0;
    double volume =0.0;
    double pi = 3.14159;

    printf("enter the radius : ");
    scanf("%lf",&radius);
    
    area = pi*pow(radius,2);
    printf("Area : %.3lf\n",area);

    surfacearea = 4*pi*pow(radius,2);
    printf("SurfaceArea : %.3lf\n",surfacearea);

    volume = (4.0/3.0 )*pi*pow(radius,2);
    printf("Volume :%.2lf\n",volume);
}