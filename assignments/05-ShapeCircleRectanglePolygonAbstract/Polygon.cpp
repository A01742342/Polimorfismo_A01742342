#include "Polygon.hpp"
#include "Shape.hpp"

Polygon::Polygon(){
    n = 0;
    lado = 0;
    apotema = 0;
}

Polygon::Polygon(double n, double lado, double apo){
    this->n=n;
    this->lado=lado;
    this->apotema=apo;
}

std::string Polygon::draw(){
    return "Soy un poligono";
}

double Polygon::getArea(){
    double i = 2;
    return (n*lado*apotema)/i;
}