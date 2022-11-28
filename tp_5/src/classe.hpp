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

        void ajouter(double v=1.0){
            quantite += v;
        }
};

inline bool operator< (const Classe& lhs, const Classe& rhs) {
    return lhs.getBorneInf() < rhs.getBorneInf(); 
}

inline bool operator> (const Classe& lhs, const Classe& rhs) {
    return lhs.getBorneInf() > rhs.getBorneInf(); 
}

template<typename Tp>
    struct ComparateurQuantite
    {
      bool operator()( const Tp& lhs, const Tp& rhs ) const{
        return lhs.getQuantite() > rhs.getQuantite();
      }
    };

#endif