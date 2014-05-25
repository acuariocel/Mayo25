#include <iostream>//Para cin y cout
#include <conio.h>//getch()
#include <stdio.h>
using namespace std;
int main(){
	int a,b,aux;
	printf("Ingrese  un  numero: ");
	scanf("%d",&a);
	printf("Ingrese otro numero: ");
	scanf("%d",&b);
	if (a>b){
		aux=a;
		a=b;
		b=aux;
	}
	for (int i = a; i <= b; i++)	{
		printf("%d\t",i);
	}
	getch();
	return 0;
}