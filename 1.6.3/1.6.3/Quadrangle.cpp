#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(){
   this->a = a;
   this->b = b;
   this->c = c;
   this->d = d;
   this->A = A;
   this->B = B;
   this->C = C;
   this->D = D;
}

void Quadrangle::print_info() {
   std::cout << "Четырехугольник: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}