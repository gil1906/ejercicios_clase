#include <iostream>
#include <string>//biblioteca para uso de cadena de caracteres

using namespace std;

int main()
{
    string nombre[7];
    float sueldo[7],horas[7],hijos[7],total[7],totale[7],totalf[7],aumento[7],totalt[7];
    for (int i=0;i<=6;i++){
        cout<< "ingrese nombre"<<i+1<<":"<<endl;
        cin>>nombre[i];
        cout <<"sueldo mensual"<<i+1<<endl;
        cin>> sueldo[i];
        cout<<"horas extras mensuales"<<i+1<<endl;
        cin>>horas[i];
        cout<< "numero de hijos "<<i+1<<endl;
        cin>>hijos[i];
        if (hijos[i]>3){
            total[i]=sueldo[i]+(sueldo[i]*0.1);
            aumento[i]=(sueldo[i]*0.1);
        }
        else{
            total[i]=sueldo[i];
        }
        totale[i]= sueldo[i]+(horas[i] * 0.01);
        totalf[i]=totale[i]+total[i];
        totalt[i]=aumento[i]+(horas[i]*0.01);
    }
    for (int i=0; i<=6;i++){
        cout<< "nombre "<<nombre[i]<<endl;
        cout<< "sueldo "<< total[i]<<endl;
        cout<< "aumento sueldo "<<totalt[i]<<endl;

    }
    return 0;
}
