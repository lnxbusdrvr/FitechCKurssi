/* lnxbusdrvr 20230603 L3T3.c */
/******************************************************************/
#include <stdio.h>
#include <string.h>

#define KOKO 20

void kysy_kokonaisluku();
void kysy_desimaali();
void kysy_merkkijono();
void tulosta_suurempi_kluku(int x, int y);
void tulosta_suurempi_desi(float x, float y);
void tulosta_suurempi_mjono(char *sNimi1, char *sNimi2);

int main(void) {
  kysy_kokonaisluku();
  kysy_desimaali();
  kysy_merkkijono();

  printf("Kiitos ohjelman käytöstä.\n");

  return(0);
}

void kysy_kokonaisluku() {
  int iLuku1 = 0;
  int iLuku2 = 0;

  printf("Anna kaksi kokonaislukua:\n");
  printf("Luku 1: ");
  scanf("%d",&iLuku1);
  printf("Luku 2: ");
  scanf("%d",&iLuku2);

  tulosta_suurempi_kluku(iLuku1, iLuku2);
}

void kysy_desimaali() {
  float fLuku1 = 0;
  float fLuku2 = 0;

  printf("Anna kaksi desimaalilukua:\n");
  printf("Luku 1: ");
  scanf("%f",&fLuku1);
  printf("Luku 2: ");
  scanf("%f",&fLuku2);

  tulosta_suurempi_desi(fLuku1, fLuku2);
}

void kysy_merkkijono() {
  char sNimi1[KOKO] = "";
  char sNimi2[KOKO] = "";

  printf("Anna kaksi nimeä:\n");
  printf("Nimi 1: ");
  scanf("%s", sNimi1);
  printf("Nimi 2: ");
  scanf("%s", sNimi2);

  tulosta_suurempi_mjono(sNimi1, sNimi2);
}

void tulosta_suurempi_kluku(int x, int y) {
  if (x == y)
    printf("Luvut %d ja %d ovat yhtä suuria.\n", x, y);

  if (x < y)
    printf("Luku %d on suurempi ja %d pienempi.\n", y, x);

  if (x > y)
    printf("Luku %d on suurempi ja %d pienempi.\n", x, y);
}

void tulosta_suurempi_desi(float x, float y) {
  if (x == y)
    printf("Luvut %5.2f ja %5.2f ovat yhtä suuria.\n", x, y);

  if (x < y)
    printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", y, x);

  if (x > y)
    printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", x, y);
}

void tulosta_suurempi_mjono(char *sNimi1, char *sNimi2) {
  int vertailu = strcmp(sNimi1, sNimi2);

  if (vertailu < 0)
    printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", sNimi2, sNimi1);

  else if (vertailu > 0)
    printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", sNimi1, sNimi2);

  else 
    printf("Merkkijonona '%s' ja '%s' ovat yhtä suuria.\n", sNimi1, sNimi2);
}


/******************************************************************/
/* eof */ 
