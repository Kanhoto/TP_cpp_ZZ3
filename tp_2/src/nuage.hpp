#ifndef NUAGE_KV
#define NUAGE_KV

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"
#include <iterator> // For std::forward_iterator_tag
#include <cstddef>  // For std::ptrdiff_t

template <class T>
class Nuage
{
    private:
        std::vector<T> vecPoints;

    public:
        Nuage(){};
        ~Nuage(){};
        void ajouter(T const Pt){
            vecPoints.push_back(Pt);
        };

        int size() const{
            return vecPoints.size();
        };
    
        using const_iterator = typename std::vector<T>::iterator;

        const_iterator begin(){
            return vecPoints.begin();
        };

        const_iterator end(){
            return vecPoints.end();
        };

        friend T barycentre_v1(Nuage & n){
            double x = 0, y = 0;
            for(auto p : n){
                Cartesien Tp = Cartesien(p);
                x += Tp.getX();
                y += Tp.getY();
            }
            if(n.size() == 0){
                return T{0,0};
            }
            x = x / n.size();
            y = y / n.size();
            return T{x,y};
        };
};

#endif