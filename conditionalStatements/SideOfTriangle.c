#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,c;
    printf("Enter the sides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c) printf("Can be side of triangle.");
    else if(b+c>a && a+c>b && a+b>c) printf("Can be side of triangle.");
    else printf("Can't be side of triangle.");
}