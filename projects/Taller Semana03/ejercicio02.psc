Algoritmo sin_titulo
	
	Escribir "Ingresa el tamaño de la arista(n): "
	Leer arista
	
	volumen = arista ^ 3
	
	Si volumen < 70 Entonces
		precioM2 = 2.5
	SiNo
		si volumen <= 150 Entonces
			precioM2 = 5
		SiNo
			precioM2 = 10
		FinSi
	FinSi
	
	areaPintar = (arista * arista) * 5  //son 5 paredes
	costoTotal = areaPintar * precioM2
	Escribir "Volumen: ", volumen
	Escribir "El costo total es: ", costoTotal
	
FinAlgoritmo
