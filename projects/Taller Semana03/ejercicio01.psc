Algoritmo sin_titulo
	
	Escribir "Ingrese el codigo: "
	Leer codigo
	Escribir "Ingrese la cantidad: "
	Leer cantidad
	
	Segun codigo Hacer
		1: precio = 15.75
		2: precio = 21
		3: precio = 8.5
		4: precio = 25
		5: precio = 13.25	
		
	FinSegun
	
	montoPagar = precio * cantidad
	
	si montoPagar < 100 Entonces
		Escribir "No aplica el descuento"
	SiNo
		montoPagar = montoPagar * 0.89  //descto 11%
	FinSi
	
	Escribir "Monto a pagar es: ", montoPagar
	
FinAlgoritmo
