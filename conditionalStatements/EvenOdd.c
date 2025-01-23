#include <stdio.h>
#include <conio.h>
void main(){

    int num;
    printf("Enter your number : ");
    scanf("%d",&num);

    if(num%2==0){

        printf("Your given number %d is Even.",num);

    }else{
         printf("Your given number %d is Odd.",num);
    }

}