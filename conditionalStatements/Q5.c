#include <stdio.h>
#include <conio.h>
void main(){

int num1;
printf("Enter the number : ");
scanf("%d",&num1);
if(num1%3==0 && num1%5==0){

   printf("divisible by both 5 and 3"); 
}else if (num1%3==0 ){
    printf("divisible by 3");

} else if (num1%5==0){
    printf("divisible by 5 ");
} else {
    printf("divisible by neither 3 nor 5");
}

}