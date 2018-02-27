#include <iostream>

using namespace std;

int main()
{
    int tiempo = 0;
    float salario = 0.0, total = 0.0;
    char cat = '0';
    cout <<  "salario en pesos "<< endl;
    cin >> salario;
    cout << "tiempo en años trabajado " << endl;
    cin >> tiempo;
    if (tiempo > 20 && tiempo <=30){
        cat = 'A';
    }
    else if (tiempo > 15 && tiempo <=20){
        cat = 'B';
    }
    else if (tiempo > 10 && tiempo <=15){
        cat = 'C';
    }
    else if (tiempo > 0 && tiempo <=10){
        cat = 'D';
    }
    else {
        cout <<"Dato Erroneo";
    }
    switch (cat){
        case 'A':
            total = (salario * 1.15);
            break;
        case 'B':
            total = (salario * 1.12);
            break;
        case 'C':
            total = (salario * 1.10);
            break;
        case 'D':
            total = (salario + 15000);
            break;
    }
    cout << " CATEGORIA " << cat << endl;
    cout << "total salario "<< endl;
    cout << salario;


    return 0;
}
