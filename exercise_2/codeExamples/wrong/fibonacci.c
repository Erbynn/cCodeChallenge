#include <stdio.h>
#define NO_OF_LOOPS 20
#define DEBUG 1

void main() {
  int fibonacci[NO_OF_LOOPS];
  int i;
  fibonacci[0]=0;
  fibonacci[1]=1;
  for (i=0;i<NO_OF_LOOPS;i++)
#ifdef DEBUG
    printf("fibonacci[%d]: %d, fibonacci[%d]: %d, fibonacci[%d]: %d\n",
	   i,fibonacci[i], i-1,fibonacci[i-1], i-2,fibonacci[i-2]);
#endif    
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
  for (i=0;i<NO_OF_LOOPS;i++)
    printf("%d ",fibonacci[i]);
  printf("\n");
}
