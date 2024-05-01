Algoritmo examen1
	
	Definir edad Como Entero
	Definir sexo Como Caracter
	
	Escribir "Ingrese su edad: "
	Leer edad
	Escribir "Ingrese su (H: Hombre / M: Mujer): "
	Leer sexo
	
	
	Segun sexo Hacer
		'H':
			si edad >= 20 y edad <= 39 Entonces
				Escribir "Nivel de colesterol de estar entre: 162 mg/dl - 179 mg/dl"
			SiNo
				si edad >= 40 y edad <= 59 Entonces
					Escribir "Nivel de colesterol de estar entre: 186 mg/dl - 209 mg/dl"
				SiNo
					Escribir "Nivel de colesterol de estar entre: 189 mg/dl - 213 mg/dl"
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
