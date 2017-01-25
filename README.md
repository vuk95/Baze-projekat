# Baze-projekat
 
 Projektnizadatak (#51/p20)
 
 
...Napisati C program koji će omogućiti rad sa podacima o evidentiranim držanjima nastave u školi
Grad. Za svaki održani termin nastave beleži se evidencioni broj (6 cifara), naslov nastavne jedinice
(najviše 50 karaktera), datum i vreme održavanja, oznaka prostorije (najviše 7 karaktera) i broj
prisutnih učenika (do 100 000).
 
...Svi  podaci  moraju  biti  smeštani  u  binarnu  datoteku  sa  statičkom  indeks-sekvencijalnom
organizacijom koja koristi zonu indeksa sa propagacijom najvećih vrednosti ključa iz svakog bloka i
indirektno povezivanje prekoračilaca.
 
...Program treba da ponudi sledeće funkcionalnosti kroz formu tekstualnog korisničkog menija:

1. formiranje prazne datoteke pri čemu korisnik zadaje naziv nove datoteke

2. izbor aktivne datoteke zadavanjem njenog naziva

3. prikaz naziva aktivne datoteke [meni i prve tri tačke (1*)]

4. formiranje serijske datoteke direktnim unosom podataka u realnom vremenu (2*)

5. formiranje sekvencijalne datoteke tako što će se učitati slogovi iz serijske datoteke u
dinamičku strukturu podataka, sortirati članovi strukture podataka prema rastućoj vrednosti
identifikatora i upisati članovi strukture podataka u sekvencijalnu datoteku (3*)

6. formiranje aktivne datoteke tako što će se popunjavati primarna zona datoteke (sa početnom
popunjenošću bloka ibf) kroz redosledno učitavanje slogova sekvencijalne datoteke,
formirati zona indeksa i formirati zona prekoračenja (5*)

7. upis novog sloga u aktivnu datoteku direktnim unosom podataka u realnom vremenu (2*)

8. traženje proizvoljnog sloga u aktivnoj datoteci i njegov prikaz zajedno sa adresom bloka i
rednim brojem sloga u bloku (2*)

9. reorganizacija aktivne datoteke, pod uslovom da postoje barem tri sloga prekoračioca (3*)

 
Pripremiti posebnu test datoteku sa podacima koja će sadržati bar 10 slogova i primer bar dva sloga
prekoračioca. (2*)
 
Poštovati sledeća ograničenja:
1. vrednost faktora blokiranja f je 5
2. red stabla traženja i faktor blokiranja u zoni indeksa n je 2
3. vrednost faktora blokiranja za zonu prekoračenja fz je 1
4. popunjenost bloka pri formiranju datoteke ibf je 60%
5. prilikom rada nad datotekom, dozvoliti preuzimanje i upis isključivo čitavih blokova
6. prisustvo statusnog polja u slogu
7. upotrebu isključivo ASCII karaktera za tekstualni sadržaj
 
 
 Napomena:
1. za najviše 20 poena, realizovati sve funkcionalnosti poštujući uputstva i ograničenja
