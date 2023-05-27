/* un 20230527 L1T3.c */
/******************************************************************/
#include <stdio.h>

int main(void) {

  int nLuku1 = 0;
  int nLuku2 = 0;

/******************************************************************/
  printf("Anna ensimmäinen kokonaisluku: ");
  scanf("%d", &nLuku1);
  printf("Anna toinen kokonaisluku: ");
  scanf("%d", &nLuku2);
/******************************************************************/
  int nKaksi = 2;
  printf("(%d + %d) * %d = %d\n", nLuku1, nLuku2, nKaksi, ((nLuku1 + nLuku2) * nKaksi));
/******************************************************************/
  int nKolme = 3;
  printf("(%d / %d) - %d = %d\n", nLuku1, nLuku2, nKolme,  ( (nLuku1 / nLuku2) - nKolme) );
/******************************************************************/
  nLuku1++;
  nLuku2--;
  /* % toimi escapena */
  printf("%d %% %d = %d\n", nLuku1, nLuku2, (nLuku1 % nLuku2));
/******************************************************************/


  return(0);
}

/******************************************************************/
/* eof */ 
