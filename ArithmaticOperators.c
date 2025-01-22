#include <stdio.h>
void main(){

    //Integer    
    int x = 5;
    int y = 2;

    printf("x = %d y = %d\n",x,y);
    printf("Add %d\n",x+y);
    printf("Subs %d\n",x-y);
    printf("Multi %d\n",x*y);
    printf("Div %d\n",x/y);

    //Float -> real numbers
    // ## float datatype is accurate only six places after decimal .🗒️
    float pi = 3.14; 
    float a = 5;
    float b = 2;
    float c = 5/2;
    printf("%f\n",c);  //2.5 wrong 
                       // 2 right
    printf("%f",a/b);  //2.500000 
    printf("\na = %f b = %f\n",a,b);
    printf("Add %f\n",x+y); printf("Subs %f\n",x-y); printf("Multi %f\n",x*y);
    printf("Div %f\n",x/y);


    //char datatype
    //char is single digit

    char ch = 'a';
    printf("%c",ch);

    //ASCII VALUES

    /* 
    A : 65
    B : 65+25
    a : 97
    z : 97+25

    usually c statements are written in lowercase.

    */

}