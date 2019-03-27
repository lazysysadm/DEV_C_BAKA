#include <stdio.h> // je crois que c'est la biblio obligatoire de base en C ! sans on peut rien faire :O
#include <stdlib.h> //Demande a google :O
#include <time.h> // je ne sais pas ce que ca fout la mais ca doit servir a quelquechose je pense ><
#include <unistd.h> // pour utiliser la fonction sleep()


//VARIABLES
int flag = 0;
int count_baka = 0;
int randomNumRep;
int randomNum;

//START
int genRandomNum() //Fonction qui sert à generer des nombre aleatoire
{
    int randomNum;
    randomNum = rand() % 20 + 2;
    return randomNum;
}

int genRandomNumRep() //Fonction qui sert à generer des nombre aleatoire
{
    randomNumRep = rand() % 20 + 2;
    printf(" Fonction randomNumRep ==> Nbr Propose to guess :D : %d\n", randomNumRep);
    return randomNumRep;
}

int verifReponse(int repUser)  //Fonction qui va afficher le msg de WIN si la partie est gagne, et leve le flag de sortie.
{
    count_baka = (count_baka + 1);
    if (repUser == randomNum)
    {
        printf("OH ! Yeaaahh !! That's IT !! :D \n");
        printf("Nbr d'essais : %d \n", count_baka);
        printf("\n");
        flag = 1;
        return flag;
    }
}