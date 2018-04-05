#include <iostream>
#include <math.h>//biblioteca ezponente

using namespace std;
float potencia(float base, float expo){//variables globales
    return pow (base,expo);
}

int main()
{
    int fin=1;
    float base=2,expo=0,total=0,totalf=0,totalr=0;//variables locales
    while (fin==1){
    cout << "ingrese el exponente a llegar" << endl;
    cin >> expo;
    for (int i=0; i<=expo; i++){
        cout<<" potencia - "<<i<<endl;
        totalf = potencia (base,i);
        cout << " valor 2 a la "<<i<<" : "<<totalf<<endl;
        cout<< "raiz ="<<sqrt (totalf)<<endl;
        total = total + totalf;
        totalr = totalr + sqrt(totalf);
    }
    cout << "suma potencias : "<<total<<endl;
    cout << "suma de raices : "<<totalr<<endl;
    cout << "para volver a correr el programa oprima 1 sino 0 "<<endl;
    cin >> fin;
    }
    return 0;
}
