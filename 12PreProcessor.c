// C Preprocessor

#include<stdio.h>


/* #define directive creates
   symbolic constants and macros */

#define PI 3.14    // constant
#define CIRCLE_AREA(r) (PI*(r)*(r))   // area of circle macro
#define RECTANGLE_AREA(x, y) ((x)*(y))


int main()
{
  float x, y, z;

  printf("\nEnter radius of circle: ");
  scanf("%f", &x);
  printf("\nEnter width and height of rectangle: ");
  scanf("%f, %f", &y, &z);

  float circle = CIRCLE_AREA(x);     // plug value entered into macro
  float rectangle = RECTANGLE_AREA(y, z);

  printf("\n%f", circle);
  printf("\n%f", rectangle);


}
