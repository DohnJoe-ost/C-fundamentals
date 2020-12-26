// Lecture 6 - Arrays

#include<stdio.h>



int main()
{

  int arr[5] = {1, 2, 3, 4, 5};   // initialize array
  int arr2[5], sum = 0;


  printf("\nEnter 5 elements into array: \n");


  for (int i = 0; i < 5; i++)
     scanf("%d", &arr2[i]);      // filling array with elements

  for(int i = 0; i<5; i++)
     printf("%d", arr2[i]);

  for(int i = 0; i<5; i++)
     sum += arr2[i];


  printf("\nSum = %d\n", sum);



  int multi[2][2] = { {1, 2},    // initializing 2d 2x2 array
                      {3, 4} };

  for (int i = 0; i < 2; i++)     // printing elements of array
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", multi[i][j]);
    }

    printf("\n");
  }
}
