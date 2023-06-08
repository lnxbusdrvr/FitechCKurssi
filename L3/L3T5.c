/* lnxbusdrvr 20230608 L3T5.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>


void kirjoita_tiedostoon(char *tiedostonimi, int nLuku);
void lue_ja_tulosta_tiedosto(char *tiedosto);

int main(void) {

  char tiedostonimi[20] = {0};
  int nLuku = 0;

  printf("Anna käsiteltävän tiedoston nimi: ");
  scanf(" %s", tiedostonimi);
  printf("Anna satunnaisluvuille lähtöarvo: ");
  scanf("%d", &nLuku);
  kirjoita_tiedostoon(tiedostonimi, nLuku);
  lue_ja_tulosta_tiedosto(tiedostonimi);
  printf("\nKiitos ohjelman käytöstä.\n");

  return(0);
}

void kirjoita_tiedostoon(char *tiedostonimi, int nLuku) {

  FILE *tiedosto = fopen(tiedostonimi, "wb");
  if (tiedosto  == NULL) {
    perror("Tiedoston avaaminen epäonnistui, lopetetaan");
    exit(0);
  }

  int randLuku = 0;
  srand(nLuku);

  for (int i = 0;i < 20;i++) {
    randLuku = rand() % 1000;
    fwrite(&randLuku, sizeof(randLuku), 1, tiedosto);
  }

  fclose(tiedosto);

  printf("Tiedoston kirjoitus onnistui.");
}

void lue_ja_tulosta_tiedosto(char *tiedostonimi) {

  FILE *tiedosto = fopen(tiedostonimi, "rb");
  if (tiedosto  == NULL) {
    perror("Tiedoston avaaminen epäonnistui, lopetetaan");
    exit(0);
  }

  printf("\nTiedostossa on seuraavat luvut:\n");

  int luku = 0;

  for (int i = 0;i < 20;i++) {
    fread(&luku, sizeof(luku), 1, tiedosto);
    printf("%d ", luku);
  }

  fclose(tiedosto);

  printf("\nTiedoston lukeminen onnistui.");
}

/******************************************************************/
/* eof */ 
