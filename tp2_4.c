#include <stdio.h>
#include <stdlib.h>

struct compu
{
    int velocidad;
    int anio;
    char *tipos_cpu; 
    int cantNucleos;
};typedef struct compu compu;

//-------------------

void cargar(compu *punt, int cant, char tipos[6][10]);
void mostrar(compu *p, int cant, char tipos[6][10]);
void mostrar_antigua(compu *p, int cant, char tipos[6][10]);
void mostrar_mas_velocidad(compu *p, int cant, char tipos[6][10]);



int main() {
    int cant_compu=5;
    compu *punt_compu;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};




    // printf("ingrese cantidad compu\n");
    // scanf("%d", &cant_compu);
    // fflush(stdin);

    punt_compu = malloc(cant_compu*sizeof(compu));

    //modulos
    cargar(punt_compu, cant_compu, tipos);
    mostrar(punt_compu, cant_compu, tipos);
    mostrar_antigua(punt_compu, cant_compu, tipos);
    mostrar_mas_velocidad(punt_compu, cant_compu, tipos);
    
    return 0;
}

// void cargar(compu *punt, int cant){
void cargar(compu *punt, int cant, char tipos[6][10]){


    for (int i = 0; i < cant; i++)
    {
        printf("----------------cargar datos[%d] -------------------\n", i);

        printf("ingrese velocidad entre 1 y 3 (ej:1) \n");
        scanf("%d", &punt->velocidad);
        fflush(stdin);

        printf("ingrese anio entre 2015 y 2023(ej: 2020) \n");
        scanf("%d", &punt->anio);
        fflush(stdin);

        printf("ingrese cantidad de nucleos entre 1 y 8(ej:1) \n");
        scanf("%d", &punt->cantNucleos);
        fflush(stdin);
        
        //tipo

        printf("ingrese el indice del tipo de CPU 0 a 5: \n");
        int tipo_indice;
        scanf("%d", &tipo_indice);
        fflush(stdin);

        punt->tipos_cpu = tipos[tipo_indice];

        punt++;
    }
    
}

// void mostrar(compu *p, int cant){
void mostrar(compu *p, int cant, char tipos[6][10]){

    for (int i = 0; i < cant; i++)
    {
        
            printf("-------- caracteristicas de PC[%d]---------------\n", i);

            printf("velocidad: %d\n", p->velocidad);

            printf("anio: %d\n", p->anio);

            printf("cantidad de nucleo: %d\n", p->cantNucleos);

            printf("tipo: %s\n", p->tipos_cpu);


    }
}

// void mostrar_antigua(compu *p, int cant) {
void mostrar_antigua(compu *p, int cant, char tipos[6][10]) {
    int indice_antigua = 0;

    for (int i = 1; i < cant; i++) {

        if (p[i].anio < p[indice_antigua].anio) {
            indice_antigua = i;
        }
    }

    printf("--------La PC mas antigua es la numero %d:------\n", indice_antigua);
    printf("Velocidad: %d\n", p[indice_antigua].velocidad);
    printf("Anio: %d\n", p[indice_antigua].anio);
    printf("Cantidad de nucleos: %d\n", p[indice_antigua].cantNucleos);
    printf("tipo: %s\n", p[indice_antigua].tipos_cpu);
}

// void mostrar_mas_velocidad(compu *p, int cant) {
void mostrar_mas_velocidad(compu *p, int cant, char tipos[6][10]) {
    int indice_velocidad = 0;

    for (int i = 1; i < cant; i++) {

        if (p[i].velocidad > p[indice_velocidad].velocidad) {
            indice_velocidad = i;
        }

    }

    printf("-----La PC mas veloz es la numero %d----------\n", indice_velocidad);
    printf("Velocidad: %d\n", p[indice_velocidad].velocidad);
    printf("Anio: %d\n", p[indice_velocidad].anio);
    printf("Cantidad de nucleos: %d\n", p[indice_velocidad].cantNucleos);
    printf("tipo: %s\n", p[indice_velocidad].tipos_cpu);
    
}


