Proceso ejercicio03
	definir s,e,ed como entero;
	Escribir "Ingrese edad(0-100)";
	leer ed;
	Escribir "ingrese sexo";
	Escribir "0.- Hombre";
	Escribir "1.- Mujer";
	Leer s;
	Escribir "Ingrese estado civil";
	Escribir "0.- Soltero";
	Escribir "1.- Casado";
	leer e;
	Si s=0 entonces
		Si e=0 Entonces
			Si e<18 Entonces
				Escribir "Hombre soltero menor de edad";
			Sino
				Escribir "Hombre soltero menor de edad";
			FinSi
		Sino
			Escribir "no hay mensaje";
		FinSi
	Sino
		si e=0 Entonces
			si ed>=18 Entonces
				Escribir "mujer soltera mayor de edad";
			Sino
				Escribir "no hay mensaje";
			FinSi
		Sino
			si ed<18 entonces
				Escribir "mujer casada menor de edad";
			Sino
				Escribir "mujer casada mayor de edad";
			FinSi
		FinSi
	FinSi
FinProceso












