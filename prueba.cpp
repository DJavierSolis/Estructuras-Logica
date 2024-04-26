#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    bool primero= false, negar = false;
string datos,valores[100],Simbolos[1];
int guardar=0,repetir=1;
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
 guardar--;
cout <<"valores recividos\n";
 for (int i = 0; i <= guardar; i++)
    {
        cout <<valores[i]<<endl;
    }
    
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
    cout <<"Disyuncio"<<endl;    
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
return 0;
}