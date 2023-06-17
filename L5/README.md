# L5

## L5T1: Komentorivi- ja muuttujaparametrit

Tee yksinkertainen ohjelma, joka saa komentoriviparametrina kokonaisluvun. Lähetä luku
aliohjelmaan muuttujaparametrina ja muuta luvun arvo sen neliöksi aliohjelmassa. Tulosta
luku ennen aliohjelmakutsua ja sen jälkeen. Muista tarkistaa, että komentoriviparametri on
annettu ja jos ei ole, anna virheilmoitus on "Et antanut lukua!\n".

Esimerkkiajo:

Luku on 2.
Luvun neliö on 4.
Kiitos ohjelman käytöstä.

## L5T2: Kokonaislukutaulukon dynaaminen hallinta 

Tee ohjelma, joka ottaa komentoriviparametrina kokonaisluvun ja tarkistaa sen
oikeellisuuden. Luo sitten kokonaislukutaulukko, jossa on alkioita komentoriviparametrin
verran, kysy käyttäjältä luvut taulukkoon ja tulosta ne taulukosta näytölle. Käytetty muisti
tulee vapauttaa ohjelman suorituksen päättyessä.

Kuvauksen perusteella ohjelma kannattaa muodostaa seuraavista aliohjelmista

- tarkistaSyote
- varaaMuisti
- taytaTaulukko
- tulostaTaulukko
- vapautaMuisti

Tee ohjelmaasi nämä aliohjelmat. Ohjelma tarkistaa ensin komentorivinparametrin ja jos sitä
ei ole, ohjelman suoritus lopetetaan ja annetaan käyttäjälle virheilmoitus "Et antanut
taulukon kokoa."

- tarkistaSyote: Aliohjelma tarkistaa komentoriviparametristä, että se on nollaa suurempi kokonaisluku ja palauttaa kokonaisluvun. Mikäli muunnos ei onnistu, palauttaa funktio nollan, käyttäjälle annetaan virheilmoitus "Parametri ei ollut positiivinen kokonaisluku." ja ohjelman suoritus loppuu.
- varaaMuisti: Aliohjelma varaa muistia halutun kokoiselle taulukolle ja palauttaa osoittimen kokonaislukutaulukkoon. Mikäli muistin varaus epäonnistuu, antaa ohjelma virheilmoituksen "Muistin varaus epäonnistui" perror:lla ja se lopetetaan.
- taytaTaulukko: Aliohjelma saa parametreina osoittimen taulukkoon sekä alkioiden lukumäärän ja se täyttää taulukon käyttäjältä kysytyillä luvuilla.
- vapautaMuisti: Aliohjelma saa parametrina osoittimen taulukkoon ja se vapauttaa varatun muistin.

Esimerkkiajo

Muistin varaus onnistui.
Taulukossa on tilaa 3 alkiolle.
Anna 1. luku: 4
Anna 2. luku: 2
Anna 3. luku: 6
Taulukko täytetty.
Taulukossa on luvut: 4 2 6
Taulukko tulostettu.
Muisti vapautettu.
Kiitos ohjelman käytöstä.

## L5T3: Oman tietueen kopiointi ja vertailu

Tee ohjelma, jossa on HENKILO-tietue ja funktiot sen kopiointiin ja vertailuun sekä
demonstroi näiden toiminta. Ohjelman tulee ensin luoda em. tietue ja sen jälkeen kysyä
käyttäjältä kahden henkilön tiedot tietueisiin. Tämän jälkeen ohjelman tulee verrata noita
kahta tietuetta toisiinsa ja kertoa käyttäjälle, onko niiden sisällöt samat vai ei. Tämän jälkeen
ohjelma kopioi tietueen 1 tiedot tietueeseen 3 omalla kopiointifunktiolla. Lopuksi ohjelma
vertaa tietueen 1 sisältöä tietueen 3 sisältöön ja kertoo käyttäjälle, ovatko niissä olevat tiedot
samat sekä ovatko tietueiden 1 ja 3 muistiosoitteet samat.
HENKILO-tietueessa tulee olla 2 muuttujaa, etunimen tallettamiseen 30 alkioinen
merkkitaulukko ja iän tallettamiseen kokonaisluku. Tietueen kopiointi tulee tehdä
aliohjelmassa siten, että kaikkien muuttujien arvot kopioidaan uuteen tietueeseen yksi
kerrallaan siten, että kopioinnin jälkeen molemmissa tietueissa on sama etunimi ja ikä.
Tietueiden vertailu tarkoittaa sitä, että tietueiden kaikkien muuttujien arvoja vertaillaan
toisiinsa ja jos niissä on eroja, eivät tietueet ole samanlaisia. Tietueiden osoitteiden vertailu
tarkoittaa tietueiden ensimmäisten muistipaikkojen osoitteiden vertailua. C-kielessä ei ole
tietueen kopiointiin valmiita ratkaisuja, joten tässä tehtävässä sinun tulee toteuttaa itse
käytettävät tietueen kopiointi- ja vertailufunktiot. Merkkijonojen käsittelyssä voi käyttää
string-funktioita, jotka toimivat myös hyvänä mallina omien kopiointi- ja vertailufunktioiden
toteutuksessa.

Varaa tietueet 1 ja 2 staattisesti ja tietue 3 dynaamisesti sitten kun sitä tarvitaan. Muista
vapauttaa dynaamisesti varattu muisti ennen ohjelman loppumista. Esimerkkiohjelmassa
näkymätön virheilmoitus on "Muistin varaus epäonnistui".

Esimerkkiajo:

Anna ensimmäisen henkilön etunimi: Ville
L5Tehtavat
Anna ensimmäisen henkilön ikä: 5
Anna toisen henkilön etunimi: Kalle
Anna toisen henkilön ikä: 6
Annetut tiedot eivät ole samoja.
Kopioinnin jälkeen tietueiden tiedot ovat samoja.
Kopioinnin jälkeen tietueiden osoitteet eivät ole samoja.
Muisti vapautettu.
Kiitos ohjelman käytöstä.

## L5T4: Valikkopohjainen ohjelma kokonaislukutaulukon käsittelyyn

Tee valikkopohjainen ohjelma, joka pystyy tulostamaan kokonaislukutaulukossa olevat luvut
ja muuttamaan käytössä olevan taulukon kokoa, kunnes käyttäjä haluaa lopettaa ohjelman
suorituksen. Ohjelman alussa tulee luoda osoitin kokonaislukutaulukkoon ja taulukon kokoa
ylläpitävä muuttuja, jonka oletusarvo on nolla. Kun käyttäjä muuttaa taulukon kokoa, varaa
muistia dynaamisesti tarvittava määrä sekä täytä se numeroilla 0-N (taulukon koko).
Tulostettaessa ohjelma tulostaa kaikki taulukossa olevat arvot samalle riville välilyönnillä
erotettuna. Muistin varaus ja tulostaminen tulee suorittaa omissa aliohjelmissaan. Muista
varmistaa aina muistivarauksen onnistuminen, vapauta varattu muisti ohjelman lopuksi ja
pyri käymään läpi kaikki vaihtoehdot käyttäjän syöttämille arvoille. Käytä taulukon
tulostuksessa formaattia "%d ".

Ohjelman esimerkkiajossa näkymättömät virheilmoitukset ovat seuraavat
- "Muistin varaus epäonnistui"
- "Taulukon koko ei voi olla negatiivinen."
- "Tuntematon valinta, yritä uudestaan."

Esimerkkiajo:

1) Tulosta taulukon alkiot
2) Muuta taulukon kokoa
0) Lopeta
Anna valintasi: 1
Taulukko on tyhjä.
1) Tulosta taulukon alkiot
2) Muuta taulukon kokoa
0) Lopeta
Anna valintasi: 2
Anna taulukon uusi koko: 5
1) Tulosta taulukon alkiot
2) Muuta taulukon kokoa
0) Lopeta
Anna valintasi: 1
Taulukon alkiot ovat: 0 1 2 3 4
1) Tulosta taulukon alkiot
2) Muuta taulukon kokoa
0) Lopeta
Anna valintasi: 0
Muisti vapautettu.
Kiitos ohjelman käytöstä.
