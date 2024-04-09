Algoritmo sin_titulo
	
	Definir peso, altura, imc Como Real
	
	Escribir "Ingresa  tu Peso (Kg); "
	Leer peso
	
	Escribir "Ingresa tu altura (m): "
	Leer altura
	
	imc = peso/altura^2
	si imc < 0 o altura < 0 Entonces
		Escribir "Ingrese valores Positivos."
	SiNo
		si imc < 15 Entonces
			Escribir "Tu IMC es: ",imc
			Escribir "Criterio de ingreso al hospital."
		SiNo
			si imc >= 15 y imc <= 20 Entonces
				Escribir "Tu IMC es: ",imc
				Escribir "Bajo Peso."
			SiNo
				si imc > 20 y imc <= 30 Entonces
					Escribir "Tu IMC es: ",imc
					Escribir "Peso Normal (Saludable)."
				SiNo
					si imc > 30 y imc <= 40 Entonces
						Escribir "Tu IMC es: ",imc
						Escribir "Sobrepeso (Obesidad de grado I)."
					SiNo
						si imc > 40 Entonces
							Escribir "Tu IMC es: ",imc
							Escribir "Sobrepeso (Obesidad de grado II)."
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	
FinAlgoritmo
