/*
  example program using math functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
  double angle;
  if (argc != 2) {
    printf("Usage: %s angle in degrees\n",argv[0]);
    return -1;
  }
  angle = atof(argv[1]);
  angle = atof(argv[1])*2.0*M_PI/360.0;
  printf("angle in radian: %10.4f\n",angle);
  printf("Sin of %s degrees is %10.4f\n",argv[1],sin(angle));
  return 0;
}
