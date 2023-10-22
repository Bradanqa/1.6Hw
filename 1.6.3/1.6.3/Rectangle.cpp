#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadrangle(a,b,a,b,90,90,90,90) {
   this->a = a;
   this->b = b;
   this->c = a;
   this->d = b;
   this->A = 90;
   this->B = 90;
   this->C = 90;
   this->D = 90;
}

void Rectangle::print_info() {
   std::cout << "Прямоугольник: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}