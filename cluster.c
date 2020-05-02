// ricerca cluster in una matrice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Nmax 30
#define cluster 3

int main(){
    int n,m, i,j;
    int mat[Nmax][Nmax];
    // inizializzo la matrice
    for(i=0; i<Nmax; i++){
        for(j=0; j<Nmax; j++){
            mat[i][j]=0;
        }
    }

    // inserimento dimensioni matrice
    do{
        printf("Inserire le dimensioni della matrice [sintassi: NxM]: ");
        scanf("%dx%d", &n, &m);
    } while (n<=cluster || m<=cluster || n>Nmax || m>Nmax);

    // inserimento casuale di valori
    srand(time(NULL));
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            mat[i][j]=rand()%-4;        // 0,1,2,3
        }
    }

    // stampo la matrice
    printf("\n\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf(" %d  ", mat[i][j]);
        }
        printf("\n\n");
    }

    // ricerco i cluster
    int n_cluster=0, r, c, controllo=0;
    for(i=0; i<=n-cluster; i++){
        for(j=0; j<=m-cluster; j++){
            for(r=0; r<cluster; r++){
                for(c=0; c<cluster; c++){
                    if(mat[i+r][j+c]!=0){
                        controllo++;
                    }
                }
            }
            if(controllo==cluster*cluster){
                n_cluster++;
                printf("Cluster %dx%d con centro in (%d, %d).\n", cluster, cluster, i+2, j+2);
            }
            controllo=0;
        }
    }

    printf("Nella matrice sono presenti %d cluster. [matrici %dx%d con elementi diversi da 0].\n\n", n_cluster, cluster, cluster);

    return 0;
}