# L4

## L4T1: Tietueen peruskäyttö

Luo tietue Kirja, joka sisältää kolme muuttujaa: kirjan nimi, painovuosi ja hyllypaikka.
Kirjan nimi on merkkijono (max 50 merkkiä) kun painovuosi ja hyllypaikka ovat
kokonaislukuja. Pyydä käyttäjältä tiedot tähän tietueeseen ja tulosta ne näytölle. Muista
määritellä ohjelmassasi tietue (struct) ja vakio merkkijonon pituudelle. Ohjelmassa riittää olla
yksi tietue, johon tallennat kirjan tiedot ja josta ne tulostetaan näytölle alla olevan esimerkin
mukaisesti.

Esimerkkiajo

Anna kirjan nimi: Ohjelmistotuotanto
Anna kirjan painovuosi: 2010
Anna kirjan hyllypaikka: 123456
Kirjan nimi on 'Ohjelmistotuotanto', painovuosi 2010 ja hyllypaikka 123456.
Kiitos ohjelman käytöstä.

## L4T2: Matriisien yhteenlasku

Tee ohjelma, joka kysyy kahden kokonaislukumatriisin alkiot käyttäjältä, laskee niiden
summamatriisin ja tulostaa sen näytölle. Toteuta ratkaisusi 2x2 matriisina, kysy kahden
matriisin alkiot käyttäjältä ja laske aina samoilla paikoilla olevien alkioiden arvot yhteen,
sijoita ne summamatriisiin sekä tulosta matriisi. Toteuta yksi aliohjelma, jolla voit tulostaa
kaikki kolme matriisia. Lähetä tulostusaliohjelmaan matriisien lisäksi merkkijono, jossa on
tulostettavan matriisin nimi eli tällä kertaa ”Matriisi 1”, ”Matriisi 2” ja ”Summamatriisi”.
Käytä matriisin määrittelyssä vakioita ja tulostuksessa muotoile numero aina viiden merkin
levyiseen tilaan käyttäen formaattia ”%4d ”.

Esimerkkiajo

Anna arvot yhteenlaskettaville matriiseille:
Matriisin 1 alkiot:
Rivi 1 alkio 1: 2
Rivi 1 alkio 2: 3
Rivi 2 alkio 1: -4
Rivi 2 alkio 2: 1

Matriisi 1:
   2 3
  -4 1

Matriisin 2 alkiot:
Rivi 1 alkio 1: -1
Rivi 1 alkio 2: 0
Rivi 2 alkio 1: 22
Rivi 2 alkio 2: -30

Matriisi 2:
  -1 0
  22 -30

Summamatriisi:
   1 3
  18 -29

Kiitos ohjelman käytöstä.





## L4T3: Komentorivilaskin virheenkäsittelyllä 

Tee komentorivilaskin, joka pystyy laskemaan yhteen-, vähennys-, kerto- ja jakolaskuja.
Käytä laskuoperaatioiden tunnistamiseen seuraavia merkkejä:

- `+` yhteenlasku
- `-` vähennyslasku
- `x` kertolasku
- `/` jakolasku

Ohjelma ottaa vastaan komentoriviparametrejä, tulkitsee niistä luvut ja laskentaoperaation
sekä suorittaa laskennan käyttäen liukulukija. Ohjelman on tarkistettava syöte ja virheen
tapahtuessa se pystyy antamaan seuraavat virheilmoitukset:

1. "Et antanut syötteitä.", jos komentorivillä ei ole parametreja
2. "Virheellinen syöte.", jos ohjelma ei tunnista annettua laskuoperaatiota

Tee ohjelma käyttämättä ylimääräisiä muuttujia ja toteuta sekä laskutoimitus että tulostus
yhden printf-lauseen sisällä. Käyttäjältä luettavat parametrit ja operandi kannattaa tulostaa
ensi toisessa printf-lauseessa, jotta ohjelmasi on selkeä ja helppolukuinen. Voit tässä printf-
lauseessa käyttää merkkijonoja, jolloin desimaalilukujen muotoilusta ei tarvitse välittää.
Laskuoperaatioita varten tiedot tulee muuttaa desimaaliluvuiksi ja lopputulos tulee tulostaa
kahden desimaalin tarkkuudella (”%.2f” -formaatilla). Merkkijonon saa muutettua
desimaaliluvuksi esim. atof()-funktiolla (ascii to float), joka saa parametrinä merkkijonon
osoitteen ja palauttaa liukuluvun. Tarkempia tietoja ohjelmointioppaasta ja man-sivuilta.

Esimerkkiajo

2.5 x 8.3 = 20.75
Kiitos ohjelman käytöstä.




## L4T4: Valikkopohjainen ohjelma käyttäjätunnusten ylläpitoon 

Käyttäjätunnus ja salasana ovat merkkijonoja, joiden pituus on 50 merkkiä ja tietueet tulee
laittaa taulukkoon, jossa on tilaa 50 tunnukselle. Tietueiden hallinta taulukossa edellyttää
kolmatta alkiota tietueeseen, ID, joka on juokseva numero ohjelman sisäiseen käyttöön ja
joka kertoo käyttäjäntunnuksen paikan taulukossa. Käytä tietueen määrittelyssä hyväksi
typedef –käskyä ja määritä em. maksimiarvot vakioiksi define-käskyllä. Ohjelmassa tulee olla
pääohjelman lisäksi valikko-aliohjelma, joka tulostaa valikon ja palauttaa käyttäjän antaman
valinnan numerona.

Esimerkkiajo

Käyttäjätunnusten hallinta.
Valitse haluamasi toiminto:
1) Lisää uusi tunnus
2) Tulosta tunnukset
0) Lopeta
Valintasi: 1

Anna käyttäjätunnus: Brian
Anna salasana: salasana
Tunnus 'Brian' lisättiin listaan.

Valitse haluamasi toiminto:
1) Lisää uusi tunnus
2) Tulosta tunnukset
0) Lopeta
Valintasi: 2

Listalla olevat tunnukset:
1. tunnus 'Brian', salasana 'salasana', ID '0'.

Valitse haluamasi toiminto:
1) Lisää uusi tunnus
2) Tulosta tunnukset
0) Lopeta
Valintasi: 0

Kiitos ohjelman käytöstä.


## L4T5: Rekursio ja Fibonaccin luku

C-ohjelmointi © LUT Tite 4(4)
L4Tehtavat
L4T5: Rekursio ja Fibonaccin luku
Tee ohjelma, joka laskee Fibonaccin luvun rekursiota hyväksi käyttäen. Kysy käyttäjältä
luku, jolle lasket Fibonaccin luvun ja tulosta tulos näytölle. Huomaa, että tuloksena voi olla
iso luku eli huomioi se tietotyypissä ja jos et muista kaavaa, kannattaa apua kysyä
hakukoneelta.

Esimerkkiajo

Anna luku, jolle lasketaan Fibonaccin luku: 4
Luvun 4 Fibonaccin luku on 3.
Kiitos ohjelman käytöstä.


