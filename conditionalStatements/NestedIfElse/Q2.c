#include <stdio.h>
#include <conio.h>
void main(){
    int a;
    printf("Enter positive integer : ");
    scanf("%d",&a);
    if(a%3==0){
       if(a%5==0) printf("divisible by 15");
       else printf("Only divisible by 3");
    } else if (a%5==0){
     if(a%3==0) printf("divisible by 15");
       else printf("Only divisible by 5");
    }else {
        printf("Not divisible by 15.");
    }
}