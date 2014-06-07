#include <cstdlib> ///para system
#include <iostream> /// para cout,cin
#include <conio.h>  ///para getch
#include <stdio.h>  ///para printf,scanf
#include "Convertidor.cpp"
using namespace std;

//Por: Stalin Armijos
//Cod: 8788
//Funcion q retorna entero decimal, recibiendo como parametro un numero con su base

int main() {
    int base;
    long n;
    printf("Elija la base desde la q va a transformar:\n");
    printf("1 : Base 10 (decimal)\n");
    printf("2 : Base 2 (binario)\n");
    printf("3 : Base 3\n");
    printf("4 : Base 4\n");
    printf("5 : Base 5\n");
    printf("6 : Base 6\n");
    printf("7 : Base 7\n");
    printf("8 : Base 8 (octal)\n");
    printf("9 : Base 9\n");
    scanf("%d", &base);
    if (base >0 & base <= 9){
	printf("Ingrese un numero en la base escojida\n");
	scanf("%d", &n);		
	int dec = convierteADecimal(base,n);
	cout << "En decimal es: " << dec;
    }
    else{
	printf("Numero de base incorrecta");
    }		
    getch();
    return 0;
}
