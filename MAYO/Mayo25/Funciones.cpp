#include <iostream> /// para cout,cin
#include <stdio.h>  ///para printf,scanf
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
bool verificaPrimo(int p){
    return false;
}

//Funcion q retorne entero decimal, reibiento como parametro un entero binario
int convierteADecimal(int bin){
    int dec=0;
    return dec;
}