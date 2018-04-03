#include <iostream> // biblioteca I/O
#include <math.h> // biblioteca matemática
using namespace std; // palabras reservadas

int main()
{
    //dedlaraci+ón de variables
    int k =0, total=0, fin = 0;
    // ciclo infinito para que solo se cierre si el usuario así lo quiere
    while(true){
            // ingreso de datos por el usuario
            // la u con tilde es '\243'"
        cout << "ingrese el n" << '\243' <<"mero de la tabla" << endl;
        cin >> k;
        //Ciclo repetitivo para mostrar la tabla completa
        for(int i=0; i<=10; i++){
            total = i*k;
            cout << k << " X " << i << " = " << total << endl;
            cout << "Al cuadrado = " << pow(total,5) << endl;
        }
        // pregunta al usuario si desea cerrar el programa
        cout << "Desea cerrar el programa?" << endl;
        cout << "Ingrese 1 para cerrarlo " << endl;
        cout << "ingrese 0 para continuar: ";
        cin >> fin;
        // rompe el ciclo while si el usuario pide cerrar el programa
        if(fin == 1){
            break;
        }
    }

    return 0;
}
