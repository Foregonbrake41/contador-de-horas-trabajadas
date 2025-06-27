#include <iostream>

using namespace std;

int main ()

{
    double ht,he,hn,pn,pe,pt;
    cout<<"Teclea las horas trabajadas: ";
    cin>>ht;
    if (ht>40)
    {
        he=ht-40;
        hn=ht-he;
        pn=hn*150;
        pe=he*180;
        pt=pn+pe;
        cout<<"\nHoras trabajadas: "<<hn;
        cout<<"\nHoras extras trabajadas: "<<he;
        cout<<"\nPago total: $"<<pt;
    }
    else
    { 
        pn=ht*150;
        cout<<"\nEl pago total es de: $"<<pn;
    }
    return 0;
}
