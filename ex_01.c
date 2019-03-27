#include <stdio.h>

//ex_01.c
main()
{
    printf("One line, there\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//VARIABLES
int randomNum, repUser, replayer;
int flag = 0;

//START
genRandomNum() //Fonction qui sert à generer des nombre aleatoire
{
    randomNum = rand() % 20 + 2;
    printf("Nbr To Guess : %d\n", randomNum);
    return randomNum;
}

verifReponse(repUser)  //Fonction qui va afficher le msg de WIN si la partie est gagne, et leve le flag de sortie.
{
    if (repUser == randomNum)
    {
        printf("OH ! Yeaaahh !! That's IT !! :D \n");
        printf("\n");
        flag = 1;
        return flag;
    }
}

giveHelpPlayer(repplayer) // Fonction qui apporte de l'aide a l'user pour trouver le bon chiffre/nombre
{
    if (replayer > randomNum)
    {
        printf("Plus bas !!");
    }
    if (replayer < randomNum)
    {
        printf("Plus Haut !!");
    }
}

int main()
{
    srand(time(NULL)); //seed pour initialiser un nombre pseudo aleatoire. A faire avant l'appel a la fonction rand.
    genRandomNum();    // Demande un nombre aleatoire
    while (flag != 1)
    {
         printf("Guess Magic Num :\n");
         scanf("%d", &repUser);  // prendre la valeur du player via le clavier et l'enregistrer dans la variable
         verifReponse(repUser);  // Verifiçer la reponse et voir si c'est ok ou non
         giveHelpPlayer(repUser); // Aide player
    }
}