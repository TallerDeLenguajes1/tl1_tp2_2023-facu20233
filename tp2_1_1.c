#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// codigo a completar
#define N 20

int main(){

    int i;
    double vt[N];

    srand(time(NULL));

    for(i = 0;i<N; i++){

    vt[i]=1+rand()%100;
    printf("%f", vt[i]);

    }

    //asihd
    //123

    return 0;
}

