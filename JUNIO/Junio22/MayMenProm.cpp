#include <iostream>
#include <conio.h>
using namespace std;

int mayor(int a[],int dim){
	int m=a[0];
	for(int i=1;i<dim;i++){
		if(a[i]>m){
			m=a[i];
		}
	}
	return m;
}
int menor(int a[],int dim){
	int men=a[0];
	for(int i=1;i<dim;i++){
		if(a[i]<men){
			men=a[i];
		}
	}
	return men;
}
double promedio(int a[],int dim){
	double pro=a[0];
	for(int i=1;i<dim;i++){		
		pro+=a[i];
	}
	pro/=dim;
	return pro;
}
int main() {	
	int dimen,i,may,men;
	double pro;
	cout<<("Ingrese dimension del arreglo: ") ;
	cin>>dimen;	
	int A[100];
	cout<<("Ingrese Elementos: \n");

	for(i=0;i<dimen;i++){
		cout<<"pos: A["<< i<<"]= ";
		cin>>A[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"Los numeros ingresados son:\n";
	for(i=0;i<dimen;i++){		
		cout<<"\nA["<< i<<"]= "<<A[i];
	}	
	may=mayor(A,dimen);
	cout<<"\nMayor:\t\t"<<may;
	men=menor(A,dimen);
	cout<<"\nMenor:\t\t"<<men;
	pro=promedio(A,dimen);
	cout<<"\nPromedio:\t"<<pro;
	getch();
	return 0;
}
