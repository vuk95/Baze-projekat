#ifndef HEADER_FILE
#define HEADER_FILE

// 1. OPCIJA - FORMIRANJE PRAZNE DATOTEKE
// Korisnik unosi smo ime datoteke bez ekstenzije, to radi ova funckija. 
// Zatim sa kreiranim imenom na disku stvara nova datoteka i otvara je u wb rezimu
FILE *formiraj_datoteku(DATOTEKA* f)
{
  char ime_datoteke[20];
  printf("Unesite naziv vase datoteke: ");
  __fpurge(stdin);
  gets(ime_datoteke);
  strcat(ime_datoteke, ".txt");
  strcpy(f.ime , ime_datoteke);
  f.lokacija = fopen(ime_datoteke, "wb");
  return f;
}
// 2. OPCIJA - IZBOR AKTIVNE DATOTEKE
// Korisnik unosi takodje samo ime bez ekstenzije.
// Zatim se sa kreiranim imenom na disku pretrazuje i otvara je u rb rezimu
FILE *otvori_postojecu()
{
 char ime_datoteke[20];
 printf("Koja je vasa zelja? ");
 __fpurge(stdin);
 gets(ime_datoteke);
 strcat( ime_datoteke , ".txt");
 DATOTEKA* f;
 f.lokacija = fopen(ime_datoteke , "rb");
 strcpy(ime_datoteke, f.ime);

 if( f.lokacija == NULL)
  {
    printf("Greska pri otvaranju!");
    return NULL;
   }
 return f;
}
// 3. OPCIJA - ISPIS AKTIVNE DATOTEKE
// Ispisuje je ime aktivne datoteke bez ekstenzije
// U slucaju da nema ktivnih, ispisuje posebnu poruku
void ispisi_aktivnu(char *aktivna)
{
  if(strcmp(aktivna, "" ))
     printf("Nema aktivne datoteke trenutno!");
   else
     printf("Trenutno ativna datoteka je %s", aktivna);
}

// 4. OPCIJA - FORMIRANJE SERIJSKE DATOTEKE 
// Kreira se serijska datoteke sa direktnim unosom podataka u vremenu
void formiraj_serijsku(char *ime_serijske)
{
 FILE *DTTK;
 ime_serijske = strcat(ime_serijske, ".txt");
 DTTK = fopen(ime_serijske, "wb");
 int i, br_termina;
 printf("Koliko termina zelite da unesete? : ");
 scnaf("%d",&br_termina);
 int max_kljuc = 0;
 for( i = 0 ; i < br_termina; i++) // lol woot?
 {
   TERMIN novi;
   unos_novog_termina(&novi);
   // novi.status = aktivan
  if(novi.evi_broj > max_kljuc)
    max_kljuc = novi.evi_broj;
  fwrite(&novi, sizeof(TERMIN), 1 , DTTK);
 }
 TERMIN poslednji;
 poslednji.evi_broj =  max_kljuc + 1; // lol logic
//poslednji.status = neaktivan;
fwrite(&poslednji, sizeof(TERMIN), 1 , DTTK);
fclose(DTTK);
}

// RANDOM FUNCKCIJE KOJE TREBAJU JER ETO
// i olaksavaju inzinjerstvo
// HA HA HA HA HA 
void iscitaj(DATOTEKA* f)
{
  TERMIN temp;
 printf("Sadrzaj datoteke %s \n", f->ime);
 while(fread(&temp, sizeof(TERMIN), 1 , f->lokacija))
 {
   printf("Broj evidencije: %d\nNastavna jedinica: %s\nProstorijaL &s\nBroj prisutnih: %d",temp.evi_beoj, temp.nast_jedinica, temp.prostorija, temp.broj_prisutnih);
  
// printf("\nDATUM:%d%d:%d%d:%d%d%d%d",)
 }
  
}
void unos_novog_termina(TERMIN *novi)
{
  system("cls");
  // Provera da su samo cifre? Later maybe?
  printf("Unos novog sloga:\nEvidencioni broj temina:");
  scanf("%s", &novi->evi_broj); __fpurge(stdin);
  printf("Nastavna jedinica: ");
  scanf("%s", &novi->nast_jedinica);  __fpurge(stdin);
  printf("Datum: ");
  scanf("%s", &novi->datum);  __fpurge(stdin);
  printf("Prostorija: ");
  scnaf("%s", &novi->prostorija);  __fpurge(stdin);
  printf("Broj prisutnih: ");
  scnaf("%d", &novi->broj_prisutnih);  __fpurge(stdin);

}
void ucitaj_indeksnu_zonu_iz_DTTK(char *dttk, int ispisStabla)
{
 ZAGLAVLJE zaglavlje = ucitaj_zaglavlje(dttk);

 FILE *datoteka = fopen(dttk, "rb");
 fseek(datoteka, sizeof(ZAGLAVLJE) + sizeof(BLOK1ZONE)*zaglavlje.br_blok, SEEK_SET);

BLOKxZONE* blokovi_x_zone = (BLOKxZONE)malloc(sizeof(BLOKxZONE)*zaglavlje.br_blok);
if(blokovi_x_zone == NULL)
{
 printf("Neka greska nesto? Googlaj 8651.");
 exit(1);
}

for(i = 0 ; i < zaglavlje.br_blok ; i++)
{
  fread(&blokovi_x_zone[i], sizeof(BLOKxZONE) , 1 , datoteka);
}
// fclose(datoteka); preskupa operacija

int brSlogovaIndeksna = prebrojValidneSlgoveZoneIndeksa(blokovi_x_zone, zaglavlje.br_blo);



}
#endif
