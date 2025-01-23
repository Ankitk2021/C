#include <stdio.h>
#include <conio.h>
 void main(){

int cost,selling;
printf("Enter your cost price and selling price : ");
scanf("%d %d",&cost,&selling);
if(cost>selling){

 printf("Loss : %d",cost-selling);

} else if(selling>cost){

    printf("Profit : %d",selling-cost);
    
} else {

    printf("Cost price and Selling price is same.");
}

 }