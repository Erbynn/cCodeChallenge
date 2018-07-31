#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char*argv[]){
  FILE *myFile;
  myFile = fopen("sine.dat", "w+");
  
  double x, a, i;
  double sin();
 
  for (i =0 ; i <= 100; i++){
    // x = atof(argv[1]);
   
    a = (2*M_PI)/100;
    x = a * i;

    
    // printf( "Result: sine(%2.1f) degree(s) = %6.3f radians\n", i, sin(i));

    fprintf(myFile, "%6.3f\n", sin(x));
  }
  fclose(myFile);
}
  
