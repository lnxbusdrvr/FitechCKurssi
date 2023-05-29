/* un 20230529 L2T5.c */
/******************************************************************/
#include <stdio.h>

#define MAX 200
#define FALSE 0
#define TRUE 1

int main(void) {
  int nValinta;

  char sMjono[MAX];
  int iRivit = 0;

  int bOnkoMjonossaTietuetta = FALSE;

  /* Merkkijonopointteri 
   * merkkien järjestyksen 
   * tallentamiseen 
   */
  char *pMjono = sMjono;

  /* 
   * Merkkijonopointteri
   * seuraavan vapaan 
   * paikan osoittamiseen
   */
  char *pSeurMerkki = sMjono;

  printf("\n");
  do {
    printf("Valikko\n");
    printf("1) Lisää uusi merkki\n");
    printf("2) Tyhjennä merkkijono\n");
    printf("3) Tulosta merkkijono\n");
    printf("0) Lopeta\n");
    printf("Valintasi: ");
    
    scanf("%d", &nValinta); 
    /*
     * Ymmärsin tehtävän väärin
     * valinta ei ole ikinä tyhjä 
     * 
     * vaan ilmoitetaan, jos sMjono on tyhjä
    if (scanf("%d", &nValinta) > 0) {
      printf("Input = %d", nValinta);
    } else {
      printf("Merkkijono oli tyhjä.\n");
      return; // Palaa takaisin valikon alkuun
    }
    */
    /*
    int nSyote = scanf("%d", &nValinta); 
    if ( nSyote == '\0') {
      printf("\n\nDEBUG\nOliTyhjäSyöte\n");
      */
      /* Tyhjennä syötepuskuri: */
    /*
      int c;
      */
      /*
       * getchar()-funktio lukee yhden merkin syötteestä.
       * Sijoitetaan luettu merkki muuttujaan c.
       * Tarkistetaan, onko luettu merkki rivinvaihtomerkki ('\n') tai tiedoston loppu (EOF).
       *   - Jos luettu merkki ei ole rivinvaihtomerkki eikä tiedoston loppu, toistetaan askel 1.
       *   - Jos luettu merkki on rivinvaihtomerkki tai tiedoston loppu, lopetetaan silmukka.
       */
      /*
      while ((c = getchar()) != '\n' && c != EOF);

      */
      /*
      continue; // Palaa takaisin valikon alkuun
    }
    */

    switch (nValinta) {
      case 0:
        nValinta = 0;
        break;

      case 1:
        printf("\n");
        printf("Anna jokin merkki: ");
        /* scanf("%s", sMjono); */
        getchar();
        scanf("%c", pSeurMerkki);
        bOnkoMjonossaTietuetta = TRUE; 
        iRivit++;
        pSeurMerkki++; // Siirry seuraavaan vapaaseen paikkaan
        printf("\n");
        break;

      case 2:
        printf("\n");
        if (bOnkoMjonossaTietuetta == TRUE) {
          for (int i = 0; i <= sizeof(sMjono); i++) {
            sMjono[i] = '\0';
          }
          printf("Merkkijono on tyhjennetty.\n");
          bOnkoMjonossaTietuetta = FALSE; 
        } else
          printf("Merkkijono on tyhjä.\n");

        printf("\n");
        break;

      case 3:
        printf("\n");
        if (bOnkoMjonossaTietuetta == TRUE) {
          printf("Merkkijono: ");
          for (int i = 0; i < iRivit; i++) {
            printf("%c", *pMjono); /* Tulosta merkki kerrallaan */
            pMjono++;
          }
        } else
          printf("Merkkijono on tyhjä.");

        printf("\n");
        printf("\n");
        break;

      default:
        printf("\n");
        printf("Tuntematon valinta.\n");
        printf("\n");
        break;
    }
  } while(nValinta != 0);

  printf("\nOhjelman lopetus.\n");

  return 0;
}

/******************************************************************/
/* eof */ 
