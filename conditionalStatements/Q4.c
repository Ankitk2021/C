#include <stdio.h>
#include <conio.h>
void main(){

int len,bre;
printf("Enter lenth and breadth of rectangle : ");
scanf("%d %d",&len,&bre);
int peri = 2*(len+bre);
int area = len*bre;
if(peri>area){
    printf("Perimeter is greater.\nPerimeter = %d\nArea = %d ",peri,area);
} else if (area >peri) {
      printf("Area is greater.\nPerimeter = %d\nArea = %d ",peri,area);
} else {
      printf("Perimeter and Are are same .\nPerimeter = %d\nArea = %d ",peri,area);
}

}