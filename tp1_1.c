#include <stdio.h>

int main(){
    int *punt;
    int puntero=5;

    punt = &puntero;

    printf("El contenido del puntero es: %d \n", *punt);
    printf("La direccion de memoria almacenada por el puntero: %d \n", punt);
    printf("La direccion de memoria de la variable: %d \n", &puntero);
    printf("La direccion de memoria del puntero: %d \n", &punt);
    printf("El tamaño de memoria utilizado por la variable: %d \n", sizeof(*punt));


    return 0;
}