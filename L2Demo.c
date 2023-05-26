/* un 20230526 L1Demo.c */
/******************************************************************/
#include <stdio.h>

int main(void) {
  int luku;
  float desimaali;
  long pitka;
  double dd;
  char merkki;

  luku = 3;
  desimaali = 5.4;
  pitka = 6;
  dd = 0.3;
  merkki = 'c'; // Pitää olla heittomerkeissä

  printf("Muuttuja luku on %d, desimaali %f, pitkä on %ld, dd %lf, merkki ''%c'.\n",
      luku, desimaali, pitka, dd, merkki);

  printf("Anna kokonaisluku: ");
  scanf("%d", &luku);
  printf("Annoit luvun: %d.\n", luku);

  printf("Anna desimaali: ");
  scanf("%f", &desimaali);
  printf("Annoit luvun: %f.\n", desimaali);

  printf("Anna pitkä luku: ");
  scanf("%ld", &pitka);
  printf("Annoit luvun: %ld.\n", pitka);

  printf("Anna desimaali: ");
  scanf("%lf", &dd);
  printf("Annoit luvun: %lf.\n", dd);

  /*
   * Mitä tässä tapahtuu?
   *
   * scanf() puskeroituu'
   * ja ottaa escapet merkkijonoina
   *
   * Ennen kuin scanf() kyselee charia,
   * scanf() toimii niin, että se lulee 
   * saavansa käyttäjältä merkin,
   * joka nyt on rivinvaihto
   *
   * Eli meidän pitää ilmeisesti
   * aina ennen scanf-charkyselyä
   * poistaa edellinen merkki getchgar():lla
   * ennen kuin voidaan kysellä
   * merkkiä käyttäjältä
   */

  getchar();
  printf("Anna merkki: ");
  scanf("%c", &merkki);
  printf("Annoit merkin: ''%c'.\n", merkki);

/******************************************************************/
  char nimi[20] = "Ville";
  printf("Nimi: ''%s'.\n", nimi);

  printf("Anna nimi: ");
  scanf("%s", nimi); /* merkkijono saadaan %s:lla */
  printf("Annoit nimen: ''%s'.\n", nimi);
  /*
   * taulukko = rakenteellinen muuttuja
   *
   * scanf() tarvii yksinkertaisissa
   * muuttujissa &:n eli osoitteen
   * mutta taulukoissa riittää
   * pelkkä muuttuja, ei tarvii osoitetta
   */

  char nimi2[20];
  printf("Alustamaton muuttuja tulostaa tälläistä roskaa: ''%s'\nMuista aina alustaa\n", nimi2);

/******************************************************************/
  char *pNimi;
  int *pLuku;

  pNimi = nimi;
  printf("Annoit nimen: %s.\n", pNimi);

  /*
   * Ilmeisesti on niin
   * että kun char *:iin sijoitetaan tavallinen char
   * ei tarvite tehdö pNimi = &nimi
   * mutta kun sama tehdään
   * numeroille,
   * pitää pMuuttujaan sijoittaa osoite &
   *
   * Nyt printf:ssa pitää olla pMuuttujan pointteri
   *
   * Offtopic:
   *
   * ** tarkoittaa pointteri johon on sijoitettu pointteri
   */
  pLuku = &luku;
  printf("Luvun %d muistipaikan osoite on %p\n", *pLuku, pLuku);
  printf("Luvun %d muistipaikan osoite on %p yhtäkuin osoitin: %p\n", *pLuku, pLuku, &pLuku);
/******************************************************************/
  int luku1 = 6;
  int luku2 = 9;
  int suurempi;

  suurempi = (luku1 > luku2) ? luku1 : luku2;
  printf("Suurempi luku on %d\n", suurempi);
/******************************************************************/
  printf("int käyttää muistia %ld tavua (B)\n", sizeof(luku));
  printf("float käyttää muistia %ld tavua (B)\n", sizeof(desimaali));
  printf("long käyttää muistia %ld tavua (B)\n", sizeof(pitka));
  printf("double käyttää muistia %ld tavua (B)\n", sizeof(dd));
  printf("char käyttää muistia %ld tavua (B)\n", sizeof(merkki));
 /* printf("char [] käyttää muistia %s\n", sizeof(nimi));*/

/******************************************************************/
  return(0);
}

/******************************************************************/
/* eof */ 
