/* lnxbusdrvr 20230617 L5T1.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int laske_luvun_nelio(int luku);

int main(int argc, char *argv[]) {
  /* argc = 1 = ei syötteitä */
  if (argc < 2) {
    printf("Et antanut lukua!\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  int luku = atoi(argv[1]);
  int nelio = 0;

  printf("Luku on %d.", luku);
  nelio = laske_luvun_nelio(luku);
  printf("\nLuvun neliö on %d.\nKiitos ohjelman käytöstä.\n", nelio);

  return(0);
}

int laske_luvun_nelio(int luku) {
  return luku * luku; 
}

/******************************************************************/
/* eof */ 
