/* lnxbusdrvr 20230626 L7T1_io.c */
/*****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int lueAskeleetListaan(int *lista, int *koko) {
  FILE *tiedosto = fopen("askeldata.txt", "r");
  if (tiedosto == NULL) {
    printf("Tiedoston avaus epäonnistui.\n");
    exit(0);
  }

  int summa = 0;
  int i = 0;
  char rivi[100] = {0};

  while (fgets(rivi, sizeof(rivi), tiedosto) != NULL && i < *koko ) {
    sscanf(rivi, "%*[^:]:%d", &lista[i]);
    summa += lista[i];
    i++;
  }
  fclose(tiedosto);
  return summa;
}

void tulostaLista(int *lista, int koko) {
  printf("Listan askeleet: ");
  for (int i = 0;i < koko;i++) {
    printf("%d ", lista[i]);
  }
}

/*****************************************************************/
/* eof */ 
