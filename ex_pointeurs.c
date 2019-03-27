#include <stdio.h>
//ex_pointeurs.c
int main()
{
    int age = 60;
    int *adresse_age = & age;

    printf("L'age est : %d \n", *adresse_age);
    printf("L'age est : %p \n", *adresse_age);

    return 0;
}