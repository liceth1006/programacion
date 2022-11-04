#include <iostream>
using namespace std;
int main (){
  string nombre;
  int horas;
  double salario, salarios;
  cout<<"ingresa su nombre"<<endl;
  cin>>nombre;
  cout<<"¿Cuanto es su salario por horas?"<<endl;
  cin>>salario;
  cout<<"¿Cuantas horas trabaja al mes?"<<endl;
  cin>>horas;
  salarios = salario*horas;
  if (salario_mes>450000){
    cout<<"su nombre es: " << nombre << endl;
    cout<<"Su salario es:"<< salario_mes << endl;
    }

  else{  
  cout<<"su nombre es" << nombre << endl;
  }
}
    