#include <iostream>
using namespace std;

int main (){
int valor;
do {
cout <<" ===================\n | Una preposicion |\n ===================\n";
cout <<"Escoja el operador logico a usar. \n 1 | Negacion ~ \n 2 | Doble negacion ~~\n";
cin >>valor;
if (valor > 2 ){
void error_datos (int valor);
}
}while (valor >2 );
return 0;
}