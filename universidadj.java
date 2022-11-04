import java.util.Scanner;

class Main {
  public static void main(String[] args) {
  String nombre;
  int programa;
  int pre=1;
  int post=2;
  int pregrado=50000;
  int postgrado=300000;
  Scanner u = new Scanner(System.in);
    System.out.println("ingresa su nombre");
    nombre= u.nextLine();
    System.out.println("ingresa su programa 1 para pregrado y 2 para posgrado");
   programa= u.nextInt();
     System.out.println("ingresa su promedio");
    double promedio= u.nextDouble();
  if(programa == pre){
    if (promedio>=4.5)
      {
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 28");
      System.out.println( "tendras un descuento del 25%");
      System.out.println( "el total a pagar es: " + (pregrado*28)/100*75);
      }
    if (promedio>=4.0 && promedio <4.5){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 25");
      System.out.println( "tendras un descuento del 25%");
      System.out.println( "el total a pagar es: " + (pregrado*25)/100*90);
      }
    if (promedio>=3.5 && promedio <4.0){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 25");
      System.out.println( "No tendras descuento");
      System.out.println( "el total a pagar es: " + pregrado*20);
    }
    if (promedio>=2.5 && promedio <3.5){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 15");
      System.out.println( "No tendras descuento");
      System.out.println( "el total a pagar es: " + pregrado*15);
    }
    if (promedio<2.5 ){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 15");
      System.out.println( "No podras matricularse");
    }
  }
   if(programa == post){ 
     if (promedio>=4.5){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 20");
      System.out.println( "tendras un descuento del 20%");
      System.out.println( "el total a pagar es: " + (postgrado*20)/100*80);
     }
     if (promedio<4.5){
      System.out.println("su nombre es:" + nombre );
      System.out.println( "su tipo de programa es: " + programa );
      System.out.println("la cantidad de credito a cursan son 10");
      System.out.println( "No tendras descuento");
      System.out.println( "el total a pagar es: " + postgrado*10);
     }
   }
  }
}
