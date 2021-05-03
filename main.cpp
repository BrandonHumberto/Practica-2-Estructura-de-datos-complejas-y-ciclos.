#include <iostream>
///////////////////////////////////////////////////////////
////  Practica 2 Estructura de datos complejos y ciclos////
////  Realizado por Brandon Segnini Quesada.           ////
///////////////////////////////////////////////////////////
using namespace std;
int main() {
 int numero=0;      //Dato digitado por el usuario
 int unidades=0;    // Variables
 int decenas=0;
 int centenas=0;
 int millar=0;  //Se agrega el millar para establecer valores a 999

cout<<"Este programa te permite pasar el numero digitado a letras,favor colocar valores en un rango de 0 a 999.Gracias.\n";
cout<<" \n Digite un número :";

cin>>numero;                        //lee la entrada del usuario

unidades=numero%10; numero=numero/10;//toma los valores de unidades
decenas=numero%10;  numero=numero/10;//toma los valores de decenas
centenas=numero%10; numero=numero/10;//toma los valores de centenas
millar=numero%10;   numero=numero/10;//toma los valores de millar

// si las unidades son 0 y el millar es 0 ejecuta todo lo del if
if((unidades)>=0 && (millar)==0){
 switch(0){  //Estableciendo cuando el usuario digita 0 lo muestre
 case 0: 
 if(unidades==0 &&  decenas==0 && centenas==0){   
  cout<<"  \n  cero";
 }
 break;
 }
 switch(centenas){ //Se direcciona al switch centenas cuando el valor digitado se encuentra en el rango de 100 a 900
 case 1: 
 if(centenas==1 && decenas==0 && unidades==0){ //Solo muestre cien cuando cumpla la condición para caso contrario ponga ciento.
  cout<<"  \n  cien";
  }
  else{
  cout<<" \n   ciento";
  }
 break;
 case 2:
 cout<<"  \n    doscientos";     
 break;
 case 3:
 cout<<"  \n    trecientos";
 break;
 case 4:
 cout<<"  \n    cuatrocientos";
 break;
 case 5:
 cout<<"  \n    quinientos";
 break;
 case 6:
 cout<<"  \n    seiscientos";
 break;
 case 7:
 cout<<"  \n    setecientos";
 break;
 case 8:
 cout<<"  \n    ochocientos";
 break;
 case 9:
 cout<<"  \n    novecientos";
 break;
 }
//Se direcciona al switch decenas cuando el valor digitado se encuentra en el rango de 10 a 90,se agregan condiciones para valores en  el rango de 10 a 19 para case 1.
switch(decenas){
 case 1:
 if(decenas==1 && unidades==0){
 cout<<" diez";
 }
 if(centenas>=0 && decenas==1 && unidades==1){
 cout<<" once";
 }
 if(centenas>=0 && decenas==1 && unidades==2){
 cout<<" doce";
 }
 if(centenas>=0 &&decenas==1 && unidades==3){
 cout<<" trece";
 }
 if(centenas>=0 &&decenas==1 && unidades==4){
 cout<<" catorce";
 }
 if(centenas>=0 && decenas==1 && unidades==5){
 cout<<" quince";
 }
 if(centenas>=0 && decenas==1 && unidades==6){
 cout<<" dieciseis";
 }
 if(centenas>=0 && decenas==1 && unidades==7){
 cout<<" diecisiete";
 }
 if(centenas>=0 && decenas==1 && unidades==8){
 cout<<" dieciocho";
 }
 if(centenas>=0 && decenas==1 && unidades==9){
 cout<<" diecinueve";
 }
 break;
 case 2:
  cout<<" veinte";
 break;
 case 3:
  cout<<" treinta";
 break;
 case 4:
  cout<<" cuarenta";
 break;
 case 5:
  cout<<" cincuenta";
 break;
 case 6:
  cout<<" sesenta";
 break;
 case 7:
 cout<<" setenta";
 break;
 case 8:
 cout<<" ochenta";
 break;
 case 9:
 cout<<" noventa";
 break;
}
//Se direcciona al switch unidades cuando el valor digitado se encuentra en el rango de 1 a 9,se realiza la condición decenas ==0 y >=2 para evitar error al poner valores de 11 al 19, al igual a la hora de poner un valor como: ejm: 101 ó 121 el debe digitar para el primer dato ciento uno, no poner ciento "y uno", caso contrario al segundo digito debe de poner ciento veinte y uno, no poner ciento veinte "uno".
switch(unidades){  
 case 1:
 if(centenas==0 && decenas==0 && unidades==1){   
 cout<<" uno";
 }
 if(centenas>=1 && decenas==0 && unidades==1){   
 cout<<"  uno";
 }
 if(centenas>=0 && decenas>=2 && unidades==1){
 cout<<" y uno";
 }
 break;
 case 2:
 if(centenas==0 && decenas==0 && unidades==2){
 cout<<" dos";
 }
 if(centenas>=1 && decenas==0 && unidades==2){
 cout<<" dos";
 }
 if(centenas>=0 && decenas>=2 && unidades>=2){
 cout<<" y dos";
 }
 break;
 case 3:
 if(centenas==0 && decenas==0 && unidades==3){
 cout<<" tres";
 }
 if(centenas>=1 && decenas==0 && unidades==3){  
 cout<<" tres";
 }
 if(centenas>=0 && decenas>=2 && unidades>=3){
 cout<<" y tres";
 }
 break;
 case 4: 
 if(centenas==0 && decenas==0 && unidades==4){
 cout<<" cuatro";
 }
 if(centenas>=1 && decenas==0 && unidades==4){  
 cout<<" cuatro";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y cuatro";
 }
 break;
 case 5: 
 if(centenas==0 && decenas==0 && unidades==5){
 cout<<" cinco";
 }
 if(centenas>=1 && decenas==0 && unidades==5){  
 cout<<" cinco";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y cinco";
 }
 break;
 case 6:
 if(centenas==0 && decenas==0 && unidades==6){
 cout<<" seis";
 }
 if(centenas>=1 && decenas==0 && unidades==6){  
 cout<<" seis";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y seis";
 }
 break;
 case 7:
 if(centenas==0 && decenas==0 && unidades==7){
 cout<<" siete";
 }
 if(centenas>=1 && decenas==0 && unidades==7){  
 cout<<" siete";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y siete";
 }
 break;
 case 8: 
 if(centenas==0 && decenas==0 && unidades==8){
 cout<<" ocho";
 }
 if(centenas>=1 && decenas==0 && unidades==8){  
 cout<<" ocho";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y ocho";
 }
 break;
 case 9: 
 if(centenas==0 && decenas==0 && unidades==9){
 cout<<" nueve";
 }
 if(centenas>=1 && decenas==0 && unidades==9){  
 cout<<" nueve";
 }
 if(centenas>=0 && decenas>=2 && unidades>=1){
 cout<<" y nueve";
 }
 break;
 }
  return 0;
}
//Caso contrario al primer if, el que se encuentra arriba del switch(0), si no se encuentra dentro de los rangos establecidos debe desplegar el siguiente mensaje.
  else {
  cout<<"Lo siento el número digitado no se encuentra en el rango establecido";
 }
}

