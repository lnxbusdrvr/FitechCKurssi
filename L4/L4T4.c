/* lnxsbusdrvr 20230616 L4T4.c */
/******************************************************************/
#include <stdio.h>
#include <string.h>

#define KOKO 50
#define MAX_KAYTTAJAT 50

typedef struct {
  int id;
  char tunnus[KOKO];
  char salasana[KOKO];
} Kayttajatunnus;

void valikko();
void poistaRivinvaihto(char *str);

int main(void) {
  int nValinta = 0;
  int kayttajienMaara = 0;
  Kayttajatunnus tunnus;
  Kayttajatunnus kayttajat[MAX_KAYTTAJAT] = {0};

  printf("Käyttäjätunnusten hallinta.\n");
  do {
    valikko();
        
    scanf("%d", &nValinta); 

    switch (nValinta) {
      case 0:
        nValinta = 0;
        break;

      case 1:
        printf("\n");
        if (kayttajienMaara >= MAX_KAYTTAJAT) {
          printf("Virhe: Maksimimäärä käyttäjätunnuksia on saavutettu.\n");
          break;
        }

        printf("Anna käyttäjätunnus: ");
        fgets(tunnus.tunnus, KOKO, stdin);
        fgets(tunnus.tunnus, KOKO, stdin);
        poistaRivinvaihto(tunnus.tunnus);

        if (strcmp(tunnus.tunnus, "") == 0) {
          printf("Virhe: Käyttäjätunnus ei voi olla tyhjä.\n");
          break;
        }

        printf("Anna salasana: ");
        fgets(tunnus.salasana, KOKO, stdin);
        poistaRivinvaihto(tunnus.salasana);

        if (strcmp(tunnus.salasana, "") == 0) {
          printf("Virhe: Salasana ei voi olla tyhjä.\n");
          break;
        }

        printf("Tunnus '%s' lisättiin listaan.", tunnus.tunnus);


        tunnus.id = kayttajienMaara;
        kayttajat[kayttajienMaara] = tunnus;
        kayttajienMaara++;

        printf("\n");
        printf("\n");

        break;

      case 2:

        printf("\n");
        if (kayttajienMaara > 0) {
          printf("Listalla olevat tunnukset:\n");
          for (int i = 0; i < kayttajienMaara; i++) {
            printf("%d. tunnus '%s', salasana '%s', ID '%d'.\n", (i + 1), kayttajat[i].tunnus, kayttajat[i].salasana, kayttajat[i].id);
          }
        }
        else if (kayttajienMaara == 0)
          printf("Listalla ei ole yhtään tunnusta.\n");

        printf("\n");
        break;

      case 3:
        printf("\n");
        break;

      default:
        printf("\n");
        printf("Tuntematon valinta.\n");
        printf("\n");
        break;
    }
  } while(nValinta != 0);

  printf("\nKiitos ohjelman käytöstä.\n");

  return 0;
}

int annaKoko( char *str) {
  int iRivi = 0;
  for (iRivi = 0; str[iRivi] != '\0';iRivi++) {
  }
  return iRivi;
}

void valikko() {
  printf("Valitse haluamasi toiminto:\n"); 
  printf("1) Lisää uusi tunnus\n"); 
  printf("2) Tulosta tunnukset\n"); 
  printf("0) Lopeta\n"); 
  printf("Valintasi: "); 
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


