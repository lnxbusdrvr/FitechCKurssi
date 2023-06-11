/* lnxbusdrvr 20230610 L4T1.c */
/******************************************************************/
#include <stdio.h>

#define KOKO 50

typedef struct {
  char sNimi[KOKO];
  int iPainovuosi;
  int iHyllypaikka;
} Kirja;

void kysy();
void tulosta_tietue(Kirja kirja);
void tulosta_loppu();
void poistaRivinvaihto(char *str);

/* tyyppi = Kirja
 * muuttuja = kirja
 */

int main(void) {
  kysy();
  tulosta_loppu();

  return(0);
}

void kysy() {
  /* ei
   * struct Kirja kirja
   */
  Kirja kirja;

  printf("Anna kirjan nimi: ");
  fgets(kirja.sNimi, KOKO, stdin);
  printf("Anna kirjan painovuosi: ");
  scanf("%d", &kirja.iPainovuosi);
  printf("Anna kirjan hyllypaikka: ");
  scanf("%d", &kirja.iHyllypaikka);

  tulosta_tietue(kirja);
}

void tulosta_tietue(Kirja kirja) {
  getchar();
  poistaRivinvaihto(kirja.sNimi); /* oma_strcspn poistaa fgets():n mjonokyselystä rivinvaihdon */
  printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.", kirja.sNimi, kirja.iPainovuosi, kirja.iHyllypaikka);
}

void tulosta_loppu() {
  printf("\n");
  printf("Kiitos ohjelman käytöstä.");
  printf("\n");
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
