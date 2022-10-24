#ifndef POINT_KV
#define POINT_KV

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

class Polaire;
class Cartesien;

class Point{
    public:
        Point();
        virtual void afficher(std::ostream &) const = 0;
        virtual double getX() const = 0;
        virtual double getY() const = 0;

        friend std::ostream & operator<<(std::ostream & out, const Point & p){
            p.afficher(out);
            return out;
        }
        virtual void convertir(Polaire & Pol) const = 0;
        virtual void convertir(Cartesien & Car) const = 0;
};

#endif