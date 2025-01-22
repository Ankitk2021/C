#include <stdio.h>
#include <conio.h>
void main(){

/*
Take integer as input and print half of it.
*/
int a;
printf("Enter your integer number : ");
scanf("%d",&a);
printf("Half of %d is %d",a,a/2);


/*
Take float as input and print the fraction part of it.
*/

float b;
printf("\nEnter your float number : ");
scanf("%f",&b);
float res = b - (int)b;
printf("\nFraction part of %f is %f",b,res);




}