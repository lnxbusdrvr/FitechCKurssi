/* un 20230528 L2T1.c */
/******************************************************************/
#include <stdio.h>

int main(void) {

  int nLuku1 = 0;
  int nLuku2 = 0;

  printf("Anna kaksi kokonaislukua: ");
  scanf("%d", &nLuku1);
  scanf("%d", &nLuku2);
  printf("\n");

  printf("Valikko\n1) Summaa luvut yhteen.\n2) Kerro luvut keskenään.\nValitse: ");
  int nValinta = 0;
  scanf("%d", &nValinta);
  switch (nValinta) {
    case 1:
      printf("\nLuvut laskettiin yhteen. Tulos = %d.\n", (nLuku1 + nLuku2));
      break;
    case 2:
      printf("\nLuvut kerrottiin keskenään. Tulos = %d.\n", (nLuku1 * nLuku2));
      break;
    default:
      printf("\nTuntematon valinta.\n");
      break;
  }

  return(0);
}

/******************************************************************/
/* eof */ 
