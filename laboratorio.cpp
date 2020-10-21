#include "laboratorio.h"
#include <fstream>

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

void laboratorio::respaldar_tabla()
{
     
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left ;
        archivo <<setw(15)<<"Nombre";
        archivo <<setw(16)<<"Sistema";
        archivo <<setw(7)<<"Ram";
        archivo <<setw(7)<<"Rom";
        archivo <<endl;
        
        for(size_t i=0;i<cont; i ++){
                Computadora &p=arreglo[i];
                archivo <<p;
        }
}
archivo.close();
}
void laboratorio::respaldar()
{
     
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i=0;i<cont; i ++){
                Computadora &p=arreglo[i];
                archivo <<p.getNombre()<<endl;
                archivo <<p.getSistema()<<endl;
                archivo <<p.getRam()<<endl;
                archivo <<p.getRom()<<endl;
        }
}
    archivo.close();
}
void laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        float ram;
        int rom;
        Computadora p;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setNombre(temp);

            getline(archivo,temp);
            p.setSistema(temp);

            getline(archivo,temp);
            ram = stof(temp);
            p.setRam(ram);

            getline(archivo, temp);
            rom = stoi(temp);
            p.setRom(rom);

            agregarComputadora(p);
        }
        
    }
    archivo.close();
}