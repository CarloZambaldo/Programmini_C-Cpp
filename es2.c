// Es 2

#include <stdio.h>
#define n 10

void riordina(char vettore[], int lunghezza);
void tuttomaiusc(char vettore[], int lunghezza);
void printa(char vettore[], int lunghezza);

int  main (){
    char v[n];

    // faccio riempire la stringa
    for(int i=0; i<n-1; i++){
        printf("Inserire il valore in posizione %d: ",i);
        scanf("\n%c", &v[i]);
    }

    // stampo il vettore inserito
    printa(v, n);

    // modifico tutte le lettere in maiuscole
    tuttomaiusc(v, n);

    printf("\n\n");
    // stampo il vettore in maiuscole
    printa(v, n);

    // riordino il vettore
    riordina(v, n);

    printf("\n\n");
    // stampo il vettore riordinato
    printa(v, n);


    return 0;
}

void tuttomaiusc(char vettore[], int lunghezza){
    for(unsigned int i=0; i<(lunghezza-1); i++){
        if (vettore[i]>='a' && vettore[i]<='z'){
            vettore[i]-=32;
        }
    }
}

void riordina(char vettore[], int lunghezza){
    int b;
    do{
        b=0;
        for(unsigned int i=0; i<lunghezza-2; i++){
            if (vettore[i]>vettore[i+1]){
                vettore[i]+=vettore[i+1];
                vettore[i+1]=vettore[i]-vettore[i+1];
                vettore[i]-=vettore[i+1];
                b=1;
            }
        }
    }while(b==1);
}

void printa(char vettore[], int lunghezza){
    for(unsigned int i=0; i<(lunghezza-1); i++){
        printf("%c\t", vettore[i]);
    }
}
        
