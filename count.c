#include <stdio.h>
//count.c
showStars()
{
    printf("*******************************************************************\n");
}

main()
{

   int numberStart;
   for (numberStart = 0; numberStart != 10; numberStart =  numberStart + 1) //+
       printf("Actual Nbr is : %2d\n", numberStart);

   showStars();

   for (numberStart = 10; numberStart != -1; numberStart =  numberStart - 1)  //-
       printf("Actual Nbr is : %2d\n", numberStart);
}