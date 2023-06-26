/* lnxbusdrvr 20230626 L7T1.c */
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "L7T1_io.h"

int main(void) {

  int koko = 10; /* Alusta koko arvolla 11, ei tarvitse olla osoitin (int *) */
  int *lista = (int *)malloc(koko * sizeof(int)); /* Varmista, että koko on kertolasku sizeof(int) kanssa */

  printf("Askelanalyysi\n");
  int summa = lueAskeleetListaan(lista, &koko); /* Lähetä koko osoitteena ampersandin (&) avulla */
  tulostaLista(lista, koko);
  printf("\nAskelia yhteensä: %d\nKiitos ohjelman käytöstä.", summa);

  free(lista); /* Vapauta muistialue */

  return 0;
}

/*************************************************************/
/* eof */

