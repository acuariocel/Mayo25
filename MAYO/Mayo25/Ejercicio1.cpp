#include <cstdlib> ///para system
#include <iostream> /// para cout,cin
#include <conio.h>  ///para getch
#include <stdio.h>  ///para printf,scanf
#include <math.h> ///para pow
using namespace std;

//PROCEDIMIENTO VERIFICAR

void verificaPar(int n) {
    printf("\n%d es ", n);
    if (n % 2 == 1) {
        printf("im");
    }
    cout << "par.";
}

//FUNCION CALCULAR POTENCIA

int potencia(int base, int exp) {
    int pot = 1;
    for (int i = 0; i < exp; i++) {
        pot = pot*base;
    }
    return pot;
}

int main() {
    system("title PROGRAMA CON FUNCIONES Y PROCEDIMIENTOS");
    system("color A");
    int n, e;
    printf("Ingrese numero: ");
    scanf("%d", &n);
    verificaPar(n);
    printf("\n\nIngrese exponente para calcular potencia: ");
    scanf("%d", &e);
    cout << endl << n << "^2 = " << potencia(n, e);
    printf("\n\nIngrese exponente para calcular pow: ");
    scanf("%d", &e);
    cout << endl << n << "^2 = " << pow(n, e);
    getch();
    return 0;
}


