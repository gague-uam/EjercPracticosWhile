Proceso sumaCuadrados
		Definir num, i, suma, total Como Entero;
		num <- 100;
		suma <- 0;
		i <- 1;
		Mientras i <= num Hacer
			suma <- suma + i * i;
			i <- i + 1;
		Fin Mientras
		total <- suma;
		Escribir "La suma de los numeros cuadrados del 1 al ", num, " es: ", total;
FinProceso
