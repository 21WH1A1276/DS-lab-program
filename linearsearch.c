#include <stdio.h>
int main()
{
  int array[100],x, i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (i = 0;i<n;i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
  scanf("%d", &x);
  for(i=0;i<n;i++)
  {
    if (array[i] == x)  
    {
      printf("%d is present at location %d.\n",x,i+1);
      break;
    }
  }
  if (i== n)
    printf("%d isn't present in the array.\n",x);
  return 0;
}


