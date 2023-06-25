/* lnxbusdrvr 20230624 L6T3.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>

void varaaMuisti(int **taulukko, int *koko);
void tulostaTaulukko(const int *taulukko, int koko);
void vapautaMuisti(int *taulukko);
void valikko();

int main(void) {
  int *taulukko = NULL;
  int koko = 0;
  int valinta;

  do {
    valikko();
    scanf("%d", &valinta);
    switch (valinta) {

      case 0:
        valinta = 0;
        break;

      case 1:
        tulostaTaulukko(taulukko, koko);
        break;

      case 2:
        varaaMuisti(&taulukko, &koko);
        break;

      default:
        printf("Tuntematon valinta, yritä uudestaan.\n");
    }
  } while (valinta != 0);
  vapautaMuisti(taulukko);
  printf("Kiitos ohjelman käytöstä.\n");
  return 0;
}

void valikko() {
  printf("1) Tulosta listan alkiot\n");
  printf("2) Muuta listan pituutta\n");
  printf("0) Lopeta\n");
  printf("Anna valintasi: ");
}

void varaaMuisti(int **taulukko, int *koko) {
  int uusiKoko;

  printf("Anna listan uusi pituus: ");
  scanf("%d", &uusiKoko);

  if (uusiKoko < 0) {
    printf("Taulukon koko ei voi olla negatiivinen.\n");
    return;
  }

  int *uusiTaulukko = (int *)malloc(uusiKoko * sizeof(int));
  if (uusiTaulukko == NULL) {
    printf("Muistin varaus epäonnistui.\n");
    return;
  }

  for (int i = 0; i < uusiKoko; i++) {
    uusiTaulukko[i] = i;
  }

  vapautaMuisti(*taulukko);  /* Vapautetaan vanha taulukko */
  *taulukko = uusiTaulukko;  /* Päivitetään taulukon osoitin */
  *koko = uusiKoko;          /* Päivitetään koko */
}

void tulostaTaulukko(const int *taulukko, int koko) {
  if (taulukko == NULL || koko <= 0) {
    printf("Lista on tyhjä.\n");
    return;
  }

  printf("Listassa on seuraavat luvut: \n");
  for (int i = 0; i < koko; i++) {
    printf("%d ", taulukko[i]);
  }
  printf("\n");
}

void vapautaMuisti(int *taulukko) {
  free(taulukko);
}

/******************************************************************/
/* eof */
