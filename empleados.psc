Algoritmo empleados
	Escribir "ingresa el nombre del empleado"
	Leer nombre
	Escribir "ingresa el salario basico por hora"
	Leer salario_hora
	Escribir "numero de horas trabajadas"
	Leer horas_trabajadas
	salario_total<-(salario_hora*horas_trabajadas)
	Si (salario_total >450000) Entonces
		Escribir "su nombre es: " nombre 
		Escribir "su salario es: " salario_total
	SiNo
		Escribir "su nombre es: " nombre
	Fin Si
FinAlgoritmo
