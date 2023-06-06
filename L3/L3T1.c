/* lnxbusdrvr 20230602 L3T1.c */
/******************************************************************/
#include <stdio.h>

int laske_potenssi(int mista, int mihin);

int main(void) {
  int iLuku1;
  int iLuku2;

  printf("Ohjelma laskee luvun potenssin.\n");
  printf("Anna kokonaisluku, jonka haluat korottaa potenssiin: ");
  scanf("%d", &iLuku1);
  printf("Anna potenssi, jonka haluat laskea: ");
  scanf("%d", &iLuku2);

  int iTulos = laske_potenssi(iLuku1, iLuku2);

  printf("%d ^ %d = %d.\n", iLuku1, iLuku2, iTulos);

  printf("Kiitos ohjelman käytöstä.\n");

  return(0);
}

int laske_potenssi(int mista, int mihin) {
  int tulos = 1;
  for (int i = 0;i < mihin;i++) {
    tulos *= mista;
  }
  return tulos;
}
/******************************************************************/
/* eof */ 
