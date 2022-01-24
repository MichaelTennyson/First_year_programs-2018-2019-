/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 100
 
int main()
{
  int array[SIZE], n, c, d, position, swap;
 
  printf("Enter The number of elements you want in your array\n");
  scanf("%d", &n);
 
  printf("Enter %d  random integers\n", n);
 
  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
  }//ENDFOR
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }//ENDFOR
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }//ENDIF
  }//ENDIF
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);
 
  return 0;
}
