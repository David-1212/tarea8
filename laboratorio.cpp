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
    for(size_t i=0;i<cont; i ++){
        Computadora &p=arreglo[i];
        cout<<"nombre: "<<p. getNombre()<<endl;
        cout<<"sistema operativo: "<<p. getSistema()<<endl;
        cout<<"Ram: "<<p. getRam()<<endl;
        cout<<"Rom: "<<p. getRom()<<endl;
        cout<< endl;

    }
}