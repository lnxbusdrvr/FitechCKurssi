/* un 20230526 L1T4.c */
/******************************************************************/
#include <stdio.h>

int main(void) {
  char merkki = '\x0';
  char mjono[20] = "";

  printf("Anna merkki: ");
  scanf("%c", &merkki);
  printf("Annoit merkin '%c'.\n", merkki);

  printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
  scanf("%s", mjono);
  printf("Annoit merkkijonon '%s'.\n", mjono);

  return(0);
}

/******************************************************************/
/* eof */ 
