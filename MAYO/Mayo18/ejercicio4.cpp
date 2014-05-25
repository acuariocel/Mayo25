#include <iostream> // para cout
#include <conio.h>  //para getch
#include <stdio.h>  //para printf
using namespace std;
int main(){
	int a,b,aux;
	printf("Ingrese numero: ");
	scanf("%d",&a);
	printf("Ingrese numero: ");
	scanf("%d",&b);
	if (a>b){
		for (int i = a; i >= b; i--){
			printf("%d\t", i);
		}

	}else{
		for (int i = a; i <= b; i++){
			printf("%d\t", i);
		}
	}
	getch();
    return 0;
}
