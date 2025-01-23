#include <stdio.h>
#include <conio.h>
void main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    (num%2==0) ? printf("Even") : printf("Odd");
}