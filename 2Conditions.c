// Programming 2  - 23/1/20
// Practice contents of Lecture 2 - while loop, if else, input etc...
#include<stdio.h>

int main(void)
{

  int product = 3;
  int passes = 0;
  int failures = 0;
  int students = 1;
  int result;

// example of while loop - first power of 3 > 100

  while (product <= 100)
  {
    product = 3*product;
    printf("\n%d", product);
  }printf("\n\n");



// getting results of 10 students

  while (students <= 10)  // loop runs until students = 10
  {
    printf("%s", "Enter result (1 = pass, 0 = fail) ");
    scanf("%d", &result);

    if (result == 1)
    {
      passes = passes + 1;  // increment value of passes by 1 if entered by user
    }
    else
    {
      failures = failures + 1;  // increment value of failures by 1 if entered by user
    }

    students = students + 1;    // continue to next student

  } // end while


  printf("\nNumber of passes: %d", passes);
  printf("\nNumber of fails: %d", failures);

  if (passes > 8)
  {
    printf("\nWell done!");
  }
  else
  {
    printf("\nTry again!");
  }



  return 0;
}
