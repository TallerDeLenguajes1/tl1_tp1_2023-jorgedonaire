
#include <stdio.h>

// int calculaCuadrado(int numero);
// void devuelveCuadrado(int numero);
void Invertir(a,b);
void orden(int a, int b);

int main(){
    int numeroIngresado;
    printf("Ingrese un numero: ");
    scanf("%d", &numeroIngresado);

    int *p;
    p=&numeroIngresado;
    printf("El numero ingresado es: %d\n",*p);
    printf("La direccion de memoria del numero ingresado es: %d\n", p);

    int numeroA, numeroB;
    printf("Ingrese numero a: ");
    scanf("%d", &numeroA);
    printf("Ingrese numero b: ");
    scanf("%d", &numeroB);

    Invertir(numeroA, numeroB);
    orden(numeroA,numeroB);

    return 0;
}

// int calculaCuadrado(int numero){

//     int resultado = numero*numero;

//     return resultado;
// }

// void devuelveCuadrado(int numero){

//     int resultado = numero*numero;

//     printf(resultado);
// }

void Invertir(int a,int b){
    int *pA, *pB;
    pA=&a;
    pB=&b;

    printf("El valor de a es: %d\n", *pB);
    printf("El valor de b es: %d\n", *pA);
}

void orden(int a, int b){
    int *pOrdenA, *pOrdenB;
    pOrdenA = &a;
    pOrdenB = &b;

    if (*pOrdenA > *pOrdenB)
    {
        b=*pOrdenA;
        a=*pOrdenB;
    }else
    {
        a=*pOrdenA;
        b=*pOrdenB;
    }
    
    printf("El valor mas grande b es: %d\n", b);
    printf("El valor mas chico a es: %d\n", a);

}