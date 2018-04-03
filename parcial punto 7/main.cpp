#include <iostream>//BIBLIOTECA ENTRADA Y SALIDA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    //DECLARACION DE VARIABLES
    int h=0,p=0,s=0,c=0,propina=1;
    int personas=0,total=0,fin=1,total1=0,totalf=0;
    char tipo='0';
    cout << "menu restaurante"<<endl,//MENU DEL RESTAURANTE
    cout << "   hamburguesa  |  10000  |"<<endl;
    cout << "   perros       |  8000   |"<<endl;
    cout << "   salchipapas  |  6000   |"<< endl;
    cout << "   chorizos     |  7000   |"<< endl;
    cout << "para escoger los plato A para hamburguesa, B para perro, C para salchipapas y D para chorizo "<<endl;
    cout << "ingrese el numero de personas de la mesa " << endl;
    cin >> personas;//INGRESO DE TOTAL DE PERSONAS EN LA MESA
    while (fin==1){//CICLO INFINITO CON PREGUNTA DE CIERRE
        for(int i=1; i<=personas; i++){//CICLO DE 1 EN 1
                cout <<" persona -"<<i;
                cout << " ingrese plato que desea comer "<<endl;
                cin >>tipo;
            switch (tipo){//PARA SELECCION DE MENU
                case 'A':
                    cout <<"eligio hamburguesa"<<endl;
                    total1 = 10000;
                    break;
                case 'B':
                    cout << "eligio perro"<<endl;
                    total1 = 8000;
                    break;
                case 'C':
                    cout << "eligio salchipapas"<<endl;
                    total1 = 6000;
                    break;
                case 'D':
                    cout << "eligio chorizo"<<endl;
                    total1 = 7000;
                    break;
                default:
                    cout << "dato erroneo"<<endl;
                    break;
            }
            total=total+total1;//SUMA DE TODOS LOS PLATOS
        }
        cout << "TOTAL DE LA COMPRA = "<<total<<endl;
        if (total>200000){//PARA HACER EL DESCUENTO
            totalf=total-(total*(0.1));
            cout <<"se realizo un descuento del 10%"<<endl;
            cout << totalf;
        }
        else {
            break;
        }
        cout << "si desea incluir propina ingrese 1, de lo contrario 0"<<endl;
        cin >> propina;
        if (propina==1){//INGRESO DE PROPINA
            totalf=total+(total*(0.1));
        }
        else {
            break;
        }
        cout << "para cerrar el programa oprima 0 para volver a correrlo oprima 1"<<endl;
        cin >> fin;//FIN DEL WHILE
    }
    return 0;
}
