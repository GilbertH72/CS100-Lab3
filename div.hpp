#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <iostream>
#include <sstream>

class Div : public Base{
public:
    Div(Base* op1, Base* op2) : Base(){
        this->op1 = op1;
	this->op2 = op2;
    }
    virtual double evaluate(){
        return op1->evaluate() / op2->evaluate();
    }
    virtual std::string stringify(){
        std::ostringstream oss1, oss2, oss3;
        oss1 << op1->evaluate();
	oss2 << " / ";
	oss3 << op2->evaluate();
	oss2 << oss3.str();
	oss1 << oss2.str();
        return oss1.str();
    }
private:
    Base* op1;
    Base* op2;

};

#endif
