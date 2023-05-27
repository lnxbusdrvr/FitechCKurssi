/* un 20230527 L1T2.c */
/******************************************************************/
#include <stdio.h>

int main(void) {
  int nLuku = 0;
  float fLuku = 0;

  printf("Anna kokonaisluku: ");
  scanf("%d", &nLuku);
  printf("Anna liukuluku: ");
  scanf("%f", &fLuku);
  printf("Annoit luvut %d ja %.2f.\n", nLuku, fLuku);

  return(0);
}

/******************************************************************/
/* eof */ 
