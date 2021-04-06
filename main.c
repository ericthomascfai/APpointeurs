#include <stdio.h>
int x=0; //variable de type entière
int *ptrx=NULL; //variable de type pointeur

/*****************************prototype********************************/
void passageparvaleur(int );
void passageparrefrence(int*);
/*****************************implémentation***************************/
void passageparvaleur(int valeur)
{
    valeur++;
}
void passageparrefrence(int* valeur)
{
    *valeur=*valeur+1; //*valeur++ ne marche pas
}

int main() {

    ptrx=&x; //ptrx prend la valeur de l'adresse de x
    printf("%d\n",x); //affiche la valeur de x
    printf("%p\n",ptrx); //affiche l'adresse du pointeur
    printf("%p\n",&x); //sans stockage
    printf("%p\n",&ptrx); //affiche l'adresse du pointeur pour information

    /***********************************indirection*******************************/
    printf("%d\n",*ptrx); //affichage du contenu de x par indirection
    /******************************test passage par valeur*************************/
    passageparvaleur(x); //passage de la copie de x
    printf("%d\n",x); //vérification
    /*****************************test de passage par référence*********************/
    passageparrefrence(&x); //passage de l'original de x par pointeur
    printf("%d\n",x); //vérification


    return 0;
}