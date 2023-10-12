//
// Created by mhdso on 09/10/2023.
//
#include <stdio.h>

int main(){
    int longueur = 0;
    int largeur = 0;
    printf("saisissez longueur : ");
    scanf("%d",&longueur);
    printf("saisissez largeur : ");
    scanf("%d",&largeur);
    float perimetre;
    perimetre = (longueur + largeur) / 2;
    int aire = (longueur*largeur);
    printf("la valeur de l'aire est: %d\n",aire);
    printf("la valeur du perimetre est : %f", perimetre);



    return 0;
}