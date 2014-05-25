#include <cstdlib> ///para system
#include <iostream> /// para cout,cin
#include <conio.h>  ///para getch
#include <stdio.h>  ///para printf,scanf
#include <math.h> ///para pow
#include "Funciones.cpp"
using namespace std;



int main() {
    system("title PROGRAMA CON FUNCIONES Y PROCEDIMIENTOS");
    system("color D");
    int n, e;
    printf("Ingrese numero: ");
    scanf("%d", &n);
    verificaPar(n);
    printf("\n\nIngrese exponente para calcular potencia: ");
    scanf("%d", &e);
    cout << endl << n << "^"<<e<<" = " << potencia(n, e);
    printf("\n\nIngrese exponente para calcular pow: ");
    scanf("%d", &e);
    cout << endl << n << "^"<<e<<" = " << pow(n, e);
    getch();
    return 0;
}


