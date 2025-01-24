#include <stdio.h>
void main (){
    int a ,b;
    printf("Enter numbers : a and b ");
    scanf("%d %d",&a,&b);
    int c;
    printf("Enter operator in \n1.+\n2.*\n3./\n4.- \n\n");
    scanf("%d",&c);
    switch(c){
        case  1 : printf("%d",a+b);
        break;
         case 2 : printf("%d",a-b);
        break;
         case 3 : printf("%d",a*b);
        break;
         case 4 : printf("%d",a/b);
        break;
    
    }
}