Proceso imprimirImpares
		Definir num, i Como Entero;
		num <- 100;
		Escribir "Numeros impares del 1 al ", num, " en orden descendente:";
		i <- num;
		Mientras i >= 1 Hacer
			Si i % 2 <> 0 Entonces
				Escribir i;
			FinSi
			i <- i - 1;
		Fin Mientras
FinProceso
