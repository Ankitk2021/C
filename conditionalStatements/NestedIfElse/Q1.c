#include <stdio.h>
#include <conio.h>
void main(){
    int a;
    printf("Enter positive integer : ");
    scanf("%d",&a);
    if(a%3==0){
       if(a%5==0) printf("divisible by 3 and 5");
       else printf("Only divisible by 3");
    } else if (a%5==0){
     if(a%3==0) printf("divisible by 3 and 5");
       else printf("Only divisible by 5");
    }else {
        printf("divisible by neither 5 nor 3");
    }
}