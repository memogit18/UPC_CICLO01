Algoritmo sin_titulo
	Escribir "Ingresa el salario mensual: "
	Leer salario
	
	Escribir "Personas a cargo: "
	Leer personas
	
	si personas = 1 Entonces
		si salario<= 500 Entonces
			tipo = 'P'
		SiNo
			tipo = 'O'
		FinSi
		
	SiNo
		si personas >= 2 y personas <= 4 Entonces
			si salario <= 750 Entonces
				tipo = 'P'
			SiNo
				tipo = 'O'
			FinSi
		SiNo
			si salario <= 1000 Entonces
				tipo = 'P'
			SiNo
				tipo ='O'
			FinSi
			
		FinSi
		
	FinSi
	
	Escribir "Tipo de linea es:", tipo
	
FinAlgoritmo
