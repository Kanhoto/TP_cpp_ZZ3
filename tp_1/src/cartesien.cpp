#include "cartesien.hpp"

Cartesien::Cartesien(double newX, double newY):x(newX),y(newY){}

Cartesien::Cartesien(Polaire & Pol){
    Pol.convertir(*this);
}

Cartesien::Cartesien(){
    Cartesien(0,0);
}

void Cartesien::afficher(std::ostream & myStream) const{
    myStream << "(x=" << getX() << ";y=" << getY() << ")";
}

void Cartesien::convertir(Polaire & Pol) const{
    double dis = sqrt(pow(x,2) + pow(y,2));
    Pol.setDistance(dis);
    double ang = 2*atan(y/(x + Pol.getDistance()));
    Pol.setAngle(ang * 180 / M_PI);
}

void Cartesien::convertir(Cartesien & Car) const{
    Car.setX(x);
    Car.setY(y);
}