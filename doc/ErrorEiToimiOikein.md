# Error ei toimi oikein

## Ongelma

Testissä error ei toimi oikein, vaikka `perror()`-teksti on ihan oikein.

Ongelma on, että `perror()`in jälkeen on `exit(1)`.

## Ratkaisu

`exit()` pitää olla 0. Eli `exit(0)`.

Näin:

```c
FILE *tiedosto = fopen(tiedostonimi, "rb");
  if (tiedosto  == NULL) {
    perror("Tiedoston avaaminen epäonnistui, lopetetaan");
    exit(0);
  }
```
