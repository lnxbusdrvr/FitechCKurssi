/* lnxbusdrvr 20230606 L3T3.c */
/******************************************************************/
#include <stdio.h>

#define KOKO 30

int annaKoko(char *str);
char *oma_strcpy(char *kopio, char *alkuperainen);
void poistaRivinvaihto(char *str);

int main(void) {
  char alkuperainen[KOKO] = "";

  printf("Anna kopioitava merkkijono: ");
  fgets(alkuperainen, KOKO, stdin);
  poistaRivinvaihto(alkuperainen); //strcspn

  printf("Merkkijono 1 on '%s'.\n", alkuperainen);
  char kopio[KOKO];
  oma_strcpy(kopio, alkuperainen);
  printf("Merkkijono 2 on '%s'.\n", kopio);

  printf("Kiitos ohjelman käytöstä.\n");

  return(0);
}
 
char *oma_strcpy(char *kopio, char *alkuperainen) {
  int i = 0;
  for (i = 0;i < annaKoko(alkuperainen);i++) {
    kopio[i] = alkuperainen[i];
  }
  // sijoitetaan viimeinen kohta
  kopio[i] = '\0';

  return kopio;
}

int annaKoko( char *str) {
  int iRivi = 0;
  while ( str[iRivi] != '\0') {
    iRivi++;
  }
  return iRivi;
}

void poistaRivinvaihto(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == '\n') {
      str[i] = '\0';
      break;
    }
    i++;
  }
}




/******************************************************************/
/* eof */ 
