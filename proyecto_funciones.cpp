#include <iostream >
#include <conio.h>

using namespace std;
int p,q, valorP,valorQ; 
void error_datos ();
int menu();
void ValorDePreposicion();
int ValorDePreposicionP();
int ValorDePreposicionQ();
int UnaPreposicionMenu();
int Negacion();
int DobleNegacion();
int DosPreposicionesMenu();
int Conjuncion();
int Disyuncion();
int Disyuncion_Exclusiva();
int Implicacion ();
int Bicondicional();
// principal
int main (){
    int opcion_menu1,datoPreposicion;
    //menu principal de prepociones...

    opcion_menu1 = menu();
 
// ver caul escogio.
switch (opcion_menu1){
//opcion 
case 1:
   datoPreposicion = UnaPreposicionMenu();
    switch (datoPreposicion){
    case 1:
        Negacion();
        break;
    case 2:
        DobleNegacion();
        break;    
    }
    break;
//cuando son dos preposiciones
case 2:
    datoPreposicion=DosPreposicionesMenu();
    switch (datoPreposicion){
    case 1:
        Conjuncion();
        break;
    case 2:
        Disyuncion();
        break;
    case 3:
        Disyuncion_Exclusiva ();
        break;
    case 4:
        Implicacion();
        break;
    case 5:
        Bicondicional();
        break;
    }
    break;
case 3:
    
    break;
}
  return 0;
}

//mensaje de error
void error_datos (){
cout << "\n Dato erronio\n Ingrese nuevamente un dato valido\n ";
getch();
}

//menu principal
int menu(){
int opc;
do {
    cout <<"========================\n OPERADORES LOGICOS \n========================\n";
    cout <<"Cuantas condiciones habra. \n 1 | Una preposicion.\n 2 | Dos preposiciones.  \n 3 | Mas de dos preposiciones. \n";     
    cin>>opc;
    if (opc >3){
        system("cls");
        error_datos ();
    }
} while (opc> 3  );
return opc;
}

//para una preposicion
int UnaPreposicionMenu(){
int valor;
do {
cout <<" ===================\n | Una preposicion |\n ===================\n";
cout <<"Escoja el operador logico a usar. \n 1 | Negacion ~ \n 2 | Doble negacion ~~\n";
cin >>valor;
    if (valor > 2 ){
        system("cls");
        error_datos ();
    }
}while (valor >2 );
return valor;
}
//menu de dos preposiciones
int DosPreposicionesMenu(){
    int opc;
    do {
cout <<" ===================\n | Dos preposicion |\n ===================\n";
cout <<"Que operador logico sera. \n 1 | Conjuncion ^ \n 2 | Disyuncion Inclusiva v \n 3 | Disyuncion Exclusiva @ \n 4 | Implicacion (Condicional) -> \n 5 | Bicondicional (Equivalencia) <->  \n NOTA: La disyuncion exclusiva se representara con el simbolo @, dado a que la computadora no puede imprimir el conector real\n";
cin >>opc;
    if (opc >5){
        system("cls");
        error_datos ();  
    }
}while (opc >5);
return opc;
}

//menude de valores de verdad
void ValorDePreposicion(){
cout <<"Ingrese el valor de la proposicion. \n 1 | Verdadero \n 0 | Falso \n";
}

int ValorDePreposicionP(){
do {  
    cout <<" Ingrese el valor de la proposicion p\n 1 | Verdadero \n 0 | Falso \n";
    cin >>p;
        if (p>1){
            system("cls");
            error_datos (); 
        }
    }while (p>1);
return p;
}

int ValorDePreposicionQ(){
do{
    cout <<" Ingrese el valor de la proposicion q\n 1 | Verdadero \n 0 | Falso \n";
    cin>>q;
        if ( q>1){
            system("cls");
            error_datos (); 
        }
    }while ( q>1 ); 
return q;
}

int Negacion(){
    int negacion;
    do {
    cout <<"========================\n      Negacion ~ \n========================\n";
    ValorDePreposicion();   
    cin>>negacion;
   if (negacion == 1 ){
        cout <<"~P es Falso \n"; 
            return 0;
    }else if (negacion ==0){
        cout <<" ~P es Verdadero \n"; 
            return 1;
    }else {
        system("cls");
        error_datos ();    
    }
    }while (negacion > 1);
}

int DobleNegacion(){
    int negacion;
    do {
    cout <<"========================\n   Doble Negacion ~~ \n========================\n";
    ValorDePreposicion();   
    cin>>negacion;
   if (negacion == 0 ){
        cout <<"~(~P) es Falso \n"; 
            return 0;
    }else if (negacion ==1){
        cout <<" ~(~P) es Verdadero \n"; 
            return 1;
    }else {
        system("cls");
        error_datos ();    
    }
    }while (negacion > 1);
}

int Conjuncion(){
    cout <<"========================\n Conjuncion ^  \n========================\n";
    valorP=ValorDePreposicionP();
    valorQ=ValorDePreposicionQ();
    if(valorP==1 && valorQ==1){
        cout<<"p ^ q es Verdadero\n";
        return 1;
    }else {
        cout<<"p ^ q es Falso\n";  
         return 0;
    }  
}

int Disyuncion(){
    cout <<"========================\n Disyuncion Inclusiva v  \n========================\n";
    valorP=ValorDePreposicionP();
    valorQ=ValorDePreposicionQ();
 if (valorP==0 && valorQ==0){
    cout<<"p v q es Falso\n"; 
    return 0;   
 }else {
    cout<<"p v q es Verdadero\n";
     return 1;  
 }
}

int Disyuncion_Exclusiva (){
    cout <<"========================\n Disyuncion Exclusiva @\n========================\n";
    valorP=ValorDePreposicionP();
    valorQ=ValorDePreposicionQ();
    if (valorP != valorQ){
        cout<<"p @ q es Verdadero\n"; 
        return 1;
    }else {
        cout<<"p @ q es Falso\n"; 
        return 0;
    }
}

int Implicacion (){
    cout <<"========================\n Implicacion (Condicional) ->\n========================\n";
    valorP=ValorDePreposicionP();
    valorQ=ValorDePreposicionQ();
if(valorP==1 && valorQ==0){
    cout<<"p -> q es Falso\n";
        return 0;
 }else {
    cout<<"p -> q es Verdadero\n";
        return 1;
 }
}

int Bicondicional(){
    cout <<"========================\n Bicondicional (Equivalencia) <-> \n========================\n";
    valorP=ValorDePreposicionP();
    valorQ=ValorDePreposicionQ();
    if (valorP == valorQ){
       cout<<"p -> q es Verdadero\n";
        return 1; 
    }else {
        cout<<"p -> q es Falso\n";
        return 0;
    }
}