#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Estudiante{
	private:
		char estudiant[100][20];
		double nota1[100];
		double nota2[100];
		double promedio;
		int numEst;
	public:
		Estudiante();
		void insertar();
		void ordenar();
		void eliminar(char nomEli[]);
		void consultar(char nomBus[]);
		void presentar();
};
Estudiante::Estudiante () {
	
}
void Estudiante::insertar(){
	cout<< "Numero de estudiantes que desea registrar: ";
	cin>> numEst;	
	for(int i=0; i<numEst; i++){
		cout<<"Para estudiante"<<i+1<<"\n";
		cout<<"\tIngrese nombre:";
		cin>>estudiant[i];
		cout<<"\tIngrese nota1: ";
		cin>>nota1[i];
		cout<<"\tIngrese nota2: ";
		cin>>nota2[i];
	}
}

void Estudiante::ordenar(){
	int i,j;
	char v[20];
	for (i = 1; i < numEst; i++)	{
		for(int k=0;k<20;k++){
			v[k]=estudiant[i][k];
		}
		j = i - 1;
		while (j >= 0 && strcmp(estudiant[j],v)==1){
			for(int k=0;k<20;k++){
				estudiant[j + 1][k]=estudiant[j][k];
			}
			j--;
		}
		for(int k=0;k<20;k++){
			estudiant[j + 1][k]=v[k];
		}		
	}  
}
void Estudiante::eliminar(char nomEli[]){
	for(int i=0;i<numEst;i++){
		if(strcmp(nomEli,estudiant[i])==0){
			for(int j=i;j<numEst-1;j++){
				for(int k=0;k<20;k++){
					estudiant[j][k]=estudiant[j+1][k];
				}
				nota1[j]=nota1[j+1];
				nota2[j]=nota2[j+1];
			}
			numEst--;
		}
	}	
}
void Estudiante::consultar(char nomBus[]){
	cout<<"+---------------+-------+-------+---------------+\n";
	cout<<"| Nombre\t| Nota1\t| Nota2\t| Promedio\t|\n";
	cout<<"+---------------+-------+-------+---------------+\n";
	for(int i=0;i<numEst;i++){
		if(strcmp(nomBus,estudiant[i])==0){
			cout << "| "<<estudiant [i]<<"\t| "<<nota1[i]<<"\t| "<<nota2[i]<<"\t| "<<(nota1[i]+nota2[i])/2<<"\t\t|\n";
			cout<<"+---------------+-------+-------+---------------+\n";
		}
	}
}
void Estudiante::presentar(){
	cout<<"+---------------+-------+-------+---------------+\n";
	cout<<"| Nombre\t| Nota1\t| Nota2\t| Promedio\t|\n";
	cout<<"+---------------+-------+-------+---------------+\n";
	for (int i=0;i<numEst;i++) {
		cout << "| "<<estudiant [i]<<"\t| "<<nota1[i]<<"\t| "<<nota2[i]<<"\t| "<<(nota1[i]+nota2[i])/2<<"\t\t|\n";
		cout<<"+---------------+-------+-------+---------------+\n";
	}
	cout << "\n";	
}
 int main(){
	int opcion;	
	Estudiante est;	 
	system ("color 9");
	//cout<<"\n\t Programa en C++ desarrollado por Andreita Patinio \n\n";
	cout<<" 1. ingresar arreglo de estudiantes"<<endl;
	cout<<" 2. Eliminar por nombre"<<endl;
	cout<<" 3. Consultar por nombre"<<endl;
	cout<<" 4. Presentar todos"<<endl;
	//cout<<" 5. Ordenar por insercion"<<endl;
	cout<<" 6. Salir"<<endl;
	est.insertar();
	est.ordenar();
	system ("color 7");
	system ("pause");
	system ("cls");
	do{
		system ("color 9");
		//cout<<"\n\t Programa en C++ desarrollado por Andreita Patinio \n\n";
		cout<<" 1. Reingresar arreglo de estudiantes"<<endl;
		cout<<" 2. Eliminar por nombre"<<endl;
		cout<<" 3. Consultar por nombre"<<endl;
		cout<<" 4. Presentar todos"<<endl;
		//cout<<" 5. Ordenar por insercion"<<endl;
		cout<<" 6. Salir"<<endl;
		cout<<"\n Ingresar numero de opcion: ";
		cin>>opcion; 
		switch(opcion){
			case 1:
				est.insertar();
				est.ordenar();
				break;
			case 2:
				char nomel[10];
				cout<<"Ingrese nombre de persona a eliminar: ";
				cin>>nomel;
				est.eliminar(nomel);
				break;	
			case 3:
				char nombre[10];
				cout<<"Ingrese nombre a buscar: ";
				cin>>nombre;
				est.consultar(nombre);
				break;				
			case 4:
				est.presentar();
				break;
			}
		system ("color 7");
		system ("pause");
		system ("cls");
	}while(opcion!=6);
 }
