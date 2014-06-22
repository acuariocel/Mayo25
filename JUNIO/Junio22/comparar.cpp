#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	char nombre1[10]="Romero";
	char nombre2[10]="Diego";
	//cout<<strcmp(nombre1,nombre2);
	int x=strcmp(nombre1,nombre2);
	if(x==0){
		cout<<"Son iguales";
	}else{
		if(x==1){
			cout<<" Desorden alfabetico";
			cout<<x;
		}else{
			cout<<"Orden alfabetico";
			cout<<x;
		}
	}
	char unido[120];
	strcat(unido,nombre1);
	strcat(unido," ");
	strcat(unido,nombre2);
	cout<<unido;
}
