#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include<iostream>

using namespace std;

class Computadora {
  private:
    string nombre;
    string sistema;
    float ram;
    int rom;

  public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, float ram,int rom);

    void setNombre(const string &v);
    string getNombre();

    void setSistema(const string &v);
    string getSistema();

    void setRam(float v);
    float getRam();

    void setRom(int v);
    int getRom();
  };

#endif
