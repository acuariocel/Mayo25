Proceso seriePrimos
	Definir n,i,c Como Entero;
	Escribir "Ingrese numero de primos que desea";
	Leer n;
	c=0;
	i=0;
	Mientras i<n hacer
		si esPrimo(c+1) Entonces
			Escribir i+1," primo: ",c+1;
			i=i+1;
		FinSi
		c=c+1;
	FinMientras
FinProceso
SubProceso res = esPrimo(n)
	Definir div como entero;
	Definir res como logico;
	res = falso;
	si n = 1 entonces
		res = verdadero;
	Sino
		div = 2;
		Mientras n%div<>0&&div<n/2 hacer
			div=div+1;
		FinMientras
		si trunc(n/2)+1=div entonces
			res=Verdadero;
		FinSi		
	FinSi	
FinSubProceso
