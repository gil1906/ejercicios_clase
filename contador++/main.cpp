#include <iostream>//library int/out
#include <math.h>//biblioteca matematica

using namespace std;//palabras reservadas
//funcion principal
int main()
{
    //declaraccion de variables
    int suma=0, contador=0;
    //inicio ciclo
    while (contador <10){
        suma=suma+contador;
        cout<< "suma actual: "<<suma<<endl;
        contador=contador+1;
        cout << "contador actual "<< contador << endl;
    }
    //potencias pow
    suma=pow(suma,3);
    cout << "suma total al cubo: "<<suma;//muestra resultado a la potencia
    return 0;//fin algoritmo
}
