#include <iostream>
#include <math.h>//biblioteca ezponente

using namespace std;
float potencia(float base, float expo){//variables globales
    return pow (base,expo);
}

int main()
{
    float base=0,expo=0,total=0;//variables locales
    cout << "ingrese el numero a exponer " << endl;
    cin >> base;
    cout << "ingrese la exponente " << endl;
    cin >> expo;
    total = potencia (base,expo);
    cout << "dato : "<<total;
    return 0;
}
