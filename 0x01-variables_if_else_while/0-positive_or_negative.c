#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Resolve the required task code */

/* Choose a random number, then compare whether it is negative, positive, or zero */
int main(void)
{
 int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Try to find the positive value from the negative */
  if (n>0)
    {
      printf("%d is positive\n",n);
    }
    else if (n<0)
      {
	printf("%d is negative\n",n);
      }
        else
	 {
	  printf("%d is Zero\n",n);	
	 } 
	   return (0);
}
