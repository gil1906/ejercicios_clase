#include <iostream>//biblioteca entrada y salida
//palabras reservadas
using namespace std;
//funcion principal
int main()
{
    int dia=0,mes=0,anio=0,dato=0,total=0,R=0;// declara variables
    cout << "ingresar una fecha de modo dia mes a�o como un numero entero" << endl;
    cin >> dato;
    R=(dato%1000000);
    if (dato<=31999999){
    total=dato/1000000;
    mes=(dato/10000)%100;
    }
    if (R<129999){
    anio=(dato%10000);
    }
    else {
        cout << "dato erroneo " << endl;
    }
    cout << "es "<<total<<" del mes "<<mes<<" del a�o "<<anio<<endl;
    return 0;
}
