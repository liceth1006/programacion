nombre=str(input("¿Cual es su nombre?:"))
unidades=int(input("¿Cuantos escritorios desea comprar?:"))
valor_escritorios=(800000*unidades)
if unidades<5:
    descuento1=(valor_escritorios*0.1)
    valor_total=(valor_escritorios-descuento1)
    print(f"{nombre} el valor total a pagar es:{valor_total}")
else:
 if unidades>=5 & unidades>10:
        descuento2=(valor_escritorios*0.2)
        valor_total=(valor_escritorios-descuento2)
        print(f"{nombre} el valor total a pagar es:{valor_total}") 
 else:
  if unidades>=10:
        descuento3=(float(valor_escritorios*0.4))
        valor_total=(valor_escritorios-descuento3)
        print(f"{nombre} el valor total a pagar es:{valor_total}") 
