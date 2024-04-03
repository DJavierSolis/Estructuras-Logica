#include<iostream>
#include<conio.h>
using namespace std;

//menu principal
void menu(){
cout <<"========================\n OPERADORES LOGICOS \n========================\n";
cout <<"Cuantas condiciones habra. \n 1 | Una preposicion.\n 2 | Dos preposiciones.  \n 3 | Mas de dos preposiciones. \n";
}
//del primer switch opcion 1 una preposicion
void Preposicion1(){
cout <<"Que operador logico sera. \n 1 | Negacion ~ \n 2 | Doble negacion ~~\n";
}
//condicion de una preposicion de negacion y doble negacion
void negaciones(){
    int valor, operador;
cin>>operador;
system("cls");
//SWITCH 1.1 negacion
switch (operador){
case 1:
cout <<"========================\n Negacion ~ \n========================\n";
cout <<" ingrese el valor de la proposicion. \n 1 | verdadero \n 0 | Falsa \n";
cin >>valor;
if (valor == 1 ){
cout <<"~P Falso \n"; 
}else if (valor ==0){
    cout <<" ~P Verdadero \n"; 
}  getch();
    break;
case 2:
cout <<"========================\n Doble Negacion ~~ \n========================\n";
cout <<" ingrese el valor de la proposicion. \n 1 | verdadero \n 0 | Falsa \n";
cin >>valor;
if (valor == 0 ){
cout <<"~(~P) Falso \n"; 
}else if (valor == 1 ){
    cout <<" ~(~P) Verdadero \n"; 
} getch();
    break;
default:
    break;
}
}
//int principal 
int main (){
int menu_opc;
menu();
cin>>menu_opc;
system("cls");
//PRIMER SWITCH
switch (menu_opc){
case 1:
cout <<"========================\n Una preposicion \n========================\n";
Preposicion1();
negaciones();
    break;
case 2:
cout <<"========================\n Dos preposiciones \n========================\n";
    break;
case 3:
cout <<"========================\n Mas preposiciones \n========================\n";
    break;
default:
  getch();
    break;
}
    return 0;
}
