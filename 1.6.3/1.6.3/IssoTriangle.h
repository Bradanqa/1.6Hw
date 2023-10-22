#pragma once
#include "Triangle.h"

class IssoTriangle : public Triangle {
public:
   IssoTriangle(int a, int b, int A);

   void print_info() override;
};