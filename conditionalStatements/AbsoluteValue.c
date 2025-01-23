#include <stdio.h>
#include <conio.h>
void main(){
    int num;
    printf("Enter your value : ",&num);
    scanf("%d",&num);
    if(num>=0)printf("The absolute value of %d is %d",num,num);
    else if(num<0) printf("The absolute value of %d is %d",num,-(num));
}