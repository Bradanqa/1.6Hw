#pragma once
#include "Triangle.h"

class EquTriangle : public Triangle {
public:
   EquTriangle(int side);

   void print_info() override;
};