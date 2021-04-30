#include <iostream>
///////////////////////////////////////////////////////////
////  Practica 2 Estructura de datos complejos y ciclos////
////  Realizado por Brandon Segnini Quesada.           ////
///////////////////////////////////////////////////////////
using namespace std;
int main() {
 int numero=0;
 int unidades=0;
 int decenas=0;
 int centenas=0;
 int millar=0;
cout<<"Este programa te permite pasar el numero digitado a letras,favor colocar valores en un rango de 0 a 999.gracias.\n";
cout<<" \n Digite un número :";
 cin>>numero;
unidades=numero%10; numero=numero/10; 
decenas=numero%10;  numero=numero/10;
centenas=numero%10; numero=numero/10;
millar=numero%10;   numero=numero/10;
//numero=unidades+decenas+centenas;

if((unidades)>=0 && (millar)==0){
switch(0){  
case 0: 
if(unidades==0 &&  decenas==0 && centenas==0){   
  cout<<"  \n  cero";
}
  break;
}
switch(centenas){

case 1: 
 if(centenas==1 && decenas==0 && unidades==0){
  cout<<"  \n  cien";
  }
  else{
  cout<<" \n   ciento";
  }
break;
case 2: cout<<"  \n    doscientos";
break;
case 3: cout<<"  \n    trecientos";
break;
case 4: cout<<"  \n    cuatrocientos";
break;
case 5: cout<<"  \n    quinientos";
break;
case 6: cout<<"  \n    seiscientos";
break;
case 7: cout<<"  \n    setecientos";
break;
case 8: cout<<"  \n    ochocientos";
break;
case 9: cout<<"  \n    novecientos";
break;
}

//if(valor>=10 && valor<=99){
switch(decenas){
case 1:
if(decenas==1 && unidades==0){
 cout<<" \n         diez";
}
if(centenas>=0 && decenas==1 && unidades==1){
 cout<<"\n          once";
}
if(centenas>=0 && decenas==1 && unidades==2){
 cout<<"\n          doce";
}
if(centenas>=0 &&decenas==1 && unidades==3){
 cout<<"\n          trece";
}
if(centenas>=0 &&decenas==1 && unidades==4){
 cout<<"\n          catorce";
}
if(centenas>=0 && decenas==1 && unidades==5){
 cout<<"\n          quince";
}
if(centenas>=0 && decenas==1 && unidades==6){
 cout<<"\n          dieciseis";
}
if(centenas>=0 && decenas==1 && unidades==7){
 cout<<"\n          diecisiete";
}
if(centenas>=0 && decenas==1 && unidades==8){
 cout<<"\n          dieciocho";
}
if(centenas>=0 && decenas==1 && unidades==9){
 cout<<"\n          diecinueve";
}
break;

case 2: cout<<"\n    veinte";
break;
case 3: cout<<"\n    treinta";
break;
case 4: cout<<"\n    cuarenta";
break;
case 5: cout<<"\n    cincuenta";
break;
case 6: cout<<"\n    sesenta";
break;
case 7: cout<<"\n    setenta";
break;
case 8: cout<<"\n    ochenta";
break;
case 9: cout<<"\n    noventa";
break;
 }

switch(unidades){  
case 1:
if(centenas==0 && decenas==0 && unidades==1){   // se realiza la condición decenas ==0 para evitar error al poner valores de 11 al 19.
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
  else {
  cout<<"Lo siento el número digitado no se encuentra en el rango establecido";
}
}

