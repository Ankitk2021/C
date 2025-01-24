#include <stdio.h>
#define Pi2  3.14338776734312
#define Area(r) (Pi2*r*r)
void main(){
    /*
    #define is macro.It is define to permanently.It is similar to type def.
    Macros are global variable in whole file.
#define Pi 3.143387493938
#define Area(r) (Pi*r*r)

macro functions :- #define Area(r) (Pi*r*r)

    */
 

   printf(" %.12f ",Pi2);
   printf("Area : %Lf",Area(12));
}