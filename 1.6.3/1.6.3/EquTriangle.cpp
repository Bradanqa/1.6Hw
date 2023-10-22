#include "EquTriangle.h"

EquTriangle::EquTriangle(int side) : Triangle(side,side,side,60,60,60) {
   this->a = side;
   this->b = side;
   this->c = side;
   this->A = 60;
   this->B = 60;
   this->C = 60;
}

void EquTriangle::print_info() {
   std::cout << "�������������� �����������: " << std::endl;
   std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
   std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}