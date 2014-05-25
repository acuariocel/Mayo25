Proceso datosPersona
	Definir d1,d2,d3,d4,d5 como Cadena;
	d1 = ingresoDatos(1);
	d2 = ingresoDatos(2);
	d3 = ingresoDatos(3);
	d4 = ingresoDatos(4);
	d5 = ingresoDatos(5);
	Escribir "    DATOS DE PERSONAS";
	Escribir "";
	Escribir "Nombre    Edad     Altura";
	Escribir d1;
	Escribir d2;
	Escribir d3;
	Escribir d4;
	Escribir d5;
FinProceso
SubProceso linea=ingresoDatos(n)
	Definir nombre,linea Como Cadena;
	Definir edad Como Entero;
	Definir altura Como Real;
	Escribir "DATOS DE LA ",n,"ª PERSONA";
	Escribir "";
	Escribir "Ingrese nombre:";
	Leer nombre;
	Escribir "Ingrese edad en años:";
	Leer edad;
	Escribir "Ingrese altura en metros:";
	Leer altura;
	Limpiar Pantalla;
	linea = nombre+"    "+convertiratexto(edad)+" años  "+convertiratexto(altura)+" metros";	
FinSubProceso
	