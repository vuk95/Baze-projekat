#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funkcije.h"
#include"primarna_zona.h"
#include"strukture.h"

//Globalne promenljive
int kljuc;

int main()
{
 
 DATOTEKA F;
 int odg;
 do{
 
    system("clear");
    printf(">Za prekid programa stisnite 0 < \n");
    printf("[1] Za unos nove prazne datoteke.\n");
    printf("[2] Za otvaranje vec postojece datoteke. \n");
    printf(" Izgled vase datoteke :");
    ispisi_primarnu_zonu();
    ispisi_zonu_podataka();
    ispisi
    printf("\n\n Odgovor >> "); 
    scanf("%d", &odg);
    switch(odg)
    {  
      case 1 :  F.lokacija = formiraj_datoteku(F.lokacija);
                break;
      case 2 :  F.lokacija = otvori_postojecu();
                iscitaj(F);
                break;
 
    }
   }while(odg != 0);
return 0;
}

