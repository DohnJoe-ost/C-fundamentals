// Lecture 3 - Functions, Coercion of Arguments, Stacks - Last in First Out(LIFO)

#include<stdio.h>

float square(float);  // Function prototype with parameter int - prototypes are important so the compiler knows a fuction called is correct

/* Coercion of Arguments - forcing of arguments to the appropriate prototype
   arguments of different type to function are converted to correct type before function is called
   float plus(int); int x; - passing x into plus would convert x's type to float for the function call */

int main(void)
{
  int number;
  int x = 5/6;
  int a = 4;
  int b = 5;
  float average = (float)a/b;  // converting between types a and b are changed from int to float

  printf("\nEnter a number:");
  scanf("%d", &number);
  printf("\nNumber entered is %d", number);
  printf("\nNumber squared is %f",square(number)); // number is passed-by-value into square function

  printf("\n%d", x);
  printf("\n%f", average);


  return 0;

}

// function definition
float square(float a)
{
  return a*a;
}
