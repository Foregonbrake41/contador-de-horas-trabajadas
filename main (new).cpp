#include <iostream>

using namespace std;

int main ()

{
    double hrsTrabajadas,hrsExtras,hrsLibres,pagoTrabajado,pagoExtra,pagoTotal;
    
    cout<<"Teclea las horas trabajadas: ";
    cin>>hrsTrabajadas;
    
    if (hrsTrabajadas>40)
    {
        hrsExtras = hrsTrabajadas - 40;
        hrsLibres = hrsTrabajadas - hrsExtras;
        pagoTrabajado = hrsLibres * 150;
        pagoExtra = hrsExtras * 180;
        pagoTotal = pagoTrabajado + pagoExtra;
        cout<<"\nHoras trabajadas: "<<hrsLibres;
        cout<<"\nHoras extras trabajadas: "<<hrsExtras;
        cout<<"\nPago total: $"<<pagoTotal;
    }
    else
    { 
        pagoTrabajado = hrsTrabajadas * 150;
        cout<<"\nEl pago total es de: $"<<pagoTrabajado;
    }
    return 0;
}
