//inv_var.c
#include <stdio.h>

void main()
{
    int a = 2;
    int b = 5;
    int tmpvar;

    printf("Var start : A : %d | B : %d\n", a, b);
    tmpvar = a;
    a = b;
    b = tmpvar;
    printf("Var end : A : %d | B : %d\n", a, b);
}