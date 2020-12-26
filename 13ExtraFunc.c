/* Extra C functionality - variable length aruments,
   command line arguments */

#include<stdio.h>
#include<stdarg.h>

double average(int i, ...);   // ... means function can recieve any number of arguments of any type

int main()
{
  double n, x = 3, y = 6;

  printf("\nAverage = %lf", average(2, x, y));  // first variable specifys number of arguments

  printf("\nEnter number of arguments: ");
  scanf("%lf", &n);          // number of arguments to be processed

  double a[n];    // array to specify what arguments are

  for (int i = 0; i < n; i++)
  {
    scanf("%lf", &a[i]);     // user specifies arguments
  }

  printf("\nAverage = %lf", average(n, a[n]));  // Set number of arguments = to user input (n)
                                                // user specifys what arguments are by input to array (a(n))
}


double average(int i, ...)
{
  double total = 0;  // initialize total
  va_list ap;   // stores info needed by va_start & va_end

  va_start(ap, i);  // initialize va_list object

  for (int j = 1; j <= i; ++j)
  {
    total += va_arg(ap, double);
  }

  va_end(ap);  // clean up variable-lenght-argument list
  return total/i; // calculate average
}
