#include "laboratorio.h"

laboratorio::laboratorio()
{
    cont=0;
}
void laboratorio::agregarComputadora(const Computadora &p)
{
    if(cont<5){
        arreglo[cont]=p;
        cont ++;
    }
    else
    {
        cout<<"arreglo lleno"<<endl;
    }
    
}
void laboratorio::mostrar()
{
    cout << left ;
    cout <<setw(15)<<"Nombre";
    cout <<setw(16)<<"Sistema";
    cout <<setw(7)<<"Ram";
    cout <<setw(7)<<"Rom";
    cout <<endl;
    for(size_t i=0;i<cont; i ++){
        Computadora &p=arreglo[i];
        cout <<p;
        //cout<<"nombre: "<<p. getNombre()<<endl;
       // cout<<"sistema operativo: "<<p. getSistema()<<endl;
       // cout<<"Ram: "<<p. getRam()<<endl;
      //  cout<<"Rom: "<<p. getRom()<<endl;
       // cout<< endl;

    }
}