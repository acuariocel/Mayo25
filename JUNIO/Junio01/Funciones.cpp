#include <iostream> /// para cout,cin
#include <stdio.h>  ///para printf,scanf
#include <conio.h>
using namespace std;
//FUNCION CALCULAR POTENCIA

int potencia(int base, int exp) {
    int pot = 1;
    for (int i = 0; i < exp; i++) {
        pot = pot*base;
    }
    return pot;
}
//PROCEDIMIENTO VERIFICAR

void verificaPar(int n) {
    printf("\n%d es ", n);
    if (n % 2 == 1) {
        printf("im");
    }
    cout << "par.";
}

bool verificaPrimo(int p) {
    return false;
}

//Funcion q retorna entero decimal, recibiendo como parametro un entero binario

int convierteADecimal(long binario) {
    int decimal;
    int digito, i;
    decimal = 0;
    i = 1;
    while (binario != 0) {
        //toma el digito del numero binario
        digito = binario % 10;
        //comprueba si el digito es 1 o 0 para saber si es binario.
        if (digito == 0 | digito == 1) {
            decimal = decimal + (digito * i);
            binario = binario / 10;
            i = i * 2;
        } else {
            cout << "EL NUMERO NO ES BINARIO";
            binario = 0;
        }
    }
    return decimal;
}

bool esprimo(int n) {
    int div;
    bool res;
    res = false;
    if (n == 1) {
        res = true;
    } else {
        div = 2;
        while (n % div != 0 && div < n / 2) {
            div = div + 1;
        }
        if (floor(n / 2) + 1 == div) {
            res = true;
        }
    }
    return res;
}
