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
    printf("Ingrese numero en binario: ");
    scanf("%d", &n);
	int dec=convierteADecimal(n);
	cout<<"En decimal es: "<<dec;
    getch();
    return 0;
}
