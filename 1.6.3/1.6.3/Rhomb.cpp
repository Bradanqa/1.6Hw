#include "Rhomb.h"

Rhomb::Rhomb(int side, int A, int B) : Quadrangle(side,side,side,side,A,B,A,B) {
   this->a = side;
   this->b = side;
   this->c = side;
   this->d = side;
   this->A = A;
   this->B = B;
   this->C = A;
   this->D = B;
}
void Rhomb::print_info() {
   std::cout << "Ромб: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}