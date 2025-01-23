#include <stdio.h>
#include <conio.h>
void main(){

    int x1,y1;
    printf("Enter point\n");
printf("First point :");
scanf("%d %d",&x1,&y1);
if(x1==0&&y1==0){
printf("on the orgin.");
} else if (x1==0){
printf("on the Y axis.");
}else if(y1==0){
printf("on the X axis.");
}else{
printf("not on x-axis ,y-axis or origin");
}


}