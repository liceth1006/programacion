Algoritmo venta_escritorios

	Escribir "bienvenidos"
	Escribir "cuantos escritorios desea comprar?"
	Leer cantidad
	precio<-800000
	total_precio<-(precio*cantidad)
	descuento_10<-(total_precio/100*20)
	descuento_20<-(total_precio/100*20)
	descuento_40<-(total_precio/100*40)
	Si (cantidad <5) Entonces
		Escribir "por la compra de " cantidad " recibes un descuento del 10%" 
		Escribir "el total a pagar son: " (total_precio-descuento_10)
	SiNo 
		Si (cantidad >=5) & (cantidad <10) Entonces
			Escribir "por la compra de " cantidad " recibes un descuento del 20%" 
			Escribir "el total a pagar son: " (total_precio-descuento_20)
		SiNo
			Escribir "por la compra de " cantidad " recibes un descuento del 40%" 
			Escribir "el total a pagar son: " (total_precio-descuento_40)
			
		FinSi 
	Fin Si
FinAlgoritmo
