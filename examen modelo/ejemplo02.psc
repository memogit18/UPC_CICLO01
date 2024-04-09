Algoritmo sin_titulo
	
	Definir modelo, color Como Caracter
	Definir edad Como Entero
	
	Escribir "Ingrese el modelo (A ; B): "
	Leer modelo
	
	Escribir "Color (B: Blanco; M: Metalizado; O: Otros"
	Leer color
	
	Escribir "Edad: "
	Leer edad
	
	
	
	Segun modelo hacer
		'A': 
			si color == 'B' Entonces
				precio = 240.50
			SiNo
				si color == 'M' Entonces
					precio = 330.00
				SiNo
					si color == 'O' Entonces
						precio = 270.50
					FinSi
				FinSi
			FinSi
		'B': 
			si color == 'B' Entonces
				precio = 300.00
			SiNo
				si color == 'M' Entonces
					precio = 360.50
				SiNo
					si color == 'O' Entonces
						precio = 330.00
					FinSi
				FinSi
			FinSi
		De Otro Modo:
			Escribir "Ingresa valores correctos."
	FinSegun
	
	
	si edad < 0 Entonces
		Escribir "Ingresa una edad correcta."
	SiNo
		si edad < 31 Entonces
			precio_increm = precio * 1.25
			Escribir "El precio del seguro: ",precio_increm
		SiNo
			si edad >= 31 y edad <= 65 Entonces
				precio_increm = precio
				Escribir "El precio del seguro: ",precio_increm
			SiNo
				precio_increm = precio * 1.10
				Escribir "El precio del seguro: ",precio_increm
			FinSi
			
		FinSi
	FinSi
	
	
FinAlgoritmo
