// legge 100 caratteri da tastiera, li riscrive in ordine inverso alla fine di un file vecchio.txt SE ESISTE GIA'
// se non esiste scrive la stessa cosa in un file NUOVO.txt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 100

int main(){
    FILE *outF;
    char v[n];
    srand(time(NULL));

    // leggo la sequenza di caratteri
    for(unsigned int i=0; i<n; i++){
        v[i]=rand()%27+'a';
        printf("%c\t",v[i]);
    }

    // provo ad aprire il file vecchio.txt in caso contrario creo nuovo.txt
    if((outF = fopen("vecchio.txt", "r")) == NULL){
        outF = fopen("nuovo.txt", "w");
        printf("Non sono riuscito ad aprire il file vecchio.txt");
    } else {
        outF = fopen("vecchio.txt", "w");
    }

    for(unsigned int i=1; i<=n; i++){
        fprintf(outF, "%c\t", v[n-i]);
    }

     return 0;
}