#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base {
    public:
        Rand() : Base() { }
        virtual double evaluate() { return rand() % 100; }
        virtual std::string stringify() { return std::to_string(rand() % 100); }
};

#endif //__RAND_HPP__

