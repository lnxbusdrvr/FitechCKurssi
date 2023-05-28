/* un 20230528 L2T5.c */
/******************************************************************/
#include <stdio.h>

#define MAX 200

int main(void) {
  int nValinta;

  char sMjono[MAX];
  do {
    printf("Valikko\n");
    printf("1) Lisää uusi merkki\n");
    printf("2) Tyhjennä merkkijono\n");
    printf("3) Tulosta merkkijono\n");
    printf("0) Lopeta\n");
    printf("Valintasi: ");

    scanf("%d", &nValinta);

    switch (nValinta) {
      case 0:
        break;

      case 1:
        printf("\n");
        printf("Anna jokin merkki: ");
        scanf("%s", sMjono);
        printf("\n");
        break;

      case 2:
        printf("\n");
        for (int i = 0; i <= sizeof(sMjono); i++) {
          sMjono[i] = ' ';
        }
        sMjono[0] = '\0';
        printf("Merkkijono on tyhjennetty.\n");
        printf("\n");
        break;

      case 3:
        printf("\n");
        printf("Merkkijono: %s", sMjono);
        /*for (int i = 0; i < iRivit; i++) {
          printf("%c", sMjono[i]);
        }*/
        printf("\n");
        printf("\n");
        break;

      default:
        printf("Tuntematon valinta.\n");
        printf("\n");
        break;
    }
  } while(nValinta != 0);

  printf("Ohjelman lopetus.\n");

  return 0;
}

/******************************************************************/
/* eof */ 
