/* lnxbusdrvr 20230611 L4T3.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 4) {
    printf("Et antanut syötteitä.\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  double luku1 = atof(argv[1]);
  double luku2 = atof(argv[3]);
  char *operaattori = argv[2];

  double summa = 0;

  if (strcmp(operaattori, "+") == 0)
    summa = luku1 + luku2;
  else if (strcmp(operaattori, "-") == 0)
    summa = luku1 - luku2;
  else if (strcmp(operaattori, "x") == 0)
    summa = (luku1 * luku2);
  else if (strcmp(operaattori, "/") == 0)
    summa = (luku1 / luku2);
  else {
    printf("Virheellinen syöte.\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  printf("%0.1f %s %0.1f = %0.2f\nKiitos ohjelman käytöstä.\n", luku1, operaattori, luku2 , summa);

  return(0);
}

/******************************************************************/
/* eof */ 
