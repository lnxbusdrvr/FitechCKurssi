/* lnxbusdrvr 20230623 L6T2.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct AUTO {
  int vuosi;
  char nimi[8];
  struct AUTO *pSeuraava;
} AUTO;

AUTO *lisaaSolmu(AUTO **ppA, char *tiedostonnimi);
void tulosta(AUTO *pA);
void tyhjenna(AUTO *pA);

int main(int argc, char *argv[]) {
  /* argc = 1 = ei syötteitä */
  if (argc < 2) {
    printf("Et antanut tiedoston nimeä.\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  AUTO *pAlku = NULL;
  char *tiedostonnimi = argv[1];

  pAlku = lisaaSolmu(&pAlku, tiedostonnimi);
  tulosta(pAlku);
  tyhjenna(pAlku);
  printf("Kiitos ohjelman käytöstä.");

  return 0;
}

AUTO *lisaaSolmu(AUTO **ppA, char *tiedostonnimi) {
  FILE *tiedosto_osoitin = fopen(tiedostonnimi, "r");
  printf("Luetaan tiedot tiedostosta %s.\n", tiedostonnimi);
  if (tiedosto_osoitin == NULL) {
    printf("Tiedoston avaus epäonnistui.\nKiitos ohjelman käytöstä.");
    exit(0);
  }

  int vuosi = 0;
  char nimi[8] = {0};
  char rivi_buffer[50];

  while (fgets(rivi_buffer, sizeof(rivi_buffer), tiedosto_osoitin) != NULL) {

    /* Muistin varaus */
    AUTO *pUusi = (AUTO *)malloc(sizeof(AUTO));

    if (pUusi == NULL) {
      perror("Muistin varaus epäonnistui\n");
      exit(0);
    }

    AUTO *ptr;

    /* luo tiedostosta kohdat */
    sscanf(rivi_buffer, "%s %d", nimi, &vuosi);

    if (strlen(rivi_buffer) <= 1) {
      pUusi->pSeuraava = NULL;
      tyhjenna(*ppA);
      continue;  /* Ohita tyhjä rivi */
    }

    /* Sijoita tiedostoista saadut tietuet */
    pUusi->vuosi = vuosi;
    strcpy(pUusi->nimi, nimi);
    pUusi->pSeuraava = NULL;

    if (*ppA == NULL) {
      *ppA = pUusi;
    } else {
      ptr = *ppA;
      while (ptr->pSeuraava != NULL) {
        ptr = ptr->pSeuraava;
      }
      ptr->pSeuraava = pUusi;
    }
  }
  fclose(tiedosto_osoitin);
  printf("Tiedot luettu linkitettyyn listaan.\n");
  return *ppA;
}

void tulosta(AUTO *pA) {
  if (pA == NULL) {
    printf("Ajoneuvoja ei löytynyt.\n");
    return;
 /*   tyhjenna(pA);
    exit(0);*/
  }

  AUTO *ptr = pA;
  int laskuri = 1;

  while (ptr != NULL) {
    printf("%d. ajoneuvo: %s vuosimalli %d.\n", laskuri, ptr->nimi, ptr->vuosi);
    ptr = ptr->pSeuraava;
    laskuri++;
  }
}

void tyhjenna(AUTO *pA) {
  AUTO *ptr = pA;
  while (ptr != NULL) {
    pA = ptr->pSeuraava; free(ptr);
    ptr = pA;
  }
  printf("Muisti vapautettu.\n");
}

/******************************************************************/
/* eof */
