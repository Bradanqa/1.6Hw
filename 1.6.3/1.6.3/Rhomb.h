#pragma once
#include "Quadrangle.h"

class Rhomb : public Quadrangle {
public:
   Rhomb(int side, int A, int B);

   void print_info() override;
};