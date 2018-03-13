#include <iostream>//library int/out
#include <math.h>//biblioteca matematica

using namespace std;//palabras reservadas
//funcion principal
int main()
{
    //declaraccion de variables
    int suma=0, contador=0,fin=1,num1=0,num2=0;
    char calculo;
    //inicio ciclo
    while (fin==1){
            cout <<"ingrese S si quiere sumar o M si quiere multiplicar "<< endl;
            cout << "ingrese otra letra para mostrar sumatoria";
            cin >> calculo;
        switch (calculo){
        case 'S':
            cout <<"ingrese numero 1"<< endl;
            cin >> num1;
            cout << "ingrese numero 2";
            cin >> num2;
            cout << "suma :" << num1+num2 << endl;
            break;
        case 'M':
            cout <<"ingrese numero 1"<< endl;
            cin >> num1;
            cout << "ingrese numero 2";
            cin >> num2;
            cout << "multiplicacion :" << num1*num2 << endl;
            break;
        default:
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
        break;
    cout << "si desea cerrar el programa ingrese '0'" << endl;
    cout << "de lo contrario ingrese 1" << endl;
    cin >> fin;
    }
    return 0;//fin algoritmo
}
}

