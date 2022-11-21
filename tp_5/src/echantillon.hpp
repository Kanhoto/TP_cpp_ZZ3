#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include "valeur.hpp"
#include <vector>
#include <stdexcept>

class Echantillon{
    public:
        std::vector<Valeur> vec_value;

        Echantillon(const std::vector<Valeur> & vec_val_i = {})
        :vec_value(vec_val_i){};

        ~Echantillon(){};

        const int getTaille() const{
            return vec_value.size();
        };

        void ajouter(const Valeur & val_i){
            vec_value.push_back(val_i);
        };

        const Valeur & getMaximum() const{
            auto itr = std::min_element(vec_value.begin(), vec_value.end(), [](const Valeur & x, const Valeur & y){
                return x.getNombre() > y.getNombre();
                });
            if(itr == vec_value.end()){
                throw std::domain_error("Max error");
            }
            return *itr;
        };

        const Valeur & getMinimum() const{
            auto itr = std::min_element(vec_value.begin(), vec_value.end(), [](const Valeur & x, const Valeur & y){
                return x.getNombre() < y.getNombre();
                });
            if(itr == vec_value.end()){
                throw std::domain_error("Min error");
            }
            return *itr;
        };

        Valeur getValeur(const int & val_i) const{
            return vec_value.at(val_i);
        };
};

#endif