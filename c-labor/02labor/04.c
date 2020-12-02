/******************************************************************
 * * Projekt:Labor2 Dateiname: 03.c Beschreibung: Berechnet Preise von Aepfeln, Melonen und Pfirsiche
 * * Autor: Klaas Pelzer (Matr.-Nr. 937569), Erstellt: Nov.  2020
 * ******************************************************************/

#include <stdio.h>


//Funktion holt solange Chars aus STDIN-Buffer bis Zeilenumbruch oder EndOfLine
void flush_stdin();

int main(void){

    char cVorname = '\0';
    char cNachname1 = '\0';
    char cNachname2 = '\0';
    char cNachname3 = '\0';
    char cNachname4 = '\0';
    char cNachname5 = '\0';
    char cNachname6 = '\0';
    char cNachname7 = '\0';
    char cNachname8 = '\0';

    int iTag = 0;
    int iMonat = 0;
    int iJahr = 0;

    float fSteuersatz = 0.0;

    printf("Bitte geben Sie Ihren Vornamen ein:\n");
    scanf("%c", &cVorname);
    flush_stdin();
    printf("Bitte geben Sie Ihren Nachnamen ein (mit Leerzeichen auf 8 Buchstaben):\n");
    scanf("%c%c%c%c%c%c%c%c", &cNachname1, &cNachname2, &cNachname3, &cNachname4, &cNachname5, &cNachname6, &cNachname7, &cNachname8);
    flush_stdin();
    printf("Bitte geben Sie Ihr Geburtsdatum im Format dd.mm.yyyy ein:\n");
    scanf("%d.%d.%d", &iTag, &iMonat, &iJahr);
    printf("Bitte geben Sie Ihren Steuersatz ein:\n");
    scanf("%f",&fSteuersatz);

    printf("\n");
    printf("**********************\n");
    printf("Name: %c. %c%c%c%c%c%c%c%c\n", cVorname, cNachname1, cNachname2, cNachname3, cNachname4, cNachname5, cNachname6, cNachname7, cNachname8);
    printf("Geburtsdatum: %d.%d.%d\n", iTag, iMonat, iJahr);
    printf("Steuersatz: %.2f\n", fSteuersatz);

    return 0;
}

void flush_stdin(){
    int c;
    while (c = getchar() != '\n' && c != EOF)
    {
        //macht nichts
    }
    
}