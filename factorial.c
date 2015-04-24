#include <stdio.h>
 
int main()
{
  int c, n, fact = 1;
  printf(">>>User-B add this line for problem18 [time 1]<<<\n");
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
  printf(">>>>>User-B add this line for problem18 [time 2]<<<\n");
  printf("Factorial of %d is %d\n", n, fact);
 
  return 0;
}