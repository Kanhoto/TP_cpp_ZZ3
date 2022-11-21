#ifndef VALEUR_HPP
#define VALEUR_HPP

class Valeur{
    public:
        double value;

        Valeur(const double & value_i = 0.0)
        :value(value_i){};

        ~Valeur(){};

        const double getNombre() const {
            return value;
        };

        void setNombre(const double & val_i){
            value = val_i;
        };
};

#endif