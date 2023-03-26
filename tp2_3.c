#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    #define N 5
    #define M 7

    int i,j;

    int mt[N][M];
    int *p;

    srand(time(NULL));
    
    for(i = 0;i<N; i++){

        for(j = 0;j<M; j++){
            mt[i][j]=1+rand()%100;
            printf("%d ", mt[i][j]);
        }

        printf("\n");

    }

    printf("\n");
    //--------con puntero----------------

    for(p = &mt[0][0]; p <= &mt[N-1][M-1]; p++) {
        *p = 1 + rand() % 100;
    }

    for(i = 0; i < N; i++) {

        for(j = 0; j < M; j++) {
            printf("%d ", mt[i][j]);
        }

        printf("\n");
    }

    return 0;
}



