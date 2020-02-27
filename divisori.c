// inserisci un numero e restituisco la lista dei divisori

#include <stdio.h>

int main(){
    int n;
    do{
        printf("Inserire un numero naturale: ");
        scanf("%d", &n);
    }while(n<0);

    for(int i=1; i<n; i++){
        if(n%i==0){
            printf("Il numero %d e' divisore di %d.\n", i,n);
        }
    }

    return 0;
}