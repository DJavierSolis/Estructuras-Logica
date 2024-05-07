#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    bool primero= false;
string datos,valores[100];
int guardar=0, caso=0,prepro[100],repro[2];
cout <<"Ingrese las preposicion \n ejemplo '( p v q) ^ r': \n";
getline(cin,datos);
cout <<datos<<endl;
 for (char letra : datos) {
        if (isalpha(letra) && letra != 'v' && letra != 'V') {
             cout <<"Ingrese el valor de verdad de la Preposicion "<<letra<<endl;
             cin>>prepro[guardar];
if (prepro[guardar] == 1){
 valores[guardar] = '1';
}else if (prepro[guardar] == 0){
 valores[guardar] = '0';
}
        cout<<valores[guardar]<<endl;
        }
         guardar++;
    }
cout <<"lo que estan dentro del parentesis"<<endl;
 guardar = 0;
for (char letra:datos){
    if (letra == '('){
        primero=true;
    }else if (letra == ')'){
        primero = false;
    }
    if (primero){
    if(letra == '(' || letra == ')'||letra == '^'||letra == 'V'||letra == 'v' ||letra == ' ' || letra == '@' ||letra == '~' ||letra == '-'||letra == '>' ||letra == '<' ){
    } else {
        cout <<letra<< " "<< prepro[guardar] <<endl;
       repro[caso]= prepro[guardar];
       caso ++;
    } 
    }
     guardar++;
}
 cout<< "v1 " <<repro[0] << " v2 "<< repro[1];
for (char letra:datos){
    if (letra == '('){
        primero=true;
    }else if (letra == ')'){
        primero= false;
    }   
    if (primero){ 
    switch (letra){
    case 'V':
    case 'v':
    cout <<"Disyuncion"<<endl;
        break;
    case '^':
    cout <<"Conjuncion"<<endl;
        break;
    case '@':
    cout <<"Disyuncion exclusiva"<<endl;
        break;
    case '>':
    cout <<"Condicional"<<endl;
        break;
    case '<':
    cout <<"Bicondicional"<<endl;
        break;
    }
    }
}
return 0;
}