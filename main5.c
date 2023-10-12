//
// Created by mhdso on 09/10/2023.
//
#include <stdio.h>
#define MAX  3
int main(){
    int a =0;
    printf("saisir un entier: ");
    scanf("%d",&a);
    if(a%MAX==0 && a>=10){
        printf("le nombre choisi est divisble par 3 et superieur a 10");
    }
    else if(a%MAX==0 && a<10){
     printf("le nombre choisi est divisible par 3 mais n'est pas superieur a 10");
    }
    else
        printf("le nombre choisi n'est ni superieur a 10 ni divisible par 3 ");


    return 0;
}
