#include "nuage.hpp"

Nuage::Nuage(){}

void Nuage::ajouter(Point & Pt){
    vecPoints.push_back(&Pt);
}

int Nuage::size() const{
    return vecPoints.size();
}

Cartesien barycentre(Nuage & const Nua){
    for(Point* p : Nua.vecPoints){
        
    }
}