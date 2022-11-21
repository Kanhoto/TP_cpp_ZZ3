#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include <vector>
#include <algorithm>
#include "classe.hpp"
#include "echantillon.hpp"

class Histo{
    public:
        double b_inf, b_sup;
        std::vector<Classe> vec_classe;

        Histo(const double & inf_i = 0.0, const double & sup_i = 0.0, const unsigned int & nb_class_i = 0)
        :b_inf(inf_i), b_sup(sup_i){
            double inc = (sup_i - inf_i)/nb_class_i;
            for(unsigned int i=0; i<nb_class_i ; ++i){
                vec_classe.push_back(Classe(inf_i + i*inc, inf_i + (i+1)*inc));
            }
        };

        const std::vector<Classe> & getClasses() const{
            return vec_classe;
        };

        void ajouter(const Echantillon & echt_i) const{
            for(int i = 0; i < echt_i.getTaille(); ++i){
                const double & val_temp = echt_i.getValeur(i).getNombre();
                auto op = [val_temp](const Classe & cl){
                    return cl.getBorneInf() <= val_temp && cl.getBorneSup() >= val_temp;
                };
                auto itr = std::find_if(vec_classe.begin(), vec_classe.end(), op);
                if()
            }
        };
};

#endif