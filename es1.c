/* Legge un numero da tastiera fino a che non viene inserito un numero intero positivo
   a quel punto stampa a video i suoi divisori */

#include <stdio.h>

int main(){
    int a;
    do{
        printf("Inserire un numero intero positivo: ");
        scanf("%d", &a);
    }while(a<=0);

    for(unsigned int i=1; i<=a/2; i++){
        if(a%i==0)
            printf("Il numero %d e' divisore di %d.\n", i,a);
    }
    return 0;
}