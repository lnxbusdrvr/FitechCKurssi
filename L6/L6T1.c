/* lnxbusdrvr 20230623 L6T1.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int iNumero;
  struct ASIAKAS *pSeuraava;
} ASIAKAS;

int main(void) {
  ASIAKAS *pAlku = NULL;
  ASIAKAS *pLoppu = NULL;

  /* Apuosoittimet muistin varaukseen ja liukuriin */
  ASIAKAS *pUusi;
  ASIAKAS *ptr;
  int i;

  printf("Anna listan luvut.\n");

  /* 3-alkion listan luominen */
  while (i) {
    /* Muistin varaus */
    if ((pUusi = (ASIAKAS *)malloc(sizeof(ASIAKAS))) == NULL ) {
      perror("Muistin varaus epäonnistui");
      exit(0);
    }

    /* Käyttäjältä luvun kysyminen */
    printf("Anna positiivinen kokonaisluku, 0 lopettaa: ");
    scanf("%d", &i);

    /* onko i nolla tarkistus ja mahdollinen lopetus */
    if (i == 0) {
      free(pUusi); /* Muistin vapauttaminen */
      break;
    }

    /* Uuden alkion jäsenmuuttujien arvojen sijoittaminen */
    pUusi->iNumero = i;
    pUusi->pSeuraava = NULL;
    /* Uuden alkion lisääminen listaan viimeiseksi alkioksi */
    if (pAlku == NULL) { /* Lista on tyhjä */
      pAlku = pUusi; /* tehdään ensimmäinen alkio */
      pLoppu = pUusi;
    } else { /* lista ei ole tyhjä, joten lisätään loppuun */
      /* tähän tarvitaan castaus, ilmancastausta tulee varoitus */
      pLoppu->pSeuraava = (struct ASIAKAS *)pUusi;
      pLoppu = pUusi;
    }
  }

  // Listan läpikäynti
  ptr = pAlku;
  printf("Listassa on seuraavat luvut: ");
  while (ptr != NULL) {
    printf("%d ", ptr->iNumero);
    /* tähän tarvitaan castaus, ilman castausta tulee varoitus */
    ptr = (ASIAKAS *)ptr->pSeuraava;
  }

  // Muistin vapauttaminen
  ptr = pAlku;
  while (ptr != NULL) {
    /* tähän tarvitaan castaus, ilmancastausta tulee varoitus */
    pAlku = (ASIAKAS *)ptr->pSeuraava;
    free(ptr);
    ptr = pAlku;
  }

  printf("\nKiitos ohjelman käytöstä.\n");

  return 0;
}

/******************************************************************/
/* eof */ 
