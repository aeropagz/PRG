/******************************************************************
 * * Projekt:ProgrammierenInC Dateiname: 01.c Beschreibung: ???
 * * Autor: Klaas Pelzer (Matr.-Nr. 937569), Erstellt: Sept. 2011
 * ******************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b;
	float erg;
	printf("Ein erstes Programm...\n");
	printf("\n");
	printf("Bitte die erste (ganze) Zahl eingeben:\n");
	scanf("%d", &a);
	printf("Bitte die zweite (ganze) Zahl eingeben:\n");
       	scanf("%d", &b);
       	erg = a + b;
	printf("%d + %d = %f\n", a, b, erg);
	erg = a - b;
	printf("%d - %d =%f\n", a, b, erg);
	erg = a * b;
	printf("%d * %d = %f\n", a, b, erg);
	erg = a / b;
	printf("%d / %d = %f\n", a, b, erg);
        return 0;
}
