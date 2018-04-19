#include <iostream>
#include <string>//biblioteca para uso de cadena de caracteres

using namespace std;

int main()
{
    float suma=0, total=0;
    string nombre[5];
    float notas[5];
    for (int i=0;i<=4;i++){
        cout<< "ingrese nombre estudiante "<<i+1<<":"<<endl;
        cin>>nombre[i];
        for (int j=1;j<=5;j++){//notas para cada estudiante con otra variable en el for
            cout<<"ingrese nota "<<i<<":"<<endl;
            cin>> suma;
            total=total+suma;
        }
        notas[i]=total/5;
        total=0;
    }
    for (int i=0;i<=4;i++){
        cout<<"nombre "<<nombre[i];
        cout <<" - promedio nota "<<notas[i]<<endl;
    }
    return 0;
}
