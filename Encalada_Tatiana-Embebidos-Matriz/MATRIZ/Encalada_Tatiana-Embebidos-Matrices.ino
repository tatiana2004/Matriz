#include "matriz.h"                 //documento de la matriz
int i=0;                            //variable para filas
int j=0;                            //variable para columnas
int suma;                           //variable para la suma
int prod;                           //variable para la multiplicacion
float prom;                         //variable para el promedio
float sumap=0;                      //variable para la suma del promedio


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {

// SUMA DE CADA FILA

if(Serial.available()>0)                                //condicion para eleir la opcion 
{
  if(Serial.read()=='1')                                //si pulsa 1 se realizara la suma de las filas de la matriz
   { 
    for(i=0;i<20;i++)                                   //ciclo del for para controlar las filas
      {
          while(j<=2)                                   //controla las columnas                        
          {
          suma=suma+matriz[i][j];                       //suma de cada numero de la columna
          delay(200);                                   //retardo de tiempo
          j++;                                          //aumenta la columna
          }
          Serial.print("LA SUMA DE LA FILA ES = ");     //imprime mensaje
          Serial.println(suma);                         //imprime suma   
    
          suma=0;                                       //vreinicia variable
          j=0;                                          //reinicia variable
      }    
  }
}

// MULTIPLICACIÓN DE LA COLUMNA
 
if(Serial.available()>0)                                //condicion para eleir la opcion 
{
   if(Serial.read()=='2')                               //si pulsa 1 se realizara la suma de las filas de la matriz
   { 
    long int prod;
    for(i=0;i<=2;i++)                                   //ciclo del for para controlar las filas
    {
      for(j=0;j<=19;j++)                                //ciclo del for para controlar las columnas
      {
       prod=prod*matriz[j][i];                          //multiplicacion de los numeros de la columna
      }
      Serial.print( "EL PRODUCTO TOTAL ES = " );        //imprime mensaje
      Serial.println(prod);                             //imprime producto de la columna
      delay(400);                                       //tiempo de retardo
      prod=1;                                           //reinicia variable
      j=0;                                              //reinicia variable
     }
   }
   
}

// PROMEDIO

if(Serial.available()>0)                              //condicion para eleir la opcion 
 {
   if(Serial.read()=='3')                              //si pulsa 1 se realizara la suma de las filas de la matriz
   { 
    for(j=0;j<=2;j++)                                  //ciclo del for para controlar las columnas
    {
      for(i=0;i<=20;i++)                               //ciclo del for para controlar las filas
      {
       sumap = sumap + matriz[i][j];                   //suma de cada numero
      }
      j=0;                                             //reinicia variable
    }     
      prom=sumap/3;                                    //promedio
      Serial.print("EL PROMEDIO TOTAL ES = ");         //imprime mensaje
      Serial.print(prom);                              //imprime promedio
      delay (200);                                     //tiempo de retardo
    }
  }
}


