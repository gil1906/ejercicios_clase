#include <iostream>

using namespace std;

int main()
{
    //DEclaración de variables
    float R1 = 0.0, R2=0.0, Rp =0, R3=0.0;
    int Nr = 0, salir = 0;
    // mensajes para el usuario
    cout << "Este programa calcula N resistencias en paralelo" << endl;

    //inreso de datos por el usuario
    while(true){
        cout << "Ingrese la cantidad de resistencias que desea calcular: ";
        cin >> Nr;
        cin.clear();
        if(Nr<=1){
            cout << "Debe ingresar al menos dos resistencias" << endl;
        }
        else{
            cout << "Ingrese R1: ";
            cin >> R1;
            cout << "Ingrese R2: ";
            cin >> R2;
            Rp = (R1*R2)/(R1+R2);
            cout << Rp << endl;
            for(int i=3; i<=Nr; i++){
                cout << "Ingrese R" << i << ": ";
                cin >> R3;
                Rp = (Rp*R3)/(Rp+R3);
                cout << Rp <<  endl;
            }
            cout << "Resistencia totoal: " << Rp;
        }
        cout << "presione un numero para volver a comenzar o cero('0') para salir: ";
        cin >> salir;
        if(salir == 1){
            break;
        }
        cin.clear(); // limpia memoria de acceso de datos
        cin.ignore(10000,'\n'); // ignora carácters y el enter para permitir una nueva entrada de datos
    }
    return 0;
}
