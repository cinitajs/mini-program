#include<stdio.h>

int main () {
    struct information {
        char nome [30];
        char prenome[35];
        int nemero ;
        char email [40];
        char utlisateur [20];
    };

    struct information p1 [4];
    int i ;
    for(i=1 ; i<=1 ; i++) {
        printf("entre le nom : \t");
        scanf("%s",&p1[i].nome);
        printf("entre le prenome : \t");
        scanf("%s",&p1[i].prenome);
        printf("entre le nemero : \t");
        scanf("%d",&p1[i].nemero);
        printf("entre l'email : \t");
        scanf("%s",&p1[i].email);
        printf("entre le nome d'utilisateur: \t");
        scanf("%s",&p1[i].utlisateur);
    }
    printf("\n...................................\n");
    for(i=1 ; i<=1 ; i++) {
        printf("le nome:%s | le prenome:%s | le nemero:%d | l'email: %s | le nome d'utilisateur: %s",&p1[i].nome,&p1[i].prenome,&p1[i].nemero,&p1[i].email,&p1[i].utlisateur);
    }
    return 0;
}
    