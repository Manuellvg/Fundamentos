Proceso CapitalAlFinalDelPeriodo
	Escribir "Ingresar capital:";
	Leer c;
	Escribir "Ingresar anos trabajados:";
	Leer a;
	Escribir "Ingresar interes:";
	Leer i;
	I<-(i/100);
	T<-(c*((1+I)^a));
	Escribir "El capital al final del periodo es de:",T;
FinProceso
