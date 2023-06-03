    /* lnxsbusdrvr 20230603 L2T5.c */
    /******************************************************************/
    #include <stdio.h>

    #define MAX 200
    #define FALSE 0
    #define TRUE 1

    int annaKoko(char *str);

    int main(void) {
      int nValinta = 0;

      /* HUOM
       * Alusta kaikki muuttujat niin ei tulostu
       * merkkijonoissa roskia 
       */
      char sMjono[MAX] = {' '};
      int iRivi = 0;

      int bOnkoMjonossaTietuetta = FALSE;

      int mjonokoko = 0;

      printf("\n");
      do {
        printf("Valikko\n");
        printf("1) Lisää uusi merkki\n");
        printf("2) Tyhjennä merkkijono\n");
        printf("3) Tulosta merkkijono\n");
        printf("0) Lopeta\n");
        printf("Valintasi: ");
        
        scanf("%d", &nValinta); 

        mjonokoko = annaKoko(sMjono);

        switch (nValinta) {
          case 0:
            nValinta = 0;
            break;

          case 1:
            printf("\n");
            printf("Anna jokin merkki: ");
            getchar();
            if (scanf(" %c", &sMjono[iRivi]) == '\n') {
              printf("\nMerkkijono oli tyhjä.");
            } else if(annaKoko(sMjono) > MAX) {
              printf("\nMerkkijonoon ei mahdu enempää merkkejä.");
            } else {
              bOnkoMjonossaTietuetta = TRUE; 
              iRivi++;
            }

            printf("\n");
            break;

          case 2:
            if (bOnkoMjonossaTietuetta == TRUE) {
              for (int i = 0; i <= mjonokoko; i++) {
                sMjono[i] = ' ';
              }
              sMjono[0] = '\0';
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
              printf("Merkkijono: %s", sMjono);
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
      int iRivi = 0;
      for (iRivi = 0; str[iRivi] != '\0';iRivi++) {
      }
      return iRivi;
    }


    /******************************************************************/
    /* eof */ 


