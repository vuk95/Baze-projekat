
//Struktura datoteke
 typedef struct datoteka_st {
  char ime[30];
  FILE *lokacija;
 }DATOTEKA;

//Struktura entiteta (sloga) <- KOJI NIVO APSTRACIJE AHA!
 typedef struct skola_grad{
   char evi_broj[5];
   char nast_jedinica[19];
   char datum[9]; // dd:mm:yyyy
   char prostorija[19];
   int broj_prisutnih; // manje od 100k
 }TERMIN;

//Struktura zaglavlja
 typedef struct zaglavlje_st{
  int br_slogova;
  int br_blok;
  int duzina;
  int poz_kljuca;
  // pokazivac na pocetak spregnute strukture slogova  lol
 }ZAGLAVLJE;

 typedef struct blok_1_zone_st{
  
 }blok_1_zone;

