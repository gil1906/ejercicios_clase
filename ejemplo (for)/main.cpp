#include <iostream>

using namespace std;

int main()
{
    //declaracion de variables
    float R1=0.0, R2=0.0, Rp=0.0, R3=0.0;
    int Nr=0, salir=0;
    //mensajes para el usuario
    while (true){
    if (Nr<=1){
            cout<< "debe ingresar almenos 2 resistencias ";
    cout << "este programa calcula N ressistencias en pralelo " << endl;
    //ingreso de datos
        cout << "ingrese la cantidad de resistencias que desea calcular ";
        cin >> Nr;
    }
            else {
                cout << "ingrese R1: ";
                cin >> R1;
                cout << "ingrese R2: ";
                cin >> R2;
                Rp=(R1*R2)/(R1+R2);
                cout << Rp << endl;
            for(int i=3; i<=Nr;i++){
                cout << "ingrese R"<<i<<": ";
                cin >> R3;
                Rp = (Rp*R3)/(Rp+R3);
                cout << Rp << endl;
            }
        }
    cout << "resistencia total " << Rp;
    cout << "ingrese 1 para volver a comenzar o cero ('0') para salir " << endl;
    cin >> salir;
    if (salir ==1){
            break;
            }
        }
    }
    return 0;
