#include <stdio.h>
#include <conio.h>
void main(){
int x1,y1;
int x2,y2;
int x3,y3;
printf("Enter points\n");
printf("First point :");
scanf("%d %d",&x1,&y1);

printf("\nSecond point :");
scanf("%d %d",&x2,&y2);

printf("\nThird point :");
scanf("%d %d",&x3,&y3);

int slop1 = (y2-y1)/(x2-x1);
int slop2 = (y3-y2)/(x3-x1);

if(slop1==slop2) printf("On the same line.");
else printf("Not on the same line");


}