#include <iostream>
#include "laboratorio.h"
using namespace std;

int main (){
    laboratorio v;
    v.recuperar();
    v.recuperar();
    v.mostrar();
//Computadora p02=Computadora("DAVIDPC", "Windows 10",16,10);
//Computadora p03;
//p03.setNombre("VARGASPC");
//p03.setSistema("Windows 7");
//p03.setRam(20);
//p03.setRom(30);

laboratorio vj;
//vj.agregarComputadora(p02);
//vj.agregarComputadora(p03);
vj.recuperar();
 //vj.mostrar();
 //vj.respaldar_tabla();
// vj.respaldar();
 //vj <<p02 <<p03;

//cout << p02;
Computadora p04;
cin>>p04;
vj << p04;
vj.mostrar();
vj.respaldar_tabla();
vj.respaldar();
return 0;


}
 