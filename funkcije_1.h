#ifndef HEADER_FILE
#define HEADER_FILE

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "strukture.h"

// 1. OPCIJA - FORMIRANJE PRAZNE DATOTEKE
void *formiraj_datoteku(DATOTEKA* );
// 2. OPCIJA - IZBOR AKTIVNE DATOTEKE
void *otvori_postojecu(DATOTEKA *);
// 3. OPCIJA - ISPIS AKTIVNE DATOTEKE
void ispisi_aktivnu(char *);
// 4. OPCIJA - FORMIRANJE SERIJSKE DATOTEKE 
void formiraj_serijsku(char *);

// RANDOM FUNCKCIJE KOJE TREBAJU JER ETO
void iscitaj(DATOTEKA* );
void unos_novog_termina(TERMIN *);
void ucitaj_indeksnu_zonu_iz_DTTK(char *, int);
//void ispisi_primarnu_zonu();
//void ispisi_zonu_podataka();

#endif
