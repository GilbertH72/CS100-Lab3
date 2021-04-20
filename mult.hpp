#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"
#include <iostream>

class Mult : public Base
{
public:
   Mult(Base* op_1, Base* op_2) : Base()
   {
      this->op_1 = op_1;
      this->op_2 = op_2;
   }
   virtual double evaluate()
   {
      return op_1->evaluate() * op_2->evaluate();
   }
   virtual std::string stringify()
   {
      std::ostringstream oss;
      oss << op_1->stringify() << " * " << op_2->stringify();
      std::string oss_value = oss.str();
      return oss_value;
   }

private:
   Base* op_1;
   Base* op_2;
};
#endif //__MULT_HPP__
