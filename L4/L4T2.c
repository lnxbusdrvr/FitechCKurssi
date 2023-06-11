/* lnxbusdrvr 20230611 L4T2.c */
/******************************************************************/
#include <stdio.h>

#define KOKO 2

void tulosta_arvot(char *sOtsikko, int matriisi[KOKO][KOKO]);

int main(void) {
  int matriisi1[KOKO][KOKO] = {0};
  int matriisi2[KOKO][KOKO] = {0};
  int summamatriisi[KOKO][KOKO] = {0};

  printf("Anna arvot yhteenlaskettaville matriiseille:\n");
/******************************************************************/
  printf("Matriisin 1 alkiot:\n");

  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      printf("Rivi %d alkio %d: ",(rivi+1),(sarake+1));
      scanf("%d", &(matriisi1[rivi][sarake]) );
    }
  }
/******************************************************************/
  printf("\n");
  tulosta_arvot("Matriisi 1", matriisi1);
  printf("\n");
  printf("\n");
/******************************************************************/
  printf("Matriisin 2 alkiot:\n");

  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      printf("Rivi %d alkio %d: ",(rivi+1),(sarake+1));
      scanf("%d", &(matriisi2[rivi][sarake]) );
    }
  }
/******************************************************************/
  printf("\n");
  tulosta_arvot("Matriisi 2", matriisi2);
  printf("\n");
  printf("\n");
/******************************************************************/
  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      summamatriisi[rivi][sarake] = (matriisi1[rivi][sarake] + matriisi2[rivi][sarake]);
    }
  }
/******************************************************************/
  tulosta_arvot("Summamatriisi", summamatriisi);
/******************************************************************/
  printf("\n");
  printf("\n");
  printf("Kiitos ohjelman käytöstä.\n");

  return(0);
}

void tulosta_arvot(char *sOtsikko, int matriisi[][KOKO]) {
  printf("%s:\n", sOtsikko);

  printf("%4d %4d \n",(matriisi[0][0]),(matriisi[0][1]));
  printf("%4d %4d ",(matriisi[1][0]),(matriisi[1][1]));
}

/******************************************************************/
/* eof */ 
