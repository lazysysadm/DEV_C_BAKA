#include<stdio.h>
//ex_point.c
int main()
{
        int x, y; // on declare la variable x
        int *ptr_p; // on creer un pointeur

        x = 5; // on initialise la variable x a 5
        ptr_p = &x; // le pointer ptr_p pointe vers l'addresse de de x
        printf("Valeur de x origin : %d\n", x);
        y = *ptr_p; //dereference de u pointer avec * pour pouvoir utiliser
        y = x + 10;
        printf("Valeur de y avec pointer :%d...New val de x :%d\n", x, y);
        return 0;
}