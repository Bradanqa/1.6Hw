#include "Square.h"

Square::Square(int side) : Quadrangle(side,side,side,side,90,90,90,90)  {
   this->a = side;
   this->b = side;
   this->c = side;
   this->d = side;
   this->A = 90;
   this->B = 90;
   this->C = 90;
   this->D = 90;
}

void Square::print_info() {
   std::cout << "Квадрат: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}