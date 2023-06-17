/* lnxbusdrvr 20230617 L4T5.c */
/******************************************************************/
#include <stdio.h>

int fibonacci(int luku);

int main(void) {
  int luku = 0;

  printf("Anna luku, jolle lasketaan Fibonaccin luku: ");
  scanf("%d", &luku);

  int fibo = fibonacci(luku);

  printf("Luvun %d Fibonaccin luku on %d.\nKiitos ohjelman käytöstä.\n", luku, fibo);

  return(0);
}

int fibonacci(int luku) {
  if (luku < 2)
    return luku;
  return fibonacci(luku - 1) + fibonacci(luku - 2);
}

/******************************************************************/
/* eof */ 
