Proceso ejercicio02
	Definir a como Real;
	Escribir "Ingrese un número";
	leer a;
	si a>=0&&a<=10 Entonces
		Si a<5 Entonces
			Escribir "no apto suspenso";
		Sino
			escribir "apto";
			si a<7 Entonces
				Escribir "aprobado";
			Sino
				si a<9 Entonces
					Escribir "notable";
				Sino
					Escribir "sobresaliente";
				FinSi
			FinSi			
		FinSi		
	Sino
		Escribir "nota inválida";
	FinSi
FinProceso