/* lnxbusdrvr 20230617 L5T2.c */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int tarkistaSyote(char argv[]);
int *varaaMuisti(int alkioidenLkm);
void taytaTaulukko(int *pTaulukko, int alkioidenLkm);
void tulostaTaulukko(int *pTaulukko, int alkioidenLkm);
void vapautaMuisti(int *pTaulukko, int alkioidenLkm);

int main(int argc, char *argv[]) {
  /* argc = 1 = ei käyttäjän antamia syötteitä */
  if (argc < 2) {
    printf("Et antanut taulukon kokoa.\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  int alkioidenLkm = tarkistaSyote(argv[1]);

  int *pTaulukko =  varaaMuisti(alkioidenLkm);

  printf("Taulukossa on tilaa %d alkiolle.\n", alkioidenLkm);

  taytaTaulukko(pTaulukko, alkioidenLkm);
  tulostaTaulukko(pTaulukko, alkioidenLkm);
  vapautaMuisti(pTaulukko, alkioidenLkm);

  printf("\nKiitos ohjelman käytöstä.\n");

  return(0);
}

int tarkistaSyote(char argv[]) {

  int luku = atoi(argv);

  if (luku > 0)
    return luku; 
  else {
    printf("Parametri ei ollut positiivinen kokonaisluku.\nKiitos ohjelman käytöstä.\n");
    exit(0);
  }

  return 0;
}

int *varaaMuisti(int alkioidenLkm) {
  int *pTaulukko = (int *)malloc(alkioidenLkm * sizeof(int));

  if (pTaulukko == NULL) { /* Pakollinen tarkistus */
    perror("Muistin varaus epäonnistui");
    exit(0);
  } else {
    printf("Muistin varaus onnistui.\n");
  }

  return pTaulukko;
}

void taytaTaulukko(int *pTaulukko, int alkioidenLkm) {
  for (int i = 0;i < alkioidenLkm;i++) {
    printf("Anna %d. luku: ", (i + 1));
    scanf("%d", &pTaulukko[i]);
  }
  printf("Taulukko täytetty.\n");
}

void tulostaTaulukko(int *pTaulukko, int alkioidenLkm) {
  printf("Taulukossa on luvut: ");
  for (int i = 0;i < alkioidenLkm;i++) {
    printf("%d ", pTaulukko[i]);
  }
  printf("\nTaulukko tulostettu.\n");
}

void vapautaMuisti(int *pTaulukko, int alkioidenLkm) {
  if (pTaulukko != NULL) {
    free(pTaulukko);
    pTaulukko = NULL;
    printf("Muisti vapautettu.");
  } else {
    printf("Muisti on jo vapautettu tai sitä ei ole varattu.\n");
  }
}

/******************************************************************/
/* eof */ 
