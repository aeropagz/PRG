/******************************************************************
 * * Projekt:Labor2 Dateiname: 03.c Beschreibung: Berechnet Preise von Aepfeln, Melonen und Pfirsiche
 * * Autor: Klaas Pelzer (Matr.-Nr. 937569), Erstellt: Nov.  2020
 * ******************************************************************/
#include <stdio.h>

int main(void) {

    const float PREISAEPFEL = 1.7;
    const float PREISMELONE = 1.0;
    const float PREISPFIRSICH = 1.8;
    float fPreisGesamt = 0;
    float fEingabe = 0;
    
    printf("Wie viel kg Aepfel?\n");
    scanf("%f", &fEingabe);
    fPreisGesamt += fEingabe * PREISAEPFEL;
    printf("Das sind %.2f Euro\n", fEingabe*PREISAEPFEL);

    printf("Wie viele Melonen?\n");
    scanf("%f", &fEingabe);
    fPreisGesamt += fEingabe * PREISMELONE;
    printf("Das sind %.2f Euro\n", fEingabe*PREISMELONE);

    printf("Wie viele kg Pfirsiche?\n");
    scanf("%f", &fEingabe);
    fPreisGesamt += fEingabe * PREISPFIRSICH;
    printf("Das sind %.2f Euro\n", fEingabe*PREISPFIRSICH);

    printf("Das macht zusammen %.2f Euro\n", fPreisGesamt);
    
    return 0;
}