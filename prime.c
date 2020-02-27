// Inserisci un numero e ti dico se è primo

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool b=true;
    int n;
    printf("Inserire un numero intero: ");
    scanf("%d", &n);

    for(int i=2; (b && (i<n)); i++){
        if(n%i==0)
            b=false;
    }

    if(b){
        printf("Il numero e' primo.");
    } else {
        printf("Il numero NON e' primo.");
    }
        
    
    return 0;
}