#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"

//Prototipado //lupita replace te cambia el nombre de todo lo que se llame asi
void menu();
void menuPrinteado();
void cargaPila(Pila* p);


int main(){

    menu();
    return 0;
}

//Principio del menu
void menu(){
    char control='s';
    int opcion=0;

    do{
        menuPrinteado();
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                Pila dada;
                inicpila(&dada);
                cargaPila(&dada);
                mostrar(&dada);
                break;

            default:

                break;
        }


        printf("desea seguir cargando? s para continuar\n");
        control=getch();
        system("cls");
    }while(control!='s');
}

void menuPrinteado(){
    system("cls");
    printf("\t\t\tTrabajo practico Pilas y funciones \n\t\t\t   by Emi Barrientos\n\n");
    printf("Ingrese el ejercicio que desea realizar\n");
    printf("Ejercicio 1: cargar una pila\n");
    /*printf("Ejercicio 2: muestra el archivo por pantalla\n");
    printf("Ejercicio 3: retorna la cantidad de registros\n");
    printf("Ejercicio 4: carga 5 alumnos en el archivo\n");
    printf("Ejercicio 5: muestra el archivo\n");
    printf("Ejercicio 6: agrega un elemento al final del archivo\n");
    printf("Ejercicio 7: pasa a una pila los alumnos mayores a 18\n");
    printf("Ejercicio 8: cuenta alumnos mayores a determinada edad\n");
    printf("Ejercicio 9: muestra alumnos por rango\n");
    printf("Ejercicio 10: muestra al alumno mayor\n");
    printf("Ejercicio 11: muestra los alumnos de determinado año\n");
    printf("Ejercicio 12: pasa de un arreglo al archivo \n");
    printf("Ejercicio 13:cuenta la cantidad de registros en el archivo\n");
    printf("Ejercicio 14:muestra un alumno por legajo\n");
    printf("Ejercicio 15:modifica un registro\n");
    printf("Ejercicio 16:da vuelta el archivo\n");*/
    printf("opcion elegida: \n");

}
//Fin menu


//inicio ejercicios

void cargaPila(Pila* p){
    int dato=0;
    char control='s';
    do{
        printf("ingrese un dato a la pila\n");
        scanf("%d",&dato);
        apilar(p,dato);
        printf("desea seguir cargando? s para continuar\n");
        control=getch;
    }while(control=='s');




}


