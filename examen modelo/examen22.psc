Algoritmo examen2
	Definir edad Como Entero
	Definir sexo, actividad_fisica Como Caracter
	
	Escribir "Ingrese su edad: "
	Leer edad
	Escribir "Ingrese su (H: Hombre / M: Mujer): "
	Leer sexo
	Escribir "Ingrese su actividad física (S: Sedentario / M: Moderada / A: Activo):  "
	Leer actividad_fisica
	
	si edad  >= 19 y edad <= 30  Entonces
		Segun sexo Hacer
			'H': 
				si actividad_fisica == 'S' Entonces
					Escribir "La cantidad de calorías que necesita es: 2,400 - 2,600"
				SiNo
					si actividad_fisica =='M' Entonces
						Escribir  "La cantidad de calorías que necesita es: 2,600 - 2,800"
					SiNo
						Escribir "La cantidad de calorías que necesita es: 3,000"
					FinSi
				FinSi
				
			'M': 
				si actividad_fisica == 'S' Entonces
					Escribir "La cantidad de calorías que necesita es: 1,800 - 2,000"
				SiNo
					si actividad_fisica =='M' Entonces
						Escribir  "La cantidad de calorías que necesita es: 2,000 - 2,200"
					SiNo
						Escribir "La cantidad de calorías que necesita es: 2.400"
					FinSi
				FinSi

		FinSegun
		
	SiNo
		si edad  >= 31 y edad <= 50  Entonces
			
			Segun sexo Hacer
				'H': 
					si actividad_fisica == 'S' Entonces
						Escribir "La cantidad de calorías que necesita es: 2,200 - 2,400"
					SiNo
						si actividad_fisica =='M' Entonces
							Escribir  "La cantidad de calorías que necesita es: 2,400 - 2,600"
						SiNo
							Escribir "La cantidad de calorías que necesita es:  2,800 - 3,000"
						FinSi
					FinSi
					
				'M': 
					si actividad_fisica == 'S' Entonces
						Escribir "La cantidad de calorías que necesita es: 1,800"
					SiNo
						si actividad_fisica =='M' Entonces
							Escribir  "La cantidad de calorías que necesita es: 2,000"
						SiNo
							Escribir "La cantidad de calorías que necesita es: 2.200"
						FinSi
					FinSi
					
			FinSegun
			
		SiNo
			si edad  > 50  Entonces
				
				Segun sexo Hacer
					'H': 
						si actividad_fisica == 'S' Entonces
							Escribir "La cantidad de calorías que necesita es: 2,000 - 2,200"
						SiNo
							si actividad_fisica =='M' Entonces
								Escribir  "La cantidad de calorías que necesita es: 2,200 - 2,400"
							SiNo
								Escribir "La cantidad de calorías que necesita es:  2,400 - 2,800"
							FinSi
						FinSi
						
					'M': 
						si actividad_fisica == 'S' Entonces
							Escribir "La cantidad de calorías que necesita es: 1,600"
						SiNo
							si actividad_fisica =='M' Entonces
								Escribir  "La cantidad de calorías que necesita es: 1,800"
							SiNo
								Escribir "La cantidad de calorías que necesita es: 2.000 - 2,200"
							FinSi
						FinSi
						
				FinSegun
				
			FinSi

		FinSi

		
	FinSi

	
FinAlgoritmo
