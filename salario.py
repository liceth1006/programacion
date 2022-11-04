nombre = str(input("¿Cual es su nombre?:"))
salario = int(input("¿Cual es su salario por hora?:"))
horas = int(input("¿Cuantas horas trabaja al mes?:"))
salario_final = (salario * horas)
if salario_final >= 450000:
  print(f"{nombre} su salario:{salario_final}")
else:
  print(f"{nombre} ")