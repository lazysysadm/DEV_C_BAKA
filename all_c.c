




//**********************************************************************************************************************************

int main()
{
    srand(time(NULL)); //seed pour initialiser un nombre pseudo aleatoire. A faire avant l'appel a la fonction rand.
    genRandomNum();    // Demande un nombre aleatoire
    while (flag != 1)
    {
            printf(" **INFO** Nbr To Guess : %d *** \n", randomNum);
            genRandomNumRep(); //simule la reponse donne par un etre humain malveillant !
            printf("Ce qui est envoye a la fonction verif est : %d \n", randomNumRep);
            verifReponse(randomNumRep);  // Verifiçer la reponse et voir si c'est ok ou non
            //sleep(5);
    }
return 0;
}

