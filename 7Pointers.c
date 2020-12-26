// Pointers

#include<stdio.h>

int multi(int x, int y);
int square(int *x);



int main()
{
  int *ptr = NULL;   // pointer definition - points to null (nothing)
  int num = 5;

  ptr = &num;      // *ptr points to num via &


  printf("\nValue of ptr    %p\nAddress of num  %p", ptr, &num);
  printf("\n%d\n", *ptr);


  /* Pass - by - value :
    variable is passed to function
    however value of variable is unchanged  */

  int a = 10;
  int b = 5;
  int c = 4;

  printf("Before call, value of a : %d\n", a );
  printf("Before call, value of b : %d\n", b );

  /* calling a function to swap the values */
  printf("\n%d\n", multi(a, b));

  printf("After call, value of a : %d\n", a );
  printf("After call, value of b : %d\n", b );


  /* Pass by reference
    value of variable is changed */

  printf("\nValue of c before call : %d", c);

  printf("\n%d", square(&c));

  printf("\nValue of c after call : %d\n", c);

}

int multi(int x, int y)
{

  return x*y;

}

int square(int *x)
{
  *x = *x**x;
}
