#include<stdlib.h>

extern int kljuc;

int napravi_novi_slog(char *slog)
{
 
 kljuc = kljuc + rand()%3 + 1; // Uvecava ga za najmanje 1 a najvise 4 broja
 return kljuc;  
}
