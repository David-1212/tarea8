#include <iostream>
#include "laboratorio.h"
using namespace std;

int main (){
Computadora p02=Computadora("DAVIDPC", "Windows 10",16,10);
Computadora p03;
p03.setNombre("DAVIDPC");
p03.setSistema("Windows 10");
p03.setRam(16);
p03.setRom(10);

laboratorio vj;
vj.agregarComputadora(p02);
vj.agregarComputadora(p03);
vj.mostrar();


return 0;


}
