Algoritmo sin_titulo
	Definir edad Como Entero
	Definir sexo, actividad_fisica Como Caracter
	
	Escribir "Ingrese su edad: "
	Leer edad
	Escribir "Ingrese su (H: Hombre / M: Mujer): "
	Leer sexo
	Escribir "Ingrese su actividad física (S: Sedentario / M: Moderada / A: Activo):  "
	Leer actividad_fisica
	
	Segun sexo Hacer
		'H':
			si actividad_fisica == 'S' y edad  >= 19 y edad <= 30  Entonces
				Escribir "La cantidad de calorías que necesita es: 2,400 - 2600"
			SiNo
				si actividad_fisica == 'M'  y edad  >= 19 y edad <= 30  Entonces
					Escribir  "La cantidad de calorías que necesita es: 2,600 - 2800"
				SiNo
					si actividad_fisica == 'A' y edad  >= 19 y edad <= 30 Entonces
						Escribir "La cantidad de calorías que necesita es: 3000"
					FinSi
					
				FinSi
			FinSi
		'M':
			si edad >= 20 y edad <= 39 Entonces
				Escribir "Nivel de colesterol de estar entre: 157 mg/dl - 176 mg/dl"
			SiNo
				si edad >= 40 y edad <= 59 Entonces
					Escribir "Nivel de colesterol de estar entre: 186 mg/dl - 209 mg/dl"
				SiNo
					Escribir "Nivel de colesterol de estar entre: 205 mg/dl - 227 mg/dl"
				FinSi
			FinSi
		De Otro Modo:
			Escribir "Ingresa un valor dentro del rango."
			
	Fin Segun
	
	
	
FinAlgoritmo
