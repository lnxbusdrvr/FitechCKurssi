/* un 20230526 L1Demo.c */
/******************************************************************/
#include <stdio.h>

int main(void) {
  int luku = 0;

  printf("Moi\n");
  printf("Syötä luku: ");

  /*
   * sijoitetaan muuttujaan 
   * muistipaikan(&) osoitteseen(luku, 
   *   eli &luku)
   */
  scanf("%d", &luku);
  printf("Annoit luvun: %d.\n", luku);

  return(0);
}

/******************************************************************/
/* eof */ 
