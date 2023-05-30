/* un 20230530 L2T5.c */
/******************************************************************/
#include <stdio.h>

#define MAX 200
#define FALSE 0
#define TRUE 1

int annaKoko(char *str);

int main(void) {
  int nValinta;

  char sMjono[MAX];
  int iRivi = 0;

  int bOnkoMjonossaTietuetta = FALSE;

  /* Merkkijonopointteri 
   * merkkien järjestyksen 
   * tallentamiseen 
   * Oikeastaan koon selvittämiseen
   */
  char *pMjono;

  int mjonokoko;

  printf("\n");
  do {
    printf("Valikko\n");
    printf("1) Lisää uusi merkki\n");
    printf("2) Tyhjennä merkkijono\n");
    printf("3) Tulosta merkkijono\n");
    printf("0) Lopeta\n");
    printf("Valintasi: ");
    
    scanf("%d", &nValinta); 

    pMjono = sMjono;
    mjonokoko = annaKoko(pMjono);

    switch (nValinta) {
      case 0:
        nValinta = 0;
        break;

      case 1:
        printf("\n");
        printf("Anna jokin merkki: ");
        scanf("%s", &sMjono[iRivi]);
        /*if (sMjono[iRivi] == '\n' && sMjono[iRivi+1] == '\0') {*/
        /**if(getchar() == '\n' && getchar() == EOF) { */
        if (getchar() == '\n' && sMjono[iRivi] == '\0') {
          printf("\nMerkkijono oli tyhjä.");
        } else if(sMjono[iRivi] > MAX) {
          printf("Merkkijonoon ei mahdu enempää merkkejä.");
        } else {
          bOnkoMjonossaTietuetta = TRUE; 
          iRivi++;
        }

        /*getchar();*/
        printf("\n");
        break;

      case 2:
        if (bOnkoMjonossaTietuetta == TRUE) {
          for (int i = 0; i <= mjonokoko; i++) {
            sMjono[i] = ' ';
          }
          printf("\n");
          printf("Merkkijono on tyhjennetty.\n");
          bOnkoMjonossaTietuetta = FALSE; 
        } else
          printf("\nMerkkijono on tyhjä.\n");

        printf("\n");
        break;

      case 3:
        if (bOnkoMjonossaTietuetta == TRUE) {
          printf("\n");
          printf("Merkkijono: ");
          for (int i = 0; i < mjonokoko; i++) {
            printf("%c", sMjono[i]);
          }
          printf("\n");
        } else
          printf("\nMerkkijono on tyhjä.\n");

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

int annaKoko( char *str) {
  int koko = 0;
  while (str[koko] != '\0') {
    koko++;
  }
  return koko;
}


/******************************************************************/
/* eof */ 
