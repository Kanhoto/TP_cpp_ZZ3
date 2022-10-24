#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <string>
#include <sstream>
#include "exception.hpp"

template<typename T>
std::string chaine(T value){
    throw ExceptionChaine(value);
}

template<>
std::string chaine<std::string>(std::string value){
    return value;
}

template<>
std::string chaine<int>(int value){
    std::stringstream ss;
    ss << value;
    return ss.str();
}

template<>
std::string chaine<double>(double value){
    return std::to_string(value);
}


#endif