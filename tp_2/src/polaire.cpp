#include "polaire.hpp"

Polaire::Polaire(double newAngle, double newDistance):angle(newAngle),distance(newDistance){}

Polaire::Polaire(Cartesien & Car){
    Car.convertir(*this);
}

Polaire::Polaire(){
    
}

void Polaire::afficher(std::ostream & myStream) const{
    myStream << "(a=" << getAngle() << ";d=" << getDistance() << ")";
}

void Polaire::convertir(Cartesien & Car) const{
    Car.setX(distance * cos(angle*(M_PI/180)));
    Car.setY(distance * sin(angle*(M_PI/180)));
}

void Polaire::convertir(Polaire & Pol) const{
    Pol.setAngle(angle);
    Pol.setDistance(distance);
}