Proceso menor4
	Definir a, b, c, d Como Entero;
	Escribir "Ingrese numeros";
	Leer a,b,c,d;
	Si a<b Entonces
		Si a<c Entonces
			Si a<d Entonces
				Escribir "El menor es ",a;
			Sino
				Escribir "El menor es ",d;
			FinSi
		Sino
			Si c<d Entonces
				Escribir "El menor es ",c;
			Sino
				Escribir "El menor es ",d;
			FinSi
		FinSi		
	Sino
		Si b<c Entonces
			Si b<d Entonces
				Escribir "El menor es ",b;
			Sino
				Escribir "El menor es ",d;
			FinSi
		Sino
			Si c<d Entonces
				Escribir "El menor es ",c;
			Sino
				Escribir "El menor es ",d;
			FinSi
		FinSi
	FinSi
FinProceso