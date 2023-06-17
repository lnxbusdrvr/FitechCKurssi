/* lnxbusdrvr 20230617 L5T3.c */
/******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KOKO 30

typedef struct {
  char etunimi[KOKO];
  int ika;
} HENKILO;

int vertaaHenkilot(const HENKILO *pHlo1, const HENKILO *pHlo2);
void kopioiHenkilo(HENKILO *kohde, const HENKILO *src);

int main(void) {
  HENKILO pHlo1; // Staattinen muistinvaraus
  HENKILO pHlo2; // Staattinen muistinvaraus
  HENKILO *pHlo3 = malloc(sizeof(HENKILO)); // Dynaaminen muistinvaraus

  if (pHlo3 == NULL) {
    perror("Muistin varaus epäonnistui");
    exit(0);
  }

  printf("Anna ensimmäisen henkilön etunimi: ");
  fgets(pHlo1.etunimi, sizeof(pHlo1.etunimi), stdin);
  printf("Anna ensimmäisen henkilön ikä: ");
  scanf("%d", &pHlo1.ika);

  getchar(); // Tyhjentää puskurin rivinvaihdosta varten

  printf("Anna toisen henkilön etunimi: ");
  fgets(pHlo2.etunimi, sizeof(pHlo2.etunimi), stdin);
  printf("Anna toisen henkilön ikä: ");
  scanf("%d", &pHlo2.ika);

  getchar(); // Tyhjentää puskurin rivinvaihdosta varten

  int vertailu = vertaaHenkilot(&pHlo1, &pHlo2);
  if (vertailu == 0) {
    printf("Annetut tiedot ovat samoja.\n");
  } else {
    printf("Annetut tiedot eivät ole samoja.\n");
  }

  kopioiHenkilo(pHlo3, &pHlo1);

  vertailu = vertaaHenkilot(&pHlo1, pHlo3);
  if (vertailu == 0) {
    printf("Kopioinnin jälkeen tietueiden tiedot ovat samoja.\n");
  } else {
    printf("Kopioinnin jälkeen tietueiden tiedot eivät ole samoja.\n");
  }

  if (&pHlo1 == pHlo3) {
    printf("Kopioinnin jälkeen tietueiden osoitteet ovat samoja.\n");
  } else {
    printf("Kopioinnin jälkeen tietueiden osoitteet eivät ole samoja.\n");
  }

  free(pHlo3); // Vapauta dynaamisesti varattu muisti
  pHlo3 = NULL;

  printf("Muisti vapautettu.\nKiitos ohjelman käytöstä.\n");

  return 0;
}

int vertaaHenkilot(const HENKILO *pHlo1, const HENKILO *pHlo2) {
  int etunimiVertailu = strcmp(pHlo1->etunimi, pHlo2->etunimi);
  if (etunimiVertailu != 0) {
    return etunimiVertailu;
  } else {
    return pHlo1->ika - pHlo2->ika;
  }
}

void kopioiHenkilo(HENKILO *kohde, const HENKILO *src) {
  strcpy(kohde->etunimi, src->etunimi);
  kohde->ika = src->ika;
  /* sama:
   * strcpy((*kohde).etunimi, (*src).etunimi);
   * (*kohde).ika = (*src).ika;
   */
}

/******************************************************************/
/* eof */

