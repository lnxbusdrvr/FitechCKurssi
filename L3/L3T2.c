/* lnxbusdrvr 20230 L.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define KOKO 20

int valikko();
void lue_ja_printtaa_tiedosto(char* tiedostonimi);
void kirjoita_tiedostoon(char* sTiedostonimi);

int main(void) {
  char sTiedostonimi[KOKO];
  int valinta;

  printf("Tämä ohjelma lisää nimiä tiedostoon ja lukee ne.\n");
  printf("Anna käsiteltävän tiedoston nimi: ");
  scanf(" %19s", sTiedostonimi);

  do {
  valinta = valikko();

    if (valinta == 0)
      printf("Kiitos ohjelman käytöstä.\n");

    else if (valinta == 1) 
      kirjoita_tiedostoon(sTiedostonimi);

    else if (valinta == 2) 
      lue_ja_printtaa_tiedosto(sTiedostonimi);

    else
      printf("\nTuntematon valinta.\n");

  } while(valinta != 0);

  return(0);
}

int valikko() {
  int iValinta;
  printf("Valitse alla olevista valinnoista\n");
  printf("1) Lisää uusi nimi\n");
  printf("2) Tulosta nimet\n");
  printf("0) Lopeta\n");
  printf("Anna valintasi: ");
  scanf("%d", &iValinta);

  return iValinta;
}

void lue_ja_printtaa_tiedosto(char* sTiedostonimi) {
  char rivi[50];
  FILE* tiedosto;

  tiedosto = fopen(sTiedostonimi, "r");
  if (tiedosto == NULL) {
    perror("Tiedoston avaaminen epäonnistui, lopetetaan");
    exit(0);
  }
  printf("Tiedostossa olevat nimet:\n");

  while (fgets(rivi, 50, tiedosto) != NULL) {
    printf("%s", rivi);
  }
  fclose(tiedosto);
  printf("Tiedosto luettu ja tulostettu.\n\n");

}

void kirjoita_tiedostoon(char* sTiedostonimi) {
  FILE* tiedosto;
  tiedosto = fopen(sTiedostonimi, "a"); /* a=append*/
  if (tiedosto == NULL) {
    perror("Tiedoston avaaminen epäonnistui, lopetetaan");
    exit(0);
  }
  char sNimi[KOKO];

  printf("Anna lisättävä nimi: ");
  scanf(" %s", sNimi);

  fprintf(tiedosto, "%s\n", sNimi);
  fclose(tiedosto);

  printf("Nimi lisätty tiedostoon.\n\n");

}

/******************************************************************/
/* eof */ 
