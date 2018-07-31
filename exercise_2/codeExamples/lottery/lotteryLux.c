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

  int noOfParticipants=15, studentNo;
  struct timeval timeVal;
  struct timezone timeZone;

  char *students[]={"ADDO, GABRIEL AMPONSAH",
		   "AMPONSAH, DENNIS EFFA",
		   "ERBYNN, JOHN KWESI",
		   "AFRIYIE-GYAMFI, KWABENA",
		   "CANN, IBRAHIM SADIQ",
		   "TERKPER, JOSIAH",
		   "SMITH, PAA KWESI",
		   "BONNEY, SAMUEL",
		   "NII KOTEY, JOSIAH",
		   "ISMAIL, DAWUD IBRAHIM",
		   "DUFFOUR, ISAAC AGYEN",
		   "KUMI-TWUMASI, KWASI",
		   "BAAH, EMMANUEL KWAKYE",
		   "YEGBE, SELASI KWAME",
		   "NANSIA, ABDUL RAUF TOMMIE"};

  //  printf("RAND_MAX: %d\n",RAND_MAX);
  gettimeofday(&timeVal,&timeZone);
  srandom(timeVal.tv_usec);

  studentNo = (int) (random() % (noOfParticipants)+ 1);
  printf("student no %d: %s\n",studentNo,students[studentNo]);
}
