#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <iostream>
#include <sstream>

class Rand : public Base{
public:
    Rand() : Base(){
        this->value = rand() % 100;
    }
    virtual double evaluate(){
        return value;
    }
    virtual std::string stringify(){
        std::ostringstream oss;
        oss << value;
	std::string oss_value = oss.str();
        return oss_value;
    }
private:
    double value;
};

#endif
