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
bool verificaPrimo(int p){
    return false;
}

//Funcion q retorna entero decimal, recibiendo como parametro un entero binario
int convierteADecimal(long binario){
	int decimal;
	int digito,i;
	decimal=0;
	i=1;
	while(binario!=0){
		//toma el digito del numero binario
		digito=binario%10;
		//comprueba si el digito es 1 o 0 para saber si es binario.
		if(digito==0 | digito==1){
			decimal=decimal+(digito*i);
			binario=binario/10;
			i=i*2;
		}
		else{
			cout<<"EL NUMERO NO ES BINARIO";
			binario=0;
		}
	}
	return decimal;
}
/*
void main ()
{
int i,j,fl=0;

printf ("**NUMEROS PRIMOS** \n\n\n");

printf("1 - 2 - 3 ");

for (i=4;i<101;i++)
{
for (j=2;j<i;j++)
{

if (i%j==0)
fl=1;
}

if (fl==0)
printf("- %i",i);
else
fl=0;

}

getche ();
} 
*/