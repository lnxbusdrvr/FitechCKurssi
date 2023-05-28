/* un 20230 L.c */
/******************************************************************/
#include <stdio.h>

int main(void) {

  int nSyote = 0;

  printf("Anna jokin kokonaisluku väliltä 1-10: ");
  scanf("%d", &nSyote);

  if (nSyote > 0 && nSyote < 11) {
    for (int i = 1; i <= nSyote; i++) {
      printf("%d kierros.\n", i);
    }
  } else
    printf("Antamasi luku ei ole välillä 1-10.\n");

  return(0);
}

/******************************************************************/
/* eof */ 
