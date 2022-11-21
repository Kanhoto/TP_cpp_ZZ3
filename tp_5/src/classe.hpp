#ifndef CLASSE_HPP
#define CLASSE_HPP

class Classe{
    public:
        double a, b;
        unsigned int quantite;

        Classe(const double & a_i = 0.0, const double & b_i = 0.0, const unsigned int & quantite_i = 0u)
        :a(a_i),b(b_i),quantite(quantite_i){};

        double const & getBorneInf() const{
            return a < b ? a : b;
        };

        double const & getBorneSup() const{
            return a > b ? a : b;
        };

        unsigned int const & getQuantite() const{
            return quantite;
        };

        void setBorneInf(const double & val_i){
            if(a < b){
                a = val_i;
            }
            else{
                b = val_i;
            }
        };

        void setBorneSup(const double & val_i){
            if(a > b){
                a = val_i;
            }
            else{
                b = val_i;
            }
        };

        void setQuantite(const double & val_i){
            quantite = val_i;
        };

        void ajouter(){
            ++quantite;
        }
};

#endif