#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{
    
    // Atributos 
    private:
    double x;
    double y;

    public:

    // Metodos constructores
    Punto();
    Punto(double _x, double _y);

    // Metodos modificadores
    void setX(double _x);
    void setY(double _y);

    // Metodos de acceso
    double getX();
    double getY();

    // Otros metodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif

