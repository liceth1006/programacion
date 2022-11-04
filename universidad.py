nombre = str(input("ingresa su nombre: "))
programa = str(input("ingresa su tipo de programa pregrado o posgrado: " ))
rendimiento = float(input("ingresa su rendimiento academico: "))
pregrado=50000
posgrado=300000
calculo1=pregrado*28/100*75
calculo2=pregrado*25/100*90
if rendimiento >= 4.5 and programa=="pregrado":
  print (f"su nombre es: {nombre}" )
  print (f"su tipo de programa es: {programa}" )
  print ("la cantidad de credito a cursan son 28")
  print ("tendras un descuento del 25%")
  print (f"su nombre es: {calculo1} " )
elif  rendimiento >= 4.0 and rendimiento<4.5 and programa=="pregrado":
  print (f"su nombre es: {nombre}" )
  print (f"su tipo de programa es: {programa}" )
  print ("la cantidad de credito a cursan son 25")
  print ("tendras un descuento del 10%")
  print (f"su nombre es: {calculo2} " )
elif  rendimiento > 3.5 and rendimiento<4.0 and programa=="pregrado":
  print (f"su nombre es: {nombre}" )
  print (f"su tipo de programa es: {programa}" )
  print ("la cantidad de credito a cursan son 25")
  print ("tendras un descuento del 10%")
  print (f"su nombre es: {calculo3} " )
  	
else:
  ("ingresa un valor valido")

