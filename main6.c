//
// Created by mhdso on 10/10/2023.
//
#include <stdio.h>

int main(){
    int age = 0;
    printf("saisissez votre age : ");
    scanf("%d",&age);

    if (age < 0){

        printf("l'age saisi est invalide");

    }

    else if(0<age && age<12){
        printf("vous beneficiez du tarif enfant ");
        printf("ca vous couteras 4euros");
    }
    else if(age<27){

        printf("vous beneficiez du tarif jeune ");
        printf("ca fera 6euros ");
    }

else if(27>age && age<65) {
    printf("vous devez payer plein tarif ");
    printf("ca feras 9euros");
}
else{
    printf("vous beneficiez du tarif seniors ");
    printf(" ca fera 6euros");
}

    return 0;
}