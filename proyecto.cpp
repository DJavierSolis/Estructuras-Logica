#include<iostream>
#include<conio.h>
using namespace std;
int main (){
int menu_opc, num_prepo, condicion,operador;
  cout <<"========================\n OPERADORES LOGICOS \n========================\n";
cout <<"Cuantas condiciones habra. \n 1 | Una preposicion. (p) \n 2 | Dos preposiciones.  \n 3 | Mas de dos preposiciones. \n";
cin>>menu_opc;
system("cls");
switch (menu_opc){
case 1:
 cout <<"========================\n Una preposicion \n========================\n";
cout <<"Que operador logico sera. \n 1 | Negacion ~ \n 2 | Doble negacion ~~\n";
cin>>operador;
system("cls");
cout <<operador;
    break;
case 2:
cout <<"========================\n Una preposicion 2 \n========================\n";
    break;
case 3:
cout <<"========================\n Una preposicion 3 \n========================\n";
    break;
default:
  getch();
    break;
}
    return 0;
}