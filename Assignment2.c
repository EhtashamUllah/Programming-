#include<stdio.h>

main(void){


float gallons, liters;
printf("Gallon to Liter");
printf("\nEnter the no of gallons: ");
scanf("%f",&gallons);
liters=gallons * 3.78;
printf("\n%.3f liters\n",liters);
return 0;

}
