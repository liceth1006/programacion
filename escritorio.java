import java.util.Scanner;
public class escritorios{
  public static void main(String[] args){
    Scaner x=new Scaner(System.in);
    System.out.println(" ¿Cual es su nombre:");
    string nombre = x.nextInt();
    System.out.println(" ¿Cuantos escritorios desea comprar:");
    int unidades = x.nextInt();
    if (unidades<5){
      precio= unudades_escritorio*80000;
      descuento= precio*descuento;
      precio_final= precio-0.1;
      System.out.println(nombre+"el precio a pagar es:"+precio_final);
     }eles{
      if (unidades>=5)&& unidades<10){
        precio= unudades*80000;
        descuento= precio*0.2;
        precio_final= precio-descuento;
        System.out.println(nombre+"el precio a pagar es:"+precio_final);
        }eles{
        if (unidades<5){
          precio= unudades*80000;
          descuento= precio*0.3;
          precio_final= precio-descuento;
          System.out.println(nombre+"el precio a pagar es:"+precio_final);
        }
      }
    }  
  }
}