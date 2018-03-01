#include <iostream>//biblioteca entrada y salida
//palabras reservadas
using namespace std;
//funcion principal
int main()
{
    int dia=0,mes=0,anio=0,dato=0,total=0;// declara variables
    cout << "ingresar una fecha de modo dia mes año como un numero entero" << endl;
    cin >> dato;
    total=dato/1000000;
    mes=(dato/10000)%100;
    anio=(dato%10000);
    cout << "es "<<total<<" del mes "<<mes<<" del año "<<anio<<endl;
    return 0;
}
