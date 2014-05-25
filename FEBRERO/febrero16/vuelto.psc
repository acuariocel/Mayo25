Proceso vuelto
	Definir vp,vp1, vc,vr,vr1  Como Entero;
	Escribir "Ingrese valor a pagar";
	Escribir "Dolares";
	Leer vp;
	Escribir "Centavos";
	Leer vp1;
	Escribir "Ingrese valor cancelado";
	Leer vc;
	vr=vc-vp;
	si vp1>0 entonces
		vr=vr-1;
	FinSi
	vr=calcularNumBilletes(vr,100);
	vr=calcularNumBilletes(vr,50);
	vr=calcularNumBilletes(vr,20);
	vr=calcularNumBilletes(vr,10);
	vr=calcularNumBilletes(vr,5);
	vr=calcularNumBilletes(vr,1);
	vr1=calcularNumMonedas(vp1,50);
	vr1=calcularNumMonedas(vr1,25);
	vr1=calcularNumMonedas(vr1,10);
	vr1=calcularNumMonedas(vr1,5);
	vr1=calcularNumMonedas(vr1,1);
FinProceso 

SubProceso residuo=calcularNumBilletes(vr,den)
	Definir residuo,nb como entero;
	nb=vr/den;
	si nb>0 entonces
		si nb=1 entonces
			si den=1 Entonces
				Escribir "1 billete de 1 dólar";
			sino
				Escribir "1 billete de ",den," dólares";
			FinSi
		Sino
			si den=1 Entonces
				Escribir nb," billetes de 1 dólar";
			sino
				Escribir nb," billetes de ",den," dólares";
			FinSi
		FinSi
	FinSi
	residuo=vr%den;
FinSubProceso
SubProceso residuo=calcularNumMonedas(vr,den)
	Definir residuo,nm como entero;
	nm=vr/den;
	si nm>0 entonces
		si nm=1 entonces
			si den=1 Entonces
				Escribir "1 moneda de 1 centavo";
			sino
				Escribir "1 moneda de ",den," centavos";
			FinSi
		Sino
			si den=1 Entonces
				Escribir nb," monedas de 1 centavo";
			sino
				Escribir nb," monedas de ",den," centavos";
			FinSi
		FinSi
	FinSi
	residuo=vr%den;
FinSubProceso
	