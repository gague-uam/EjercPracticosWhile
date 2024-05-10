Proceso promedioAula
	Definir grades, promedio, suma Como Real;
	Definir i Como Entero;
		i <- 0;
	Escribir "Digite las notas los de 10 estudiantes: ";
		Mientras i < 10 Hacer
			Leer grades;
			i <- i + 1;
	Fin Mientras
		suma <- 0;
		i <- 0;
	Mientras i < 10 Hacer
		suma <- suma + grades;
		i <- i + 1;
	Fin Mientras
	promedio <- suma / 10;
	Escribir "El promedio de la seccion es de: ", promedio;
FinProceso
