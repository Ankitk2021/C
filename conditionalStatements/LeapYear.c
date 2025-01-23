#include <stdio.h>
#include <conio.h>
void main(){
    int year;
    printf("Enter the year to check leap year : ");
    scanf("%d",&year);
    if(year%4==0) printf("%d is a leap year.",year);
      else printf("%d is a non-leap year.",year);
}