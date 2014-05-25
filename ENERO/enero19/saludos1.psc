Proceso saludos1
//	saludar("Hola Diego",'o');
//	saludar("Hola Andrea",'a');
//	saludar("Hola Jessica",'a');
	saludarOtro("Diego",0,"CEL");
	saludarOtro("Andrea",1,"UNL");
FinProceso

SubProceso saludar(mensaje,sexo)
	Escribir mensaje;
	Escribir "Bienvenid",sexo," al CEL";
	Escribir "";
FinSubProceso

SubProceso saludarOtro(nombre,sexo,instituto)
	Escribir "Hola ",nombre;
	Si sexo=1 Entonces
		Escribir "Bienvenida al";
	Sino
		Escribir "Bienvenido al";
	FinSi
	Escribir instituto;
	Escribir "";
FinSubProceso



