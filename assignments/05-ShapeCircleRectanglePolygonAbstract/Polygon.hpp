#pragma once

#include "Shape.hpp"
class Polygon : public Shape
{
private:
    int n;
    int lado;
    int apotema;

public:
    Polygon();
    Polygon(double, double, double);
    
    std::string draw() override;
    double getArea() override;    
};

