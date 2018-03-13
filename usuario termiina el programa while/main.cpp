
#include <iostream>//library int/out
#include <math.h>//biblioteca matematica

using namespace std;//palabras reservadas
//funcion principal
int main()
{
    //declaraccion de variables
    int suma=0, contador=0,fin=1;
    //inicio ciclo
    while (fin==1){
    while (contador <15){
        suma=suma+contador;
        //cout<< "suma actual: "<<suma<<endl;
        contador=contador+1;
        //cout << "contador actual "<< contador << endl;
    }
    //potencias pow
    suma=pow(suma,3);
    contador =0; //reset contador}
    cout << "suma total al cubo: "<<suma<<endl;//muestra resultado a la potencia
    suma=0;//reset suma
    cout << "si desea cerrar el programa ingrese '0'" << endl;
    cout << "de lo contrario ingrese 1" << endl;
    cin >> fin;
    }
    return 0;//fin algoritmo
}

