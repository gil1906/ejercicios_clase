#include <iostream>
#include <string>//biblioteca para uso de cadena de caracteres

using namespace std;

int main()
{
    float total=0,totalf=0,total1=0;
    string nombre[5];
    float notas[5];
    for (int i=1;i<=5;i++){
        cout<< "ingrese nombre estudiante :"<<i<<endl;
        cin>>nombre[i-1];
        cout << "ingrese nota estudiante :"<<i<<endl;
        cin>>notas[i-1];
        total1 = notas[i-1];
        total = total + total1;
        totalf=total/5;
        cout<<totalf;
    }
    return 0;
}
