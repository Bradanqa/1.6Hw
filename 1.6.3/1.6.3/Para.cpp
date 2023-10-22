#include "Para.h"

Para::Para(int a, int b, int A, int B) : Quadrangle(a,b,a,b,A,B,A,B)  {
   this->a = a;
   this->b = b;
   this->c = a;
   this->d = b;
   this->A = A;
   this->B = B;
   this->C = A;
   this->D = B;
}
void Para::print_info() {
   std::cout << "Параллелограмм: " << std::endl;
   std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
   std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}