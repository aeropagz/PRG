#include <stdio.h>

int main(void) {
    const float PREISAEPFEL = 1.7;
    const float PREISMELONE = 1.0;
    const float PREISPFIRSICH = 1.8;
    float preisGesamt = 0;
    float eingabe = 0;
    printf("Wie viel kg Aepfel?\n");
    scanf("%f", &eingabe);
    preisGesamt += eingabe * PREISAEPFEL;
    printf("Das sind %.2f Euro\n", eingabe*PREISAEPFEL);
    printf("Wie viele Melonen?\n");
    scanf("%f", &eingabe);
    preisGesamt += eingabe * PREISMELONE;
    printf("Das sind %.2f Euro\n", eingabe*PREISMELONE);
    printf("Wie viele kg Pfirsiche?\n");
    scanf("%f", &eingabe);
    preisGesamt += eingabe * PREISPFIRSICH;
    printf("Das sind %.2f Euro\n", eingabe*PREISPFIRSICH);
    printf("Das macht zusammen %.2f Euro\n", preisGesamt);
    return 0;
}