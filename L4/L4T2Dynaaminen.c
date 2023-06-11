/* lnxbusdrvr 20230610 L4T2.c */
/******************************************************************/
#include <stdio.h>

#define KOKO 2

void kysy_arvot(int moneskoMatriisi, int matriisi[KOKO][KOKO]);
void tulosta_arvot(char *sOtsikko, int matriisi[KOKO][KOKO]);
void tallenna_summamatriisi(int matriisi[KOKO][KOKO], int matriisi2[KOKO][KOKO], int summamatriisi[KOKO][KOKO]);

int main(void) {
  int matriisi1[KOKO][KOKO] = {0};
  int matriisi2[KOKO][KOKO] = {0};
  int summamatriisi[KOKO][KOKO] = {0};

  printf("Anna arvot yhteenlaskettaville matriiseille:\n");
  kysy_arvot(1, matriisi1);
  tulosta_arvot("Matriisi 1", matriisi1);
  kysy_arvot(2, matriisi2);
  tulosta_arvot("Matriisi 2", matriisi2);
  tallenna_summamatriisi(matriisi1, matriisi2, summamatriisi);
  tulosta_arvot("Summamatriisi", summamatriisi);
  printf("Kiitos ohjelman käytöstä.\n");

  return(0);
}

void kysy_arvot(int moneskoMatriisi, int matriisi[][KOKO]) {
  printf("Matriisin %d alkiot:\n", moneskoMatriisi);

  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      printf("Rivi %d alkio %d: ",(rivi+1),(sarake+1));
      scanf("%d", &(matriisi[rivi][sarake]) );
    }
  }
}

void tulosta_arvot(char *sOtsikko, int matriisi[][KOKO]) {
  printf("\n");

  printf("%s\n", sOtsikko);

  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      printf("%4d %4d\n",(matriisi[rivi][sarake]),(matriisi[rivi][sarake+1]));
      break;
    }
  }
  printf("\n");
}

void tallenna_summamatriisi(int matriisi[][KOKO], int matriisi2[][KOKO], int summamatriisi[][KOKO]) {
  for (int rivi = 0;rivi < KOKO;rivi++) {
    for (int sarake = 0;sarake < KOKO;sarake++) {
      summamatriisi[rivi][sarake] = (matriisi[rivi][sarake] + matriisi2[rivi][sarake]);
    }
  }
}
/******************************************************************/
/* eof */ 
