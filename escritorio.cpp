int main (){
  string nombre;
  int unidades, valor_escritorios, valor_final,descuento;
  cout<<"ingresa su nombre"<<endl;
  cin>>nombre;
  cout<<"Ingresa la cantidad de scritorio que deseas comprar"<<endl;
  cin>>unidades;
  valor_escritorios=(800000*unidades);
  if (unidades<5){
    descuento=(valor_escritorios*0.1);
    valor_final=valor_escritorios-descuento;
    cout<<"valor total a pagras es:" << valor_final <<endl;
    }

  else if (unidades>=5 && unidades<10){
    valor_escritorios=(800000*unidades);
    descuento=valor_escritorios*0.2;
    valor_final= valor_escritorios-descuento;
    cout<<"valor total a pagras es:" << valor_final <<endl;
    }
  
	else if (unidades>=10){
    valor_escritorios=(800000*unidades);
    descuento=valor_escritorios*0.4;
    valor_final= valor_escritorios-descuento;
    cout<<"valor total a pagras es:" << valor_final <<endl;
    }
   }