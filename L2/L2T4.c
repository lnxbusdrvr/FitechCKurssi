/* un 20230 L.c */
/******************************************************************/
#include <stdio.h>

#define PI 3.141

int main(void) {
  float fSyote = 0;
  int nValinta = 0;

  printf("Anna liukuluku: ");
  scanf("%f", &fSyote);
  printf("\nValikko\n1) Kerro piin arvo luvulla %.3f.\n2) Jaa piin arvo luvulla %.3f.\nValitse: ", fSyote, fSyote);
  scanf("%d", &nValinta);

  switch (nValinta) {
    case 1:
      printf("\nPii * %.3f = %.3f.\n", fSyote, (PI * fSyote));
      break;
    case 2:
      printf("\nPii / %.3f = %.3f.\n", fSyote, (fSyote / PI));
      break;
    default:
      printf("\nTuntematon valinta.\n");
      break;
  }

  return(0);
}

/******************************************************************/
/* eof */ 
