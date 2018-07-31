/*
 * lottery.c: selects one solution entry amongst those studentswho sent 
 *            in exercise solutions to present them during the lecture 
 * 
 * copyright U. Raich 2017
 * This program is part of the workshop on embedded systems held at 
 * the University of Cape Coast in the winter semester 2017
 * It has been released under the GNU General Public License
 * see gnu.org/licenses/gpl.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(int argc, char *argv[]) {

  int noOfParticipants;
  struct timeval timeVal;
  struct timezone timeZone;

  if (argc != 2) {
    printf("Usage: %s no of participants in the lottery\n",argv[0]);
    return -1;
  }
  //  printf("RAND_MAX: %d\n",RAND_MAX);
  gettimeofday(&timeVal,&timeZone);
  srandom(timeVal.tv_usec);
  noOfParticipants = atoi(argv[1]);
  printf("The winners is: %d\n",(int) (random() % (noOfParticipants)+ 1));
}
