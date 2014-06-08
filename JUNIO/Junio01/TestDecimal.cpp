#include <iostream>
#include <string.h>
using namespace std;

void invertir(char origen[], char destino[]){
    int j = strlen(origen)-1;
   
    destino[j+1] = '\0';  //colocar el fin de cadena
    for(int i=j;i>=0;i--){
        //cout<<origen[i];
        destino[j-i] = origen[i];
    }
}

/**
* numero: número decimal a convertir
* base: la base del numero a la cual convertir (2: binaria, 8: octal, 16: hexadecimal
* c[]: el número convertido
**/

void dec2base(int numero, int base, char c[]){
    int resto = 0;
    int n = numero;
    int i = 0;
    char aux[100];
   
    if (base!=2 && base!=8 && base!=16){ //validar que la base sea valida
        cout << "base no valida debe ser 2,8 o 16"<<endl;
        return;
    }
    strcpy(c, "");
    if (n==0){
        strcpy(c,"0");
    } else {
        while (n>0){
            resto = n % base;  //Obtiene el resto de la division entera
            if (resto<10){
                c[i] = '0'+resto; //el ASCII de 0 es 48 y así sucesivamente   
            } else {
                c[i] = '7'+resto; //el ASCII de A es 65 y así sucesivamente
            }
           
            n = n / base;     //división entera y se actualiza el valor de n
            i++;
        }
        c[i] = '\0';   //se coloca el fin de la cadena
        invertir(c,aux); // se invierte la cadena
        strcpy(c,aux); // se asigna aux a c
    }
   
}

int main(){
    char s[100],d[100];
    dec2base(1024,16,d);
    cout<<d;
    return 0;
}
