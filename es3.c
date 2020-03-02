// Serie di caratteri fino a @, poi stampo quante volte e' stato inserito ciascun carattere

#include <stdio.h>
#define n 50
#define Le 26 // nuemro di lettere nell'alfabeto

typedef struct{
    char c;
    int u;
} cont;

int main(){
    cont K[Le+1];
    char ch;

    // inizializzo tutto
    for(int i=0; i<Le; i++){
        K[i].c='a'+i;
        K[i].u=0;
    }

    // richiedo l'inserimento di dati
    printf("Inserire un carattere e premere invio, ripetere fino a quanto necessario, quando si e' finito digitare @ e premere invio.\n");
    do{
        scanf("\n%c", &ch);
        if(ch>='a' && ch<='z'){
            K[ch-97].u++;       // 97 e' la posizione di 'a' nella tabella ASCII
        }
    }while(ch!='@');

    // stampo il risultato
    for(int i=0; i<Le; i++){
        printf("  %c -> %d\n",K[i].c,K[i].u);
    }
    return 0;
}