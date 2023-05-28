# True ja False

## Esikääntäjä

Esikääntäjä on kuin javassa import

Lisäksi voi esikäsitella erilaisia muuttujia #define:lla etc

pelkä esikääännöksen saa nähtäväksi,
kun ajaa käännöksen seuraavasti:

```
gcc -E ohjelma.c > esikastelty.ohjelma.c
```

## Määritellän true ja false

Eiskäsittelijään voi määritellä `TRUE` ja `FALSE`-vakiot seuraavasti

```c
#define TRUE 1
#define FALSE 0
```

