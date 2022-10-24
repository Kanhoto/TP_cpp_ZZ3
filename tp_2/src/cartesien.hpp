#ifndef CARTESIEN_KV
#define CARTESIEN_KV

#include "point.hpp"
#include "polaire.hpp"

class Polaire;

class Cartesien : public Point{
    private:
        double x, y;

    public:
        Cartesien(double, double);
        Cartesien(Polaire &);
        Cartesien();
        double getX() const {return x;};
        double getY() const {return y;};
        double getAngle() const {return 2*atan(y/(x + sqrt(pow(x,2) + pow(y,2))));};
        double getDistance() const {return sqrt(pow(x,2) + pow(y,2));};
        void setX(const double newX) {x = newX;};
        void setY(const double newY) {y = newY;};
        void afficher(std::ostream &) const override;
        void convertir(Polaire & Pol) const override;
        void convertir(Cartesien & Car) const override;
};

#endif