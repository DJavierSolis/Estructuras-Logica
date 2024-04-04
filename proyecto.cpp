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
cout <<" ingrese el valor de la proposicion. \n 1 | Verdadero \n 0 | Falso \n";
cin >>valor;
if (valor == 1 ){
cout <<"~P Falso \n"; 
}else if (valor ==0){
    cout <<" ~P Verdadero \n"; 
}  getch();
    break;
case 2:
cout <<"========================\n Doble Negacion ~~ \n========================\n";
cout <<" ingrese el valor de la proposicion. \n 1 | Verdadero \n 0 | Falso \n";
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
void Preposicion2(){
cout <<"Que operador logico sera. \n 1 | Conjuncion ^ \n 2 | Disyuncion Inclusiva v \n 3 | Disyuncion Exclusiva @ \n 4 | Implicacion (Condicional) -> \n 5 | Bicondicional (Equivalencia) <->  \n NOTA: La disyuncion exclusiva se representara con el simbolo @, dado a que la computadora no puede imprimir el conector real\n";
}
void Compuestas(){
    int conector, p, q;
    cin>>conector;
system("cls");
switch (conector){
case 1:
cout <<"========================\n Conjuncion ^  \n========================\n";
cout <<" ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
cin >>p;
cout <<" ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
cin>>q;
 if (p==0 && q==0){
    cout<<"p ^ q es Falso\n";    
 }else if (p==0 && q==1){
    cout<<"p ^ q es Falso\n"; 
 }else if(p==1 && q==0){
    cout<<"p ^ q es Falso\n";
 }else if(p==1 && q==1){
    cout<<"p ^ q es Verdadero\n";
    
 }
    break;
case 2:
cout <<"========================\n Disyuncion Inclusiva v  \n========================\n";
cout <<" ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
cin >>p;
cout <<" ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
cin>>q;
 if (p==0 && q==0){
    cout<<"p v q es Falso\n";    
 }else if (p==0 && q==1){
    cout<<"p v q es Verdadero\n"; 
 }else if(p==1 && q==0){
    cout<<"p v q es Verdadero\n";
 }else if(p==1 && q==1){
    cout<<"p v q es Verdadero\n";
    
 }
    break;
case 3:
cout <<"========================\n Disyuncion Exclusiva @\n========================\n";
cout <<" ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
cin >>p;
cout <<" ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
cin>>q;
 if (p==0 && q==0){
    cout<<"p @ q es Falso\n";    
 }else if (p==0 && q==1){
    cout<<"p @ q es Verdadero\n"; 
 }else if(p==1 && q==0){
    cout<<"p @ q es Verdadero\n";
 }else if(p==1 && q==1){
    cout<<"p @ q es Falso\n";
    
 }
    break;
case 4:
cout <<"========================\n Implicacion (Condicional) ->\n========================\n";
cout <<" ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
cin >>p;
cout <<" ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
cin>>q;
 if (p==0 && q==0){
    cout<<"p -> q es Verdadero\n";    
 }else if (p==0 && q==1){
    cout<<"p -> q es Verdadero\n"; 
 }else if(p==1 && q==0){
    cout<<"p -> q es Falso\n";
 }else if(p==1 && q==1){
    cout<<"p -> q es Verdadero\n";
    
 }
    break;
case 5:
cout <<"========================\n Bicondicional (Equivalencia) <-> \n========================\n";
cout <<" ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
cin >>p;
cout <<" ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
cin>>q;
 if (p==0 && q==0){
    cout<<"p <-> q es Verdadero\n";    
 }else if (p==0 && q==1){
    cout<<"p <-> q es Falso\n"; 
 }else if(p==1 && q==0){
    cout<<"p <-> q es Falso\n";
 }else if(p==1 && q==1){
    cout<<"p <-> q es Verdadero\n";
    
 }
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
Preposicion2();
Compuestas();
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
