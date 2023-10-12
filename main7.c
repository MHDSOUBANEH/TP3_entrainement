//
// Created by mhdso on 12/10/2023.
// exo 5//

#include<stdio.h>

int main(){
    int choix =0;
    printf("saisissez votre choix :");
    scanf("%d",&choix);
    if(choix>3 && choix<10){
        printf("votre choix n'est pas disponible");
    }
    switch (choix)
        case 1:
            printf("voici votre boisson chaude");


    return 0;
}
