#include "RightTriangle.h"

RightTriangle::RightTriangle( int a, int b, int c, int A, int B) : Triangle(a,b,c,A,B,90) {
   this->a = a;
   this->b = b;
   this->c = c;
   this->A = A;
   this->B = B;
   this->C = 90;
}

void RightTriangle::print_info() {
   std::cout << "Прямоугольный треугольник: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}