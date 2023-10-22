#pragma once
#include "Quadrangle.h"

class Para : public Quadrangle {
public:
   Para(int a, int b, int A, int B);

   void print_info() override;
};