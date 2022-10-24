#ifndef POLAIRE_KV
#define POLAIRE_KV

#include "point.hpp"
#include "cartesien.hpp"

class Cartesien;

class Polaire : public Point{
    private:
        double angle, distance;

    public:
        Polaire(double, double);
        Polaire(Cartesien &);
        Polaire();
        double getAngle() const {return angle;};
        double getDistance() const {return distance;};
        double getX() const {return distance * cos(angle);};
        double getY() const {return distance * sin(angle);};
        void setAngle(const double newAngle){angle = newAngle;};
        void setDistance(const double newDistance){distance = newDistance;};
        void afficher(std::ostream &) const override;
        void convertir(Cartesien &) const override;
        void convertir(Polaire &) const override;
};

#endif