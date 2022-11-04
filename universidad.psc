Algoritmo universidad
	Escribir "ingresa su nombre"
	Leer nombre
	Escribir "ingresa su tipo de programa: pregrado o posgrado"
	Leer programa
	Escribir "ingresa su rendimiento academico"
	Leer rendimiento
	pregrado<-50000
	posgrado<-300000
	Si (rendimiento>= 4.5) & (programa =="pregrado")Entonces
		Escribir "su nombre es:" nombre
		Escribir "su tipo de programa es: " programa
		Escribir "la cantidad decredito a cursan son 28"
		Escribir "tendras un descuento del 25%"
		Escribir ((pregrado*28)/100*25)
	SiNo
		Si (rendimiento>= 4.0) & (rendimiento< 4.5)& (programa =="pregrado")Entonces
			Escribir "su nombre es:" nombre
			Escribir "su tipo de programa es: " programa
			Escribir "la cantidad decredito a cursan son 25"
			Escribir "No tendras un descuento"
			Escribir "el total a pagar es: " ((pregrado*25)/100*10)
		FinSi
		Si (rendimiento> 3.5) & (rendimiento< 4.0)& (programa =="pregrado")Entonces
			Escribir "su nombre es:" nombre
			Escribir "su tipo de programa es: " programa
			Escribir "la cantidad decredito a cursan son 20"
			Escribir "No tendras un descuento"
			Escribir "el total a pagar es: " (pregrado*20)
		FinSi
		Si (rendimiento> 2.5) & (rendimiento< 3.5)& (programa =="pregrado")Entonces
			Escribir "su nombre es:" nombre
			Escribir "su tipo de programa es: " programa
			Escribir "la cantidad decredito a cursan son 15"
			Escribir "No tendras un descuento"
			Escribir "el total a pagar es: " (pregrado*15)
		FinSi
	Fin Si



	
FinAlgoritmo
