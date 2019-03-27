#include <stdio.h>
//cb_calc.c

//Declaration variables bidons globales
int alpha_start, nbtbl;

/*Fonction en charge de faire le calcul avec en parametre la table choisie

*/
calcTab(nbtbl)
{
    int start, res;
    for(start = 1; start != 10; start = start + 1)
    {
        res = (nbtbl*start);
        printf("%dx%d = %d\n", start, nbtbl, res);
    }
}

int main(void)
{
    printf("Table :");
    scanf("%d", &alpha_start);
    calcTab(alpha_start);
}