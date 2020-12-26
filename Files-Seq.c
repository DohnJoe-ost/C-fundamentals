// Files - Sequential access
#include<stdio.h>



int main()
{
  FILE *cfPtr;  // file pointer

  // fopen opens file
  if ((cfPtr = fopen("clients.txt", "w")) == NULL)
  {
    printf("\nFile cannot be opened");
  }
  else
  {
    
  }
}
