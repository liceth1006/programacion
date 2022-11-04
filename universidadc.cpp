#include <iostream>
using namespace std;
int main (){
  string nombre,programa;
  float rendimiento;
  int pregrado=50000;
  int posgrado=300000;
  cout<<"ingresa su nombre"<<endl;
  cin>>nombre;
  cout<<"ingresa su tipo de programa: pregrado o posgrado"<<endl;
  cin>>programa;
  cout<<"ingresa su rendimiento academico"<<endl;
  cin>> rendimiento;
  
  if (rendimiento>=4.5 && programa=="pregrado"){
    cout<<"su nombre es:" << nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 28"<<endl;
    cout<< "tendras un descuento del 25%"<<endl;
  	cout << "el total a pagar es: " <<(pregrado*28)/100*75<<endl;
    }
  else if(rendimiento>=4.0 && rendimiento<4.5 && programa=="pregrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 25"<<endl;
    cout<< "tendras un descuento del 10%"<<endl;
  	cout << "el total a pagar es:  "<<(pregrado*25)/100*90<<endl;
  }
  else if(rendimiento>=3.5 && rendimiento<4.0 && programa=="pregrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 20"<<endl;
    cout<< "No tendras descuentos"<<endl;
  	cout << "el total a pagar es: "<<(pregrado*20)<<endl;
  }
  else  if(rendimiento>=2.5 && rendimiento<3.5 && programa=="pregrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 15"<<endl;
    cout<< "No tendras descuentos"<<endl;
  	cout << "el total a pagar es: " <<(pregrado*15)<<endl;
    }
  else if(rendimiento<2.5 && programa=="pregrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<< "No podras matricularse"<<endl;
    }
  else if(rendimiento>=4.5 && programa=="posgrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 20"<<endl;
    cout<< "tendras un descuento del 20%"<<endl;
  	cout << "el total a pagar es: "<<((posgrado*15)/100*80)<<endl;
  }
  else if(rendimiento<4.5 && programa=="posgrado"){
    cout<<"su nombre es:"<< nombre <<endl;
    cout<< "su tipo de programa es: "<< programa <<endl;
    cout<<"la cantidad de credito a cursan son 10"<<endl;
    cout<< "No tendras descuento"<<endl;
  	cout << "el total a pagar es: "<<(posgrado*10)<<endl;
  }
}
