/*
 * textAndNumbers: a C program demonstrating the internal representations of
 * ASCII text and numbers
 * The binary values of all characters in Hello World is shown as well as the 
 * binary representation of signed and unsigned short and char variables. 
 * copyright U. Raich Sep 2017
 * This program is part of the workshop on embedded systems held at 
 * the University of Cape Coast in the winter semester 2017
 * It has been released under the GNU General Public License
 * see gnu.org/licenses/gpl.html
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printAsciiTable() {
  printf("   2 3 4 5 6 7 \n");
  printf(" ------------- \n");
  printf("0:   0 @ P ` p\n");
  printf("1: ! 1 A Q a q\n");
  printf("2: \" 2 B R b r\n");
  printf("3: # 3 C S c s\n");
  printf("4: $ 4 D T d t\n");
  printf("5: %% 5 E U e u \n");
  printf("6: & 6 F V f v\n");
  printf("7: ' 7 G W g w\n");
  printf("8: ( 8 H X h x\n");
  printf("9: ) 9 I Y i y\n");
  printf("A: * : J Z j z\n");
  printf("B: + ; K [ k {\n");
  printf("C: , < L \\ l |\n");
  printf("D: - = M ] m }\n");
  printf("E: . > N ^ n ~\n");
  printf("F: / ? O _ o DEL\n");
}
int main(int argc, char **argv) {
  int i;
  char hello[]="HelloWorld!\n";
  char *numberString;
  char charNumber;
  unsigned char ucharNumber;
  float floatNumber;
  long  *floatPointer=(long *)&floatNumber;
  
  printf("print the hello string in string representation: (format: %%s): %s",(char *)hello);
  printf("now print the same thing in character representation: (format: %%c): ");
  for (i=0; i<strlen(hello)+1;i++)
    printf("%c ",hello[i]);
  printf("\n");
  printf("... and finally in internal ASCII representation: (format: 0x%%02x):\n");
  for (i=0; i<strlen(hello)+1;i++)
    printf("0x%02x ",hello[i]);
  printf("\n");
  printf("Count the number of characters in hex and in character representation\n");
  printf("They seem to be different! Why?\n");
  printf("Compare this to the ASCII table below:\n");
  printAsciiTable();
  printf("\n");
  printf("Now to numbers:\n");
  numberString="255";
  printf("Print the string containing \"255\" again as a string: (format %%s): %s\n",numberString);
  printf("... as individual characters: (format %%c):\n");
  for (i=0;i<strlen(numberString)+1;i++)
    printf("%c ",numberString[i]);
  printf("\n");
  
  printf("and in hex representation: (format 0x%%02x):\n");
  for (i=0;i<strlen(numberString)+1;i++)
    printf("0x%02x ",numberString[i]);
  printf("\n\n");
  /*
    now we convert it to an integer and the typecast it into an unsigned char
    255 fits into 8 bits!
  */

  printf("After conversion to numerical represenation with atoi (check the man page!)\n");
  ucharNumber= (unsigned char) atoi(numberString);
  printf("The unsigned byte in binary (hex) representation: 0x%02x\n",ucharNumber);
  /*
    Now we handle negative numbers and assign -2 to a signed char and print its 
    hex representation
  */
  charNumber = -2;
  printf("The hex representation of a byte with the negative value -2: 0x%02x\n",0xff&charNumber);
  printf("The value of the above unsigned char, if it is converted into a signed value\n");
  printf("and this time printed as a decimal number (format %%d): %d\n",
	 (char)ucharNumber);
  /* 
     Finally, what about floating point values?
  */
  floatNumber = 7.3;
  printf("Binary representation of the floating point value 7.3: %lx\n",*floatPointer);
  return 0;
}
