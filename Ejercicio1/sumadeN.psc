Proceso sumadeN
		Definir numero, sumaTotal, i Como Entero;
		Escribir "Dime un numero: ";
		Leer numero;
		sumaTotal <- 0;
		i <- 1;
		Mientras i <= numero Hacer
			sumaTotal <- sumaTotal + i;
			i <- i + 1;
		Fin Mientras
		Escribir "La suma total de los numeros desde el 1 hasta ", numero, " es: ", sumaTotal;
FinProceso
