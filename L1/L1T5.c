/* un 20230526 L1T5.c */
/******************************************************************/
#include <stdio.h>

int main(void) {

  char sEtunimi[20] = "";
  char sSukunimi[20] = "";
  int nIka = 0;
  float fPaino = 0;

  printf("Anna etunimesi: ");
  scanf("%s", sEtunimi);
  printf("Anna sukunimesi: ");
  scanf("%s", sSukunimi);
  printf("Anna ikäsi: ");
  scanf("%d", &nIka);
  printf("Anna painosi: ");
  scanf("%f", &fPaino);
  printf("Nimesi on %s %s, ikäsi on %d vuotta ja painat %.1f kg.\n", sEtunimi, sSukunimi, nIka, fPaino);

  return(0);
}

/******************************************************************/
/* eof */ 
