#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle {
public:
   Square(int side);

   void print_info() override;
};