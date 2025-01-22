#include <stdio.h>
void main(){

    //Only underscor _ is allowed as special character in variable naming.
    // comma and blanks spaces are not allowed in variable naming.
    //variable names can not start with numbers. 

    /*
    _basic is a valid variable name.
     basic-hra is not valid name.
     422 is not valid name.
     FLOAT is valid variable name in c.
     float is not valid name in c.

     Q : Calculate simple interest.
    
    */

   float p,r,t,si;

   printf("Enter the amount : ");
   scanf("%f",&p);

    printf("Enter the rate : ");
   scanf("%f",&r);
    printf("Enter the time : ");
   scanf("%f",&t);
   
   si = (p*r*t)/100;
   printf("Simple interest is : %f ",si);


   int m,n;
   printf("\nEnter the value of p and q : ");
   scanf("%d%d",&m,&n);
   printf("p=%d\tq=%d",m,n);
}