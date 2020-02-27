// Programma che rimuove l'iva da un prezzo già ivato e restituisce il valore

#include <stdio.h>

int main (){
    int iva=0;
    float prezzo=0.00;
    printf("Inserire il prezzo ivato: ");
    scanf("%f", &prezzo);
    printf("Inserire la percentuale di iva da detrarre: ");
    scanf("\n%d", &iva);

    float psi=0;
    psi=(prezzo-prezzo*iva/100); // non bisogna mettere le parentesi in (iva/100) poiche' iva e' un int!!
    printf("\nPrezzo non ivato: %f, con percentuale di iva da applicare del %d%%.\n\n", psi, iva);

    return 0;
}