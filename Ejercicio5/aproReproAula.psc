Proceso aproReproAula
		Definir notas, alumnosAprobados, alumnosReprobados, sumaTotal Como Entero;
		alumnosAprobados <- 0;
		alumnosReprobados <- 0;
		sumaTotal <- 0;
		Definir i Como Entero;
		i <- 0;
		Mientras i < 8 Hacer
			Escribir "Digite las notas del estudiante";
			Leer notas;
			sumaTotal <- sumaTotal + notas;
			Si notas >= 70 Entonces
				alumnosAprobados <- alumnosAprobados + 1;
			Sino
				alumnosReprobados <- alumnosReprobados + 1;
			FinSi
			i <- i + 1;
		Fin Mientras
		Escribir "El promedio total es: ", sumaTotal / 8;
		Escribir "Cantidad de alumnos aprobados: ", alumnosAprobados;
		Escribir "Cantidad de alumnos reprobados: ", alumnosReprobados;
FinProceso
