#ifndef NUAGE_KV
#define NUAGE_KV

#include "point.hpp"
#include "cartesien.hpp"
#include <iterator> // For std::forward_iterator_tag
#include <cstddef>  // For std::ptrdiff_t

class Nuage{
    private:
        std::vector<Point *> vecPoints;

    public:
        Nuage();
        void ajouter(Point & Pt);
        int size() const;
        using const_iterator = std::vector<Point *>::const_iterator;
        const_iterator begin(){return vecPoints.begin();};
        const_iterator end(){return vecPoints.end();};
        friend Cartesien barycentre(Nuage & const);
};

#endif