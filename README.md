# Oliokurssi

C++-olio-ohjelmoinnin kurssin harjoitustehtävät. Jokainen tehtävä on oma Qt Creator -projektinsa omassa kansiossaan.

## Tehtävät

| Kansio | Aihe | Sisältö |
|---|---|---|
| `h1` | Ensimmäinen kotitehtävä | *(lisää kuvaus)* |
| `h2a` | Luokka ja olio | `Car`, `Rectangle` ja `Student` -luokat. Getterit ja setterit, olion luonti pinoon, kekoon (`new`/`delete`) ja smart pointerilla (`unique_ptr`). |
| `h2b` | Oliolista | `Car`-luokka konstruktorilla. Olioiden tallennus `std::vector`-listaan ja läpikäynti for-silmukalla. |
| `h3a` | Periytyminen | Kantaluokka `Chef` ja siitä periytyvä `ItalianChef`. Kantaluokan konstruktorin kutsuminen, destruktorit ja `protected`-jäsenet. |
| `h3b` | Polymorfismi | Kantaluokka `Animal` ja periytyvä `Dog`. Virtuaaliset metodit, `override`, virtuaalinen destruktori ja `unique_ptr<Animal>`-oliot vektorissa. |

## Käsitteet, joita harjoiteltiin

- Luokat, oliot ja kapselointi (`private`, `protected`, `public`)
- Jako `.h`- ja `.cpp`-tiedostoihin
- Konstruktorit ja destruktorit
- Pino- ja kekomuisti, pointerit ja smart pointerit
- `std::vector`
- Periytyminen ja polymorfismi

## Ajaminen

1. Avaa haluamasi tehtäväkansion projektitiedosto (`CMakeLists.txt` tai `.pro`) Qt Creatorissa.
2. Valitse kääntäjä (kit) ja paina **Run** (Ctrl+R).
