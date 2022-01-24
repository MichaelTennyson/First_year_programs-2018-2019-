//assignment Q4(i)
//user is prompted to enter the number of elements they want in the array

#include <stdio.h>
 
 //runtime start
clock_t begin = clock();

 
int main()
{
   int array[100], position, c, n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the element you wish to delete.\n");
   scanf("%d", &position);
 
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];
 
      printf("Resultant array:\n");
 
      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }
 
    //runtime end
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    
    printf("The runtime of the program is %d\n" , time_spent);

 
   return 0;
}

