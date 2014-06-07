#include <iostream> /// para cout,cin
#include <stdio.h>  ///para printf,scanf
#include <conio.h>
using namespace std;

//Por: Stalin Armijos
//Cod: 8788
//Funcion q retorna entero decimal, recibiendo como parametro un numero con su base

int convierteADecimal(int base,long numero) {
    int decimal;
    int digito, i;
    decimal = 0;
    i = 1;
    while (numero != 0) {
        //toma el digito del numero
        digito = numero % 10;
        //comprueba si el digito esta entre 0 y 9.
	if (digito >= 0 & digito <= 9) {
            decimal = decimal + (digito *i);
            numero = numero / 10;
            i = i*base;
	}
	else {
            numero = 0;
	}
    }
    return decimal;
}
