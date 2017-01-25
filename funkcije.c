#ifndef HEADER_FILE
#define HEADER_FILE

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "strukture.h"

// 1. OPCIJA - FORMIRANJE PRAZNE DATOTEKE
FILE *formiraj_datoteku(DATOTEKA* f);
// 2. OPCIJA - IZBOR AKTIVNE DATOTEKE
FILE *otvori_postojecu();
// 3. OPCIJA - ISPIS AKTIVNE DATOTEKE
void ispisi_aktivnu(char *aktivna);
// 4. OPCIJA - FORMIRANJE SERIJSKE DATOTEKE 
void formiraj_serijsku(char *ime_serijske);

// RANDOM FUNCKCIJE KOJE TREBAJU JER ETO
void iscitaj(DATOTEKA* f);
void unos_novog_termina(TERMIN *novi);
void ucitaj_indeksnu_zonu_iz_DTTK(char *dttk, int ispisStabla);
#endif
