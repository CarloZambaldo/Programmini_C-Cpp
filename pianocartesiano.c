// piano cartesiano

#include <stdio.h>
#include <stdlib.h>
#define N 20    // numero massimo punti
#define C 10     // dimensione piano cartesiano

typedef struct punto {
    int x;
    int y;
} point;

int plane[C][C];    // dichiarando qui il piano sono sicuro (viene garantito) che tutte le celle di memoria sono NULLE!!!

int main(){
    point P[N];

    int m,i,j;
    do{
        printf("Quanti punti vuoi inserire [max %d]? ", N);
        scanf("%d", &m);
    } while(m>N);
    
    printf("Inserisci le coordinate dei punti con la sintassi 'x y'\n");
    for(i=0; i<m; i++){
        printf("Punto %d: ", i+1);
        scanf("%d %d", &P[i].x, &P[i].y);
    }

    // metto 1 nella matrice piano se c'e' il punto + cancello quello sopra, scrivo i punti come (x,y)
    system("CLS");
    printf("I punti inseriti sono: ");
    for(i=0; i<m; i++){
        int x = P[i].x;
        int y = P[i].y;
        plane[y][x] = 1;            // inverto y e x (vedi disposizione assi) 
        printf("(%d,%d) ", x,y);
    }
    printf("\n\n");

    // stampo il piano
    for(i=C-1; i>=0; i--){
        printf("%d | ", i);     // stampo asse ordinate con numeri
        for(j=0; j<C; j++){
            if(plane[i][j]==1){
                printf("+ ");
            } else {
                printf("  ");
            }
        }printf("\n");
    }

    // stampo asse ascisse con numeri
    printf("    ");
    for(i=0; i<C; i++){
        printf("_ ");
    }
    printf("\n    ");
    for(i=0; i<C; i++){
        printf("%d ", i);
    }

    return 0;
}
