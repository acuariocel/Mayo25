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
    bool res = esprimo(n);
    cout << "Es primo: " << res;
    getch();
    return 0;
}
