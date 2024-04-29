#include<iostream>
#include<conio.h>
#include <cmath>
using namespace std;
int guardar=1;
void Tablas();
int main (){
    bool primero= false, negar = false;
string datos,Simbolos[1];
int repetir=1,valores[100];
cout <<"Ingrese las preposicion";
getline(cin,datos);
cout <<datos<<endl;
for (char letra:datos){
    if (letra == '('){
        primero=true;
    }else if (letra == ')'){
        primero= false;
    }
    if (primero){
    if(letra == '(' || letra == ')'||letra == '^'||letra == 'V'||letra == 'v' ||letra == ' ' || letra == '@' ||letra == '~' ||letra == '-'||letra == '>' ||letra == '<' ){
    } else {
        cout <<"Ingrese el valor de verdad de la Preposicion "<<letra<<endl;
        cin>>valores[guardar];
        cout<<valores[guardar]<<endl;
        guardar++;
    } 
    
    }
}
//  guardar--;
// cout <<"valores recividos\n";
//  for (int i = 0; i <= guardar; i++)
//     {
//         cout <<valores[i]<<endl;
//     }
    
//ver la prepocicion que se tiene
    for (char letra:datos){
        /*
        if (letra =='~'){
             if (repetir==2){
                 negar = false;
                 cout <<"\n doblenegacion\n";
                 repetir =0;
            }else {
            cout <<"\n una negacion\n";
            negar = true;
           }
            repetir++;
        }
*/
if (letra == '<'||letra == '-'||letra == '>'){


}
    if (letra == '('){
        primero=true;
    }else if (letra == ')'){
        primero= false;
    }
    
    if (primero){ 
    switch (letra)
    {
    case 'v':
    cout <<"Disyuncion"<<endl;    
        break;
    case '^':
    cout <<"Conjuncion"<<endl;
        break;
    case '@':
    cout <<"Disyuncion exclusiva"<<endl;
        break;
    default:
        break;
    }
    
    }


}
Tablas();
return 0;
}

void Tablas() {
    int numeroFilas = pow(2, guardar);
    int vTablas[numeroFilas][guardar];
    
    // Generar valores para la matriz representando números binarios incrementados en uno
    for (int i = 0; i < numeroFilas; i++) {
        int num = i;
        for (int j = guardar - 1; j >= 0; j--) {
            vTablas[i][j] = num % 2;
            num /= 2;
        }
    }
    
    // Imprimir la matriz con un espacio entre cada número
    for (int i = 0; i < numeroFilas; i++) {
        for (int j = 0; j < guardar; j++) {
            cout << vTablas[i][j] << " ";
        }
        cout << endl;
    }
}