Proceso verificaPrimo
	Definir n Como Entero;
	Escribir "Ingrese n�mero";
	Leer n;
	Escribir "";
	Escribir "Es primo?:",esPrimo(n);
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
