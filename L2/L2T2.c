/* un 20230 L.c */
/******************************************************************/
#include <stdio.h>

int main(void) {

  int nLuku = 0;
  /* int i = 0; */
  int nSum = 0;
  printf("Anna jokin luku väliltä 10 - 200: ");
  scanf("%d", &nLuku);

  if (nLuku >= 10 && nLuku <= 200 ) {
    for (int i = 0; i <= nLuku; i++) {
      nSum += i;
    }
    printf("Lukujen 0 - %d summa on %d.\n", nLuku, (nSum));
  } else
    printf("Antamasi luku ei ole annetulla välillä.\n");


  return(0);
}

/******************************************************************/
/* eof */ 
