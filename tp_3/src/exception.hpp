#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
#include "demangle.hpp"
#include <typeinfo>

class ExceptionChaine : public std::exception{
    private:
        std::string msg;
    public:
        template<typename T> ExceptionChaine(T msg_i): msg("Conversion en chaine impossible pour '" + demangle(typeid(msg_i).name())  + "'"){}
        ExceptionChaine(){}
        /**
         * ça tombe à coup sur le what
         */
        const char* what() const noexcept override{
            return msg.c_str();
        }
};

#endif