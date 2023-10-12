//
// Created by mhdso on 09/10/2023.
//
#include <stdio.h>

int main(){

    int a=0 ;
    int b =0;
    printf("saisissez un entier : ");
    scanf("%d",&a);
    printf("saisissez un entier : ");
    scanf("%d",&b);
    if(a<b){
        printf("le plus grand est %d", b);
    }
    else if(a=b){
        printf("les nombres sont identiques");
    }
    else
        printf(" le plus grand est %d",a);

    return 0;
}